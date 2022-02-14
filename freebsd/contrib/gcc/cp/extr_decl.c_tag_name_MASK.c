
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tag_types { ____Placeholder_tag_types } tag_types ;




 int FUNC_0 () ;




__attribute__((used)) static const char *
FUNC_1 (enum tag_types VAR_0)
{
  switch (VAR_0)
    {
    case 130:
      return "struct";
    case 132:
      return "class";
    case 128:
      return "union";
    case 131:
      return "enum";
    case 129:
      return "typename";
    default:
      FUNC_0 ();
    }
}
