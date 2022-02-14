
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
struct module_env {int rrset_cache; } ;
struct dns_msg {int dummy; } ;
struct delegpt_ns {int namelen; int name; struct delegpt_ns* next; } ;
struct delegpt {struct delegpt_ns* nslist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ub_packed_rrset_key*,struct regional*,struct dns_msg*,int ) ;
 int FUNC_1 (struct delegpt*,struct msgreply_entry*) ;
 int FUNC_2 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_3 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_4 (int *) ;
 struct msgreply_entry* FUNC_5 (struct module_env*,int ,int ,int ,int ,int ,int ,int ) ;
 struct ub_packed_rrset_key* FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct module_env* VAR_2, uint16_t VAR_3,
 struct regional* VAR_4, struct delegpt* VAR_5, time_t VAR_6,
 struct dns_msg** VAR_7)
{
 struct delegpt_ns* VAR_8;
 struct msgreply_entry* VAR_9;
 struct ub_packed_rrset_key* VAR_10;
 for(VAR_8 = VAR_5->nslist; VAR_8; VAR_8 = VAR_8->next) {
  VAR_10 = FUNC_6(VAR_2->rrset_cache, VAR_8->name,
   VAR_8->namelen, VAR_0, VAR_3, 0, VAR_6, 0);
  if(VAR_10) {
   if(!FUNC_2(VAR_5, VAR_4, VAR_10, 0)) {
    FUNC_4(&VAR_10->entry.lock);
    return 0;
   }
   if(VAR_7)
    FUNC_0(VAR_10, VAR_4, *VAR_7, VAR_6);
   FUNC_4(&VAR_10->entry.lock);
  } else {


   VAR_9 = FUNC_5(VAR_2, VAR_8->name, VAR_8->namelen,
    VAR_0, VAR_3, 0, VAR_6, 0);
   if(VAR_9) {
    FUNC_1(VAR_5, VAR_9);
    FUNC_4(&VAR_9->entry.lock);
   }
  }
  VAR_10 = FUNC_6(VAR_2->rrset_cache, VAR_8->name,
   VAR_8->namelen, VAR_1, VAR_3, 0, VAR_6, 0);
  if(VAR_10) {
   if(!FUNC_3(VAR_5, VAR_4, VAR_10, 0)) {
    FUNC_4(&VAR_10->entry.lock);
    return 0;
   }
   if(VAR_7)
    FUNC_0(VAR_10, VAR_4, *VAR_7, VAR_6);
   FUNC_4(&VAR_10->entry.lock);
  } else {


   VAR_9 = FUNC_5(VAR_2, VAR_8->name, VAR_8->namelen,
    VAR_1, VAR_3, 0, VAR_6, 0);
   if(VAR_9) {
    FUNC_1(VAR_5, VAR_9);
    FUNC_4(&VAR_9->entry.lock);
   }
  }
 }
 return 1;
}
