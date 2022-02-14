
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
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_12, flagword VAR_13)
{
  if (VAR_13 & VAR_0)
    if (FUNC_0 (VAR_12, "ALLOC"))
      return 1;
  if (VAR_13 & VAR_7)
    if (FUNC_0 (VAR_12, "LOAD"))
      return 1;
  if (VAR_13 & VAR_10)
    if (FUNC_0 (VAR_12, "RELOC"))
      return 1;
  if (VAR_13 & VAR_9)
    if (FUNC_0 (VAR_12, "READONLY"))
      return 1;
  if (VAR_13 & VAR_1)
    if (FUNC_0 (VAR_12, "CODE"))
      return 1;
  if (VAR_13 & VAR_4)
    if (FUNC_0 (VAR_12, "DATA"))
      return 1;
  if (VAR_13 & VAR_11)
    if (FUNC_0 (VAR_12, "ROM"))
      return 1;
  if (VAR_13 & VAR_3)
    if (FUNC_0 (VAR_12, "CONSTRUCTOR"))
      return 1;
  if (VAR_13 & VAR_5)
    if (FUNC_0 (VAR_12, "HAS_CONTENTS"))
      return 1;
  if (VAR_13 & VAR_8)
    if (FUNC_0 (VAR_12, "NEVER_LOAD"))
      return 1;
  if (VAR_13 & VAR_2)
    if (FUNC_0 (VAR_12, "COFF_SHARED_LIBRARY"))
      return 1;
  if (VAR_13 & VAR_6)
    if (FUNC_0 (VAR_12, "IS_COMMON"))
      return 1;

  return 0;
}
