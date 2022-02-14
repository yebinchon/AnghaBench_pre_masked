
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;






 char const* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static const char *
FUNC_1 (enum debug_visibility VAR_1)
{
  const char *VAR_2;

  switch (VAR_1)
    {
    case 128:
      VAR_2 = "public";
      break;
    case 130:
      VAR_2 = "private";
      break;
    case 129:
      VAR_2 = "protected";
      break;
    case 131:
      VAR_2 = "/* ignore */";
      break;
    default:
      FUNC_0 ();
      return VAR_0;
    }
  return VAR_2;
}
