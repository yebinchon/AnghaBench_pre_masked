
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;



 char* FUNC_1 (struct type*) ;
 char* FUNC_2 (struct type*) ;
 int FUNC_3 (int *,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4 (struct type *VAR_1)
{
  char *VAR_2 = "";
  char *VAR_3 = "";

  if (FUNC_2 (VAR_1))
    {
      VAR_2 = FUNC_2 (VAR_1);
      switch (FUNC_0 (VAR_1))
        {
        case 129: VAR_3 = "struct "; break;
        case 128: VAR_3 = "union "; break;
        case 130: VAR_3 = "enum "; break;
        default: VAR_3 = "";
        }
    }
  else if (FUNC_1 (VAR_1))
    {
      VAR_2 = FUNC_1 (VAR_1);
      VAR_3 = "";
    }
  else
    {
      VAR_2 = "<unknown>";
      VAR_3 = "";
    }

  FUNC_3 (&VAR_0,
      "struct/union type gets multiply defined: %s%s", VAR_3, VAR_2);
}
