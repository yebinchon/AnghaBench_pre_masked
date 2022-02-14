
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rc_uint_type ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int ,char*,...) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4 (rc_uint_type *VAR_3, int *VAR_4, const char *VAR_5, int VAR_6)
{
  if (*VAR_4 == -1)
    {
      if (*VAR_3 != VAR_0)
 *VAR_4 = VAR_6;
      else
 *VAR_4 = 1;
    }
  if (*VAR_4)
    {
      if (*VAR_3 != 0 && *VAR_3 != VAR_0)
 {
   FUNC_2 (VAR_2, FUNC_0("%s: warning: "), VAR_1);
   FUNC_2 (VAR_2, FUNC_0("A codepage was specified switch ,%s' and UTF16.\n"), VAR_5);
   FUNC_2 (VAR_2, "%s", FUNC_0("\tcodepage settings are ignored.\n"));
 }
      *VAR_3 = VAR_0;
      return 1;
    }
  if (*VAR_3 == VAR_0)
    {
      *VAR_4 = 1;
      return 1;
    }
  if (*VAR_3 == 0)
    *VAR_3 = 1252;
  if (! FUNC_3 (*VAR_3))
 FUNC_1 ("Code page 0x%x is unknown.", (unsigned int) *VAR_3);
  *VAR_4 = 0;
  return 1;
}
