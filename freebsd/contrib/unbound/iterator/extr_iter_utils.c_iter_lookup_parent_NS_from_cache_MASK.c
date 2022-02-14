
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct query_info {int qclass; } ;
struct module_env {int * now; int rrset_cache; } ;
struct delegpt {int has_parent_side_NS; int namelen; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,struct ub_packed_rrset_key*) ;
 struct ub_packed_rrset_key* FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ) ;

int
FUNC_4(struct module_env* VAR_3, struct delegpt* VAR_4,
 struct regional* VAR_5, struct query_info* VAR_6)
{
 struct ub_packed_rrset_key* VAR_7;
 VAR_7 = FUNC_3(VAR_3->rrset_cache, VAR_4->name,
  VAR_4->namelen, VAR_0, VAR_6->qclass,
  VAR_1, *VAR_3->now, 0);
 if(VAR_7) {
  FUNC_2(VAR_2, "found parent-side NS in cache", VAR_7);
  VAR_4->has_parent_side_NS = 1;

  if(!FUNC_0(VAR_4, VAR_5, VAR_7, 1)) {
   FUNC_1(&VAR_7->entry.lock);
   return 0;
  }
  FUNC_1(&VAR_7->entry.lock);
 }
 return 1;
}
