
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct pthread_barrier {int dummy; } ;
typedef TYPE_1__* pthread_barrierattr_t ;
typedef TYPE_2__* pthread_barrier_t ;
struct TYPE_14__ {int c_flags; } ;
struct TYPE_13__ {int m_flags; } ;
struct TYPE_12__ {unsigned int b_count; TYPE_5__ b_cv; TYPE_4__ b_lock; } ;
struct TYPE_11__ {scalar_t__ pshared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_0 (TYPE_2__**,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_2__* FUNC_3 (int,int) ;

int
FUNC_4(pthread_barrier_t * __restrict VAR_7,
    const pthread_barrierattr_t * __restrict VAR_8, unsigned VAR_9)
{
 pthread_barrier_t VAR_10;
 int VAR_11;

 if (VAR_7 == ((void*)0) || VAR_9 == 0 || VAR_9 > VAR_3)
  return (VAR_1);

 if (VAR_8 == ((void*)0) || *VAR_8 == ((void*)0) ||
     (*VAR_8)->pshared == VAR_4) {
  VAR_10 = FUNC_3(1, sizeof(struct pthread_barrier));
  if (VAR_10 == ((void*)0))
   return (VAR_2);
  *VAR_7 = VAR_10;
  VAR_11 = 0;
 } else {
  VAR_10 = FUNC_0(VAR_7, 1);
  if (VAR_10 == ((void*)0))
   return (VAR_0);
  *VAR_7 = VAR_5;
  VAR_11 = 1;
 }

 FUNC_2(&VAR_10->b_lock);
 FUNC_1(&VAR_10->b_cv);
 if (VAR_11) {
  VAR_10->b_lock.m_flags |= VAR_6;
  VAR_10->b_cv.c_flags |= VAR_6;
 }
 VAR_10->b_count = VAR_9;
 return (0);
}
