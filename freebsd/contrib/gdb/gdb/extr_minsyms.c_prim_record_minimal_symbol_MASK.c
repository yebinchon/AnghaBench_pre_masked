
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
typedef enum minimal_symbol_type { ____Placeholder_minimal_symbol_type } minimal_symbol_type ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct objfile*) ;
 int FUNC_1 (struct objfile*) ;
 int FUNC_2 (struct objfile*) ;







 int FUNC_3 (char const*,int ,int,int *,int,int *,struct objfile*) ;

void
FUNC_4 (const char *VAR_0, CORE_ADDR VAR_1,
       enum minimal_symbol_type VAR_2,
       struct objfile *VAR_3)
{
  int VAR_4;

  switch (VAR_2)
    {
    case 128:
    case 130:
    case 129:
      VAR_4 = FUNC_2 (VAR_3);
      break;
    case 133:
    case 131:
      VAR_4 = FUNC_1 (VAR_3);
      break;
    case 134:
    case 132:
      VAR_4 = FUNC_0 (VAR_3);
      break;
    default:
      VAR_4 = -1;
    }

  FUNC_3 (VAR_0, VAR_1, VAR_2,
           ((void*)0), VAR_4, ((void*)0), VAR_3);
}
