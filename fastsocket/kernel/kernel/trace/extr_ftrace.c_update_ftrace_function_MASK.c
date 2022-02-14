
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* ftrace_func_t ;
struct TYPE_3__ {int flags; void* func; struct TYPE_3__* next; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(void)
{
 ftrace_func_t VAR_8;

 FUNC_0();






 if (VAR_4 == &VAR_3 ||
     (VAR_4->next == &VAR_3 &&
      !(VAR_4->flags & VAR_0)))
  VAR_8 = VAR_4->func;
 else
  VAR_8 = VAR_5;
 VAR_1 = VAR_8;

 VAR_7 = VAR_6;

}
