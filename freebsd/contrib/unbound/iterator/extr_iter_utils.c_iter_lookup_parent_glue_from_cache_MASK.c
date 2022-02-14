
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
struct delegpt_ns {int done_pside4; int done_pside6; int namelen; int name; struct delegpt_ns* next; } ;
struct delegpt {struct delegpt_ns* nslist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int) ;
 int FUNC_1 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int) ;
 size_t FUNC_2 (struct delegpt*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,struct ub_packed_rrset_key*) ;
 struct ub_packed_rrset_key* FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_7(struct module_env* VAR_4,
        struct delegpt* VAR_5, struct regional* VAR_6, struct query_info* VAR_7)
{
 struct ub_packed_rrset_key* VAR_8;
 struct delegpt_ns* VAR_9;
 size_t VAR_10 = FUNC_2(VAR_5);
 for(VAR_9 = VAR_5->nslist; VAR_9; VAR_9 = VAR_9->next) {

  VAR_8 = FUNC_6(VAR_4->rrset_cache, VAR_9->name,
   VAR_9->namelen, VAR_0, VAR_7->qclass,
   VAR_2, *VAR_4->now, 0);
  if(VAR_8) {
   FUNC_5(VAR_3, "found parent-side", VAR_8);
   VAR_9->done_pside4 = 1;

   if(!FUNC_0(VAR_5, VAR_6, VAR_8, 1))
    FUNC_4("malloc failure in lookup_parent_glue");
   FUNC_3(&VAR_8->entry.lock);
  }

  VAR_8 = FUNC_6(VAR_4->rrset_cache, VAR_9->name,
   VAR_9->namelen, VAR_1, VAR_7->qclass,
   VAR_2, *VAR_4->now, 0);
  if(VAR_8) {
   FUNC_5(VAR_3, "found parent-side", VAR_8);
   VAR_9->done_pside6 = 1;

   if(!FUNC_1(VAR_5, VAR_6, VAR_8, 1))
    FUNC_4("malloc failure in lookup_parent_glue");
   FUNC_3(&VAR_8->entry.lock);
  }
 }

 return FUNC_2(VAR_5) != VAR_10;
}
