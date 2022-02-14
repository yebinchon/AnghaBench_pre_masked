
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int time_t ;
struct TYPE_3__ {int lock; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct msgreply_entry {TYPE_2__ entry; } ;
struct module_env {int rrset_cache; int * now; } ;
struct delegpt_ns {int namelen; int name; int lame; struct delegpt_ns* next; } ;
struct delegpt {struct delegpt_ns* nslist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct delegpt*,struct msgreply_entry*) ;
 int FUNC_1 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_2 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 struct msgreply_entry* FUNC_5 (struct module_env*,int ,int ,int ,int ,int ,int ,int ) ;
 struct ub_packed_rrset_key* FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ) ;

int
FUNC_7(struct module_env* VAR_3, uint16_t VAR_4,
 struct regional* VAR_5, struct delegpt* VAR_6)
{
 struct delegpt_ns* VAR_7;
 struct msgreply_entry* VAR_8;
 struct ub_packed_rrset_key* VAR_9;
 time_t VAR_10 = *VAR_3->now;
 for(VAR_7 = VAR_6->nslist; VAR_7; VAR_7 = VAR_7->next) {
  VAR_9 = FUNC_6(VAR_3->rrset_cache, VAR_7->name,
   VAR_7->namelen, VAR_0, VAR_4, 0, VAR_10, 0);
  if(VAR_9) {
   if(!FUNC_1(VAR_6, VAR_5, VAR_9, VAR_7->lame)) {
    FUNC_3(&VAR_9->entry.lock);
    return 0;
   }
   FUNC_4(VAR_2, "found in cache",
    VAR_7->name, VAR_0, VAR_4);
   FUNC_3(&VAR_9->entry.lock);
  } else {


   VAR_8 = FUNC_5(VAR_3, VAR_7->name, VAR_7->namelen,
    VAR_0, VAR_4, 0, VAR_10, 0);
   if(VAR_8) {
    FUNC_0(VAR_6, VAR_8);
    FUNC_3(&VAR_8->entry.lock);
   }
  }
  VAR_9 = FUNC_6(VAR_3->rrset_cache, VAR_7->name,
   VAR_7->namelen, VAR_1, VAR_4, 0, VAR_10, 0);
  if(VAR_9) {
   if(!FUNC_2(VAR_6, VAR_5, VAR_9, VAR_7->lame)) {
    FUNC_3(&VAR_9->entry.lock);
    return 0;
   }
   FUNC_4(VAR_2, "found in cache",
    VAR_7->name, VAR_1, VAR_4);
   FUNC_3(&VAR_9->entry.lock);
  } else {


   VAR_8 = FUNC_5(VAR_3, VAR_7->name, VAR_7->namelen,
    VAR_1, VAR_4, 0, VAR_10, 0);
   if(VAR_8) {
    FUNC_0(VAR_6, VAR_8);
    FUNC_3(&VAR_8->entry.lock);
   }
  }
 }
 return 1;
}
