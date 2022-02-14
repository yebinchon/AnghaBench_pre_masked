
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct ub_result {int ttl; char** data; int* len; int * canonname; } ;
struct TYPE_6__ {int * dname; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct reply_info {scalar_t__ rrset_count; size_t an_numrrsets; scalar_t__ ttl; TYPE_4__** rrsets; } ;
struct query_info {int qname; } ;
struct packed_rrset_data {int count; int* rr_len; scalar_t__ ttl; scalar_t__* rr_data; } ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_3__ entry; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct ub_result*,int *) ;
 char* FUNC_2 (scalar_t__,size_t) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct ub_result* VAR_0, struct ub_packed_rrset_key* VAR_1,
 uint8_t* VAR_2, struct query_info* VAR_3, struct reply_info* VAR_4)
{
 size_t VAR_5;
 struct packed_rrset_data* VAR_6;
 VAR_0->ttl = 0;
 if(!VAR_1) {
  if(VAR_2) {
   if(!FUNC_1(VAR_0, VAR_2))
    return 0;
  }
  if(VAR_4->rrset_count != 0)
   VAR_0->ttl = (int)VAR_4->ttl;
  VAR_0->data = (char**)FUNC_0(1, sizeof(char*));
  VAR_0->len = (int*)FUNC_0(1, sizeof(int));
  return (VAR_0->data && VAR_0->len);
 }
 VAR_6 = (struct packed_rrset_data*)VAR_1->entry.data;
 if(FUNC_3(VAR_3->qname, VAR_1->rk.dname) != 0) {
  if(!FUNC_1(VAR_0, VAR_1->rk.dname))
   return 0;
 } else VAR_0->canonname = ((void*)0);
 VAR_0->data = (char**)FUNC_0(VAR_6->count+1, sizeof(char*));
 VAR_0->len = (int*)FUNC_0(VAR_6->count+1, sizeof(int));
 if(!VAR_0->data || !VAR_0->len)
  return 0;
 for(VAR_5=0; VAR_5<VAR_6->count; VAR_5++) {

  VAR_0->len[VAR_5] = (int)(VAR_6->rr_len[VAR_5] - 2);
  VAR_0->data[VAR_5] = FUNC_2(VAR_6->rr_data[VAR_5]+2, (size_t)VAR_0->len[VAR_5]);
  if(!VAR_0->data[VAR_5])
   return 0;
 }

 if(VAR_6->count != 0) {
  size_t VAR_7;
  VAR_0->ttl = (int)VAR_6->ttl;
  for(VAR_7=0; VAR_7<VAR_4->an_numrrsets; VAR_7++) {
   struct packed_rrset_data* VAR_8 =
    (struct packed_rrset_data*)VAR_4->rrsets[VAR_7]->
    entry.data;
   if((int)VAR_8->ttl < VAR_0->ttl)
    VAR_0->ttl = (int)VAR_8->ttl;
  }
 }

 if(VAR_6->count == 0 && VAR_4->rrset_count != 0)
  VAR_0->ttl = (int)VAR_4->ttl;
 VAR_0->data[VAR_6->count] = ((void*)0);
 VAR_0->len[VAR_6->count] = 0;
 return 1;
}
