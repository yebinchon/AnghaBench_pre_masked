
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int type; } ;






 struct demangle_component* FUNC_0 (struct demangle_component*) ;
 int FUNC_1 (struct demangle_component*) ;

__attribute__((used)) static int
FUNC_2 (struct demangle_component *VAR_0)
{
  if (VAR_0 == ((void*)0))
    return 0;
  switch (VAR_0->type)
    {
    default:
      return 0;
    case 129:
      return ! FUNC_1 (FUNC_0 (VAR_0));
    case 130:
    case 128:
    case 131:
      return FUNC_2 (FUNC_0 (VAR_0));
    }
}
