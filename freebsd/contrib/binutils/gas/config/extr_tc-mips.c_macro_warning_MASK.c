
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int relax_substateT ;


 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (char*) ;

__attribute__((used)) static const char *
FUNC_1 (relax_substateT VAR_2)
{
  if (VAR_2 & VAR_0)
    return FUNC_0("Macro instruction expanded into multiple instructions"
      " in a branch delay slot");
  else if (VAR_2 & VAR_1)
    return FUNC_0("Macro instruction expanded into multiple instructions");
  else
    return 0;
}
