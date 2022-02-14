
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int handled; } ;
typedef TYPE_1__ thread_info ;
typedef int lwpid_t ;


 TYPE_1__* FUNC_0 (int,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (int VAR_0, lwpid_t VAR_1)
{
  thread_info *VAR_2;

  VAR_2 = FUNC_1 (VAR_1);
  if (((void*)0) == VAR_2)
    VAR_2 = FUNC_0 (VAR_0, VAR_1);

  VAR_2->handled = 1;
}
