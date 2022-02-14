
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pthread_cond_attr {int c_clockid; scalar_t__ c_pshared; } ;
struct TYPE_2__ {int c_clockid; int c_flags; } ;
struct pthread_cond {TYPE_1__ kcond; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct pthread_cond *VAR_2, const struct pthread_cond_attr *VAR_3)
{

 if (VAR_3 == ((void*)0)) {
  VAR_2->kcond.c_clockid = VAR_0;
 } else {
  if (VAR_3->c_pshared)
   VAR_2->kcond.c_flags |= VAR_1;
  VAR_2->kcond.c_clockid = VAR_3->c_clockid;
 }
}
