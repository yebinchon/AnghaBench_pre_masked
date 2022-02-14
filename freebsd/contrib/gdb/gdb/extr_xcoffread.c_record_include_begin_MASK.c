
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coff_symbol {int c_value; int c_name; } ;
struct TYPE_2__ {int begin; int name; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2 (struct coff_symbol *VAR_4)
{
  if (VAR_0)
    {






      FUNC_1 (&VAR_3, "Nested C_BINCL symbols");
    }
  ++VAR_0;

  FUNC_0 ();

  VAR_2[VAR_1].name = VAR_4->c_name;
  VAR_2[VAR_1].begin = VAR_4->c_value;
}
