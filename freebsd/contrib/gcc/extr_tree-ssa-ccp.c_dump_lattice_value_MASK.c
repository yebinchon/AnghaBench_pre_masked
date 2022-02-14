
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lattice_val; int value; } ;
typedef TYPE_1__ prop_value_t ;
typedef int FILE ;







 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_1, const char *VAR_2, prop_value_t VAR_3)
{
  switch (VAR_3.lattice_val)
    {
    case 130:
      FUNC_0 (VAR_1, "%sUNINITIALIZED", VAR_2);
      break;
    case 131:
      FUNC_0 (VAR_1, "%sUNDEFINED", VAR_2);
      break;
    case 128:
      FUNC_0 (VAR_1, "%sVARYING", VAR_2);
      break;
    case 129:
      FUNC_0 (VAR_1, "%sUNKNOWN_VAL", VAR_2);
      break;
    case 132:
      FUNC_0 (VAR_1, "%sCONSTANT ", VAR_2);
      FUNC_2 (VAR_1, VAR_3.value, VAR_0);
      break;
    default:
      FUNC_1 ();
    }
}
