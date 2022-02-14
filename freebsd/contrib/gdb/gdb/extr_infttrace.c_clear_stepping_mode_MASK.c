
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stepping_mode; } ;
typedef TYPE_1__ thread_info ;
typedef scalar_t__ lwpid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3 (lwpid_t VAR_2)
{
  thread_info *VAR_3;






  VAR_3 = FUNC_1 (VAR_2);
  if (VAR_3 == ((void*)0))
    FUNC_0 ("Internal error: No thread state to clear?");

  VAR_3->stepping_mode = VAR_0;
}
