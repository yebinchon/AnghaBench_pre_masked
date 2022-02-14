
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_rtcgen; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct thread *VAR_1)
{
 if (VAR_1->td_rtcgen != 0 && VAR_1->td_rtcgen != VAR_0) {
  VAR_1->td_rtcgen = 0;
  return (1);
 }
 return (0);
}
