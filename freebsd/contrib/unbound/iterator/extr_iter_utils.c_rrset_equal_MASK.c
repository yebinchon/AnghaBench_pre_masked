
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dname_len; scalar_t__ flags; scalar_t__ type; scalar_t__ rrset_class; int dname; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct packed_rrset_data {size_t count; size_t rrsig_count; scalar_t__ trust; scalar_t__ security; scalar_t__* rr_len; int * rr_data; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct ub_packed_rrset_key* VAR_0, struct ub_packed_rrset_key* VAR_1)
{
 struct packed_rrset_data* VAR_2 = (struct packed_rrset_data*)
  VAR_0->entry.data;
 struct packed_rrset_data* VAR_3 = (struct packed_rrset_data*)
  VAR_1->entry.data;
 size_t VAR_4, VAR_5;
 if(VAR_0->rk.dname_len != VAR_1->rk.dname_len ||
  VAR_0->rk.flags != VAR_1->rk.flags ||
  VAR_0->rk.type != VAR_1->rk.type ||
  VAR_0->rk.rrset_class != VAR_1->rk.rrset_class ||
  FUNC_1(VAR_0->rk.dname, VAR_1->rk.dname) != 0)
  return 0;
 if(
  VAR_2->count != VAR_3->count ||
  VAR_2->rrsig_count != VAR_3->rrsig_count ||
  VAR_2->trust != VAR_3->trust ||
  VAR_2->security != VAR_3->security)
  return 0;
 VAR_5 = VAR_2->count + VAR_2->rrsig_count;
 for(VAR_4=0; VAR_4<VAR_5; VAR_4++) {
  if(VAR_2->rr_len[VAR_4] != VAR_3->rr_len[VAR_4] ||

   FUNC_0(VAR_2->rr_data[VAR_4], VAR_3->rr_data[VAR_4],
    VAR_2->rr_len[VAR_4]) != 0)
   return 0;
 }
 return 1;
}
