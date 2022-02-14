
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct timespec {int dummy; } ;
struct thread {scalar_t__ td_runtime; } ;
struct TYPE_2__ {scalar_t__ td_runtime; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,struct timespec*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*) ;

__attribute__((used)) static void
FUNC_7(struct thread *VAR_1, struct timespec *VAR_2)
{
 uint64_t VAR_3, VAR_4, VAR_5;

 if (VAR_1 == ((void*)0)) {
  FUNC_3();
  VAR_5 = FUNC_0(VAR_5);
  VAR_4 = FUNC_1();
  VAR_3 = VAR_0->td_runtime;
  FUNC_4();
  VAR_3 += VAR_4 - VAR_5;
 } else {
  FUNC_5(VAR_1);
  VAR_3 = VAR_1->td_runtime;
  FUNC_6(VAR_1);
 }
 FUNC_2(VAR_3, VAR_2);
}
