
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct auth_zone {int namelen; int name; } ;
struct auth_rrset {TYPE_1__* data; } ;
struct auth_data {int dummy; } ;
struct TYPE_2__ {size_t count; size_t** rr_data; size_t* rr_len; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct auth_rrset* FUNC_0 (struct auth_data*,int ) ;
 struct auth_data* FUNC_1 (struct auth_zone*,int ,int ) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (size_t*) ;

__attribute__((used)) static int
FUNC_4(struct auth_zone* VAR_2, int* VAR_3, size_t* VAR_4, uint8_t** VAR_5,
 size_t* VAR_6)
{
 struct auth_data* VAR_7;
 struct auth_rrset* VAR_8;
 size_t VAR_9;
 VAR_7 = FUNC_1(VAR_2, VAR_2->name, VAR_2->namelen);
 if(!VAR_7) return 0;
 VAR_8 = FUNC_0(VAR_7, VAR_0);
 if(!VAR_8 || VAR_8->data->count==0)
  return 0;


 for(VAR_9=0; VAR_9<VAR_8->data->count; VAR_9++) {
  uint8_t* VAR_10 = VAR_8->data->rr_data[VAR_9]+2;
  size_t VAR_11 = VAR_8->data->rr_len[VAR_9];
  if(VAR_11 < 2+5)
   continue;
  if(!FUNC_2((int)(VAR_10[0])))
   continue;
  if(VAR_11 < (size_t)(2+5+(size_t)VAR_10[4]))
   continue;
  if((VAR_10[1]&VAR_1)!=0)
   continue;
  *VAR_3 = (int)(VAR_10[0]);
  *VAR_4 = FUNC_3(VAR_10+2);
  *VAR_6 = VAR_10[4];
  if(*VAR_6 == 0)
   *VAR_5 = ((void*)0);
  else *VAR_5 = VAR_10+5;
  return 1;
 }

 return 0;
}
