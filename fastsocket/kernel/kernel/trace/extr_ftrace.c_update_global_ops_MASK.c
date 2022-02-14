
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ftrace_func_t ;
struct TYPE_5__ {int func; struct TYPE_5__* next; } ;
struct TYPE_4__ {int func; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 ftrace_func_t VAR_6;






 if (VAR_0 == &VAR_2 ||
     VAR_0->next == &VAR_2)
  VAR_6 = VAR_0->func;
 else
  VAR_6 = VAR_1;

 if (!FUNC_0(&VAR_4)) {
  FUNC_1(VAR_6);
  VAR_6 = VAR_3;
 }

 VAR_5.func = VAR_6;
}
