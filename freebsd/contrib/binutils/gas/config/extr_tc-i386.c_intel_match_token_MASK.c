
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; int str; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3 (int VAR_1)
{
  if (VAR_0.code == VAR_1)
    {
      FUNC_2 ();
      return 1;
    }
  else
    {
      FUNC_1 (FUNC_0("Unexpected token `%s'"), VAR_0.str);
      return 0;
    }
}
