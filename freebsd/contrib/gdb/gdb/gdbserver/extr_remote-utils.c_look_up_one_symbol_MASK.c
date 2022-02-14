
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char*,int ) ;

int
FUNC_9 (const char *VAR_2, CORE_ADDR *VAR_3)
{
  char VAR_4[266], *VAR_5, *VAR_6;
  int VAR_7;


  FUNC_6 (VAR_4, "qSymbol:");
  FUNC_4 (VAR_4 + FUNC_7 ("qSymbol:"), VAR_2, FUNC_7 (VAR_2));
  if (FUNC_5 (VAR_4) < 0)
    return -1;


  VAR_7 = FUNC_3 (VAR_4);
  if (VAR_7 < 0)
    return -1;

  if (FUNC_8 (VAR_4, "qSymbol:", FUNC_7 ("qSymbol:")) != 0)
    {

      if (VAR_0)
 {
   FUNC_2 (VAR_1, "Malformed response to qSymbol, ignoring.\n");
   FUNC_1 (VAR_1);
 }

      return -1;
    }

  VAR_5 = VAR_4 + FUNC_7 ("qSymbol:");
  VAR_6 = VAR_5;
  while (*VAR_6 && *VAR_6 != ':')
    VAR_6++;


  if (VAR_5 == VAR_6 || *VAR_6 == '\0')
    return 0;

  FUNC_0 (VAR_3, VAR_5, VAR_6 - VAR_5);
  return 1;
}
