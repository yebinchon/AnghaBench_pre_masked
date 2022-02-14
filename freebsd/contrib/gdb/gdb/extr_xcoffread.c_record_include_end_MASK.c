
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct coff_symbol {int c_value; } ;
struct TYPE_3__ {int end; } ;
typedef TYPE_1__ InclTable ;


 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2 (struct coff_symbol *VAR_4)
{
  InclTable *VAR_5;

  if (VAR_0 == 0)
    {
      FUNC_1 (&VAR_3, "Mismatched C_BINCL/C_EINCL pair");
    }

  FUNC_0 ();

  VAR_5 = &VAR_2[VAR_1];
  VAR_5->end = VAR_4->c_value;

  --VAR_0;
  ++VAR_1;
}
