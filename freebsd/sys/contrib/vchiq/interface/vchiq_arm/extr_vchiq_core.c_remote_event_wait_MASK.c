
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int armed; scalar_t__ fired; int event; } ;
typedef TYPE_1__ REMOTE_EVENT_T ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline int
FUNC_3(REMOTE_EVENT_T *VAR_0)
{
 if (!VAR_0->fired) {
  VAR_0->armed = 1;
  FUNC_1();
  if (!VAR_0->fired) {
   if (FUNC_0(VAR_0->event) != 0) {
    VAR_0->armed = 0;
    return 0;
   }
  }
  VAR_0->armed = 0;
  FUNC_2();
 }

 VAR_0->fired = 0;
 return 1;
}
