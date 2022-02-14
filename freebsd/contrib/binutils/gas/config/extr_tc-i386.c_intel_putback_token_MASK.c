
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int op_string; } ;
struct TYPE_4__ {scalar_t__ code; int * str; int * reg; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (VAR_1.code != VAR_0)
    {
      VAR_2.op_string -= FUNC_1 (VAR_1.str);
      FUNC_0 (VAR_1.str);
    }
  VAR_1 = VAR_3;


  VAR_3.code = VAR_0;
  VAR_3.reg = ((void*)0);
  VAR_3.str = ((void*)0);
}
