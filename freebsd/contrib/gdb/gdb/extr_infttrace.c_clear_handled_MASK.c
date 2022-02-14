
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ handled; } ;
typedef TYPE_1__ thread_info ;
typedef scalar_t__ lwpid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3 (lwpid_t VAR_1)
{
  thread_info *VAR_2;






  VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2 == ((void*)0))
    FUNC_0 ("Internal error: No thread state to clear?");

  VAR_2->handled = 0;
}
