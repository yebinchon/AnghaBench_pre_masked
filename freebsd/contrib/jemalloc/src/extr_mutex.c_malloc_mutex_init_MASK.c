
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int witness_rank_t ;
typedef int pthread_mutexattr_t ;
struct TYPE_5__ {int witness; scalar_t__ lock_order; scalar_t__ lock; struct TYPE_5__* postponed_next; int prof_data; } ;
typedef TYPE_1__ malloc_mutex_t ;
typedef scalar_t__ malloc_mutex_lock_order_t ;


 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__*,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char const*,int ,int *,TYPE_1__*) ;

bool
FUNC_9(malloc_mutex_t *VAR_9, const char *VAR_10,
    witness_rank_t VAR_11, malloc_mutex_lock_order_t VAR_12) {
 FUNC_3(&VAR_9->prof_data);
 pthread_mutexattr_t VAR_13;

 if (FUNC_6(&VAR_13) != 0) {
  return 1;
 }
 FUNC_7(&VAR_13, VAR_0);
 if (FUNC_4(&VAR_9->lock, &VAR_13) != 0) {
  FUNC_5(&VAR_13);
  return 1;
 }
 FUNC_5(&VAR_13);

 if (VAR_4) {
  VAR_9->lock_order = VAR_12;
  if (VAR_12 == VAR_5) {
   FUNC_8(&VAR_9->witness, VAR_10, VAR_11,
       VAR_6, VAR_9);
  } else {
   FUNC_8(&VAR_9->witness, VAR_10, VAR_11, ((void*)0), ((void*)0));
  }
 }
 return 0;
}
