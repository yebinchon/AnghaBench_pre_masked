
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evthread_lock_callbacks {scalar_t__ alloc; scalar_t__ lock_api_version; scalar_t__ supported_locktypes; scalar_t__ free; scalar_t__ lock; scalar_t__ unlock; } ;
typedef int evthread_lock_fns_ ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 struct evthread_lock_callbacks* FUNC_2 () ;
 int FUNC_3 (struct evthread_lock_callbacks*,struct evthread_lock_callbacks const*,int) ;
 int FUNC_4 (struct evthread_lock_callbacks*,int ,int) ;

int
FUNC_5(const struct evthread_lock_callbacks *VAR_0)
{
 struct evthread_lock_callbacks *VAR_1 = FUNC_2();

 if (!VAR_0) {
  if (VAR_1->alloc)
   FUNC_1("Trying to disable lock functions after "
       "they have been set up will probaby not work.");
  FUNC_4(VAR_1, 0, sizeof(evthread_lock_fns_));
  return 0;
 }
 if (VAR_1->alloc) {

  if (VAR_1->lock_api_version == VAR_0->lock_api_version &&
   VAR_1->supported_locktypes == VAR_0->supported_locktypes &&
   VAR_1->alloc == VAR_0->alloc &&
   VAR_1->free == VAR_0->free &&
   VAR_1->lock == VAR_0->lock &&
   VAR_1->unlock == VAR_0->unlock) {

   return 0;
  }
  FUNC_1("Can't change lock callbacks once they have been "
      "initialized.");
  return -1;
 }
 if (VAR_0->alloc && VAR_0->free && VAR_0->lock && VAR_0->unlock) {
  FUNC_3(VAR_1, VAR_0, sizeof(evthread_lock_fns_));
  return FUNC_0(1);
 } else {
  return -1;
 }
}
