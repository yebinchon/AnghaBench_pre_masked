
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int time_t ;
struct auth_rrset {TYPE_1__* data; } ;
struct TYPE_2__ {size_t rrsig_count; size_t count; size_t* rr_len; int * rr_ttl; int ** rr_data; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,size_t) ;
 int FUNC_1 (struct auth_rrset*,int ,int *,size_t,int ) ;

__attribute__((used)) static int
FUNC_2(struct auth_rrset* VAR_0,
 struct auth_rrset* VAR_1)
{
 size_t VAR_2;
 if(VAR_0->data->rrsig_count == 0)
  return 1;



 for(VAR_2=VAR_0->data->count;
  VAR_2<VAR_0->data->count+VAR_0->data->rrsig_count; VAR_2++) {
  uint8_t* VAR_3 = VAR_0->data->rr_data[VAR_2];
  size_t VAR_4 = VAR_0->data->rr_len[VAR_2];
  time_t VAR_5 = VAR_0->data->rr_ttl[VAR_2];

  if(FUNC_0(VAR_1->data, VAR_3, VAR_4)) {
   continue;
  }
  if(!FUNC_1(VAR_1, VAR_5, VAR_3, VAR_4, 0))
   return 0;
 }
 return 1;
}
