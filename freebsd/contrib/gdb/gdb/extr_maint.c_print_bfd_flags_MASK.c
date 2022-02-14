
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int flagword ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1 (flagword VAR_12)
{
  if (VAR_12 & VAR_0)
    FUNC_0 (" ALLOC");
  if (VAR_12 & VAR_7)
    FUNC_0 (" LOAD");
  if (VAR_12 & VAR_10)
    FUNC_0 (" RELOC");
  if (VAR_12 & VAR_9)
    FUNC_0 (" READONLY");
  if (VAR_12 & VAR_1)
    FUNC_0 (" CODE");
  if (VAR_12 & VAR_4)
    FUNC_0 (" DATA");
  if (VAR_12 & VAR_11)
    FUNC_0 (" ROM");
  if (VAR_12 & VAR_3)
    FUNC_0 (" CONSTRUCTOR");
  if (VAR_12 & VAR_5)
    FUNC_0 (" HAS_CONTENTS");
  if (VAR_12 & VAR_8)
    FUNC_0 (" NEVER_LOAD");
  if (VAR_12 & VAR_2)
    FUNC_0 (" COFF_SHARED_LIBRARY");
  if (VAR_12 & VAR_6)
    FUNC_0 (" IS_COMMON");
}
