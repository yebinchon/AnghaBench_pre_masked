
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ time_t ;
struct reply_info {scalar_t__ ttl; size_t rrset_count; TYPE_2__** rrsets; TYPE_1__* ref; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct msgreply_entry {int entry; } ;
struct module_env {int alloc; int msg_cache; int * now; } ;
typedef int hashvalue_type ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int id; TYPE_2__* key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct reply_info*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct module_env*,struct query_info*,int) ;
 struct msgreply_entry* FUNC_3 (struct query_info*,struct reply_info*,int ) ;
 int FUNC_4 (struct reply_info*,int ) ;
 int FUNC_5 (struct reply_info*) ;
 int FUNC_6 (int ,int ,int *,struct reply_info*,int ) ;
 int FUNC_7 (struct module_env*,struct reply_info*,int ,scalar_t__,int,struct reply_info*,struct regional*) ;
 int FUNC_8 (int ,char*) ;

void
FUNC_9(struct module_env* VAR_2, struct query_info* VAR_3,
 hashvalue_type VAR_4, struct reply_info* VAR_5, time_t VAR_6, int VAR_7,
 struct reply_info* VAR_8, uint32_t VAR_9, struct regional* VAR_10)
{
 struct msgreply_entry* VAR_11;
 time_t VAR_12 = VAR_5->ttl;
 size_t VAR_13;


        for(VAR_13=0; VAR_13<VAR_5->rrset_count; VAR_13++) {
  VAR_5->ref[VAR_13].key = VAR_5->rrsets[VAR_13];
  VAR_5->ref[VAR_13].id = VAR_5->rrsets[VAR_13]->id;
 }



 FUNC_4(VAR_5, *VAR_2->now);
 FUNC_7(VAR_2, VAR_5, *VAR_2->now, VAR_6, VAR_7, VAR_8, VAR_10);
 if(VAR_12 == 0 && !(VAR_9 & VAR_0)) {


  FUNC_8(VAR_1, "TTL 0: dropped msg from cache");
  FUNC_0(VAR_5);





  FUNC_2(VAR_2, VAR_3, VAR_9);
  return;
 }


 FUNC_5(VAR_5);
 if(!(VAR_11 = FUNC_3(VAR_3, VAR_5, VAR_4))) {
  FUNC_1("store_msg: malloc failed");
  return;
 }
 FUNC_6(VAR_2->msg_cache, VAR_4, &VAR_11->entry, VAR_5, VAR_2->alloc);
}
