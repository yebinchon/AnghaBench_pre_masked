
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ c_has_waiters; } ;
struct pthread_cond {TYPE_1__ kcond; scalar_t__ __has_user_waiters; } ;
typedef struct pthread_cond* pthread_cond_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pthread_cond* VAR_2 ;
 struct pthread_cond* VAR_3 ;
 struct pthread_cond* VAR_4 ;
 int FUNC_0 (struct pthread_cond**) ;
 struct pthread_cond* FUNC_1 (struct pthread_cond**,int ) ;
 int FUNC_2 (struct pthread_cond*) ;

int
FUNC_3(pthread_cond_t *VAR_5)
{
 struct pthread_cond *VAR_6;
 int VAR_7;

 VAR_7 = 0;
 if (*VAR_5 == VAR_4) {
  VAR_6 = FUNC_1(VAR_5, 0);
  if (VAR_6 != ((void*)0)) {
   if (VAR_6->kcond.c_has_waiters)
    VAR_7 = VAR_0;
   else
    FUNC_0(VAR_5);
  }
  if (VAR_7 == 0)
   *VAR_5 = VAR_2;
 } else if ((VAR_6 = *VAR_5) == VAR_3) {

 } else if (VAR_6 == VAR_2) {
  VAR_7 = VAR_1;
 } else {
  VAR_6 = *VAR_5;
  if (VAR_6->__has_user_waiters || VAR_6->kcond.c_has_waiters)
   VAR_7 = VAR_0;
  else {
   *VAR_5 = VAR_2;
   FUNC_2(VAR_6);
  }
 }
 return (VAR_7);
}
