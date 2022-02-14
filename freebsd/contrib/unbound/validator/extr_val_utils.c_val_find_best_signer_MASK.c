
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct query_info {int * qname; } ;
struct packed_rrset_data {size_t count; size_t rrsig_count; int* rr_len; int ** rr_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t*) ;
 int FUNC_2 (int *,int ,int *,int ,int*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(struct ub_packed_rrset_key* VAR_0,
 struct query_info* VAR_1, uint8_t** VAR_2, size_t* VAR_3,
 int* VAR_4)
{
 struct packed_rrset_data* VAR_5 = (struct packed_rrset_data*)
  VAR_0->entry.data;
 uint8_t* VAR_6;
 size_t VAR_7;
 int VAR_8;
 for(VAR_7=VAR_5->count; VAR_7<VAR_5->count+VAR_5->rrsig_count; VAR_7++) {
  VAR_6 = VAR_5->rr_data[VAR_7]+2+18;




  if(VAR_5->rr_len[VAR_7] > 2+19 &&
   FUNC_3(VAR_1->qname, VAR_6)) {
   (void)FUNC_2(VAR_1->qname,
    FUNC_0(VAR_1->qname),
    VAR_6, FUNC_0(VAR_6), &VAR_8);
   if(VAR_8 > *VAR_4) {
    *VAR_4 = VAR_8;
    *VAR_2 = VAR_6;
    (void)FUNC_1(*VAR_2,
     VAR_3);
   }
  }
 }
}
