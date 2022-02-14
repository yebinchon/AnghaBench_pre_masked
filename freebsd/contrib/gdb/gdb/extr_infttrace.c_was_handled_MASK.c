
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handled; } ;
typedef TYPE_1__ thread_info ;
typedef int lwpid_t ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (lwpid_t VAR_0)
{
  thread_info *VAR_1;

  VAR_1 = FUNC_0 (VAR_0);
  if (((void*)0) != VAR_1)
    return VAR_1->handled;

  return 0;
}
