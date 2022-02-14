
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char*,char*,char*,...) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_0, char *VAR_1,
        CORE_ADDR VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{
  int VAR_6 = (VAR_3 == 0 && VAR_4 != (char *) 0) ? FUNC_4 (VAR_4) : VAR_3;
  char *VAR_7 = FUNC_0 ((VAR_6 * 4) + 1);
  FUNC_2 (VAR_7, VAR_4, VAR_6);

  if (VAR_5)
    FUNC_1 ("%s (0x%s): %s: %s%c", VAR_0, FUNC_3 (VAR_2), VAR_1, VAR_7, VAR_5);
  else
    FUNC_1 ("%s (0x%s): %s: %s", VAR_0, FUNC_3 (VAR_2), VAR_1, VAR_7);
}
