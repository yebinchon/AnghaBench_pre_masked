
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int VAR_6 ;
 int FUNC_2 (char const*,int,...) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static int
FUNC_5 (const char *VAR_7, const char *VAR_8)
{
  int VAR_9, VAR_10, VAR_11;
  int VAR_12;
  char VAR_13[VAR_0];

  VAR_9 = FUNC_2 (VAR_7, VAR_3 | VAR_1);
  if (VAR_9 < 0)
    return -1;



  VAR_10 = FUNC_1 (VAR_8, 0777);

  if (VAR_10 < 0)
    {
      VAR_12 = VAR_6;
      FUNC_0 (VAR_9);
      VAR_6 = VAR_12;
      return -1;
    }
  while ((VAR_11 = FUNC_3 (VAR_9, VAR_13, sizeof VAR_13)) > 0)
    {
      if (FUNC_4 (VAR_10, VAR_13, VAR_11) != VAR_11)
 {
   VAR_12 = VAR_6;
   FUNC_0 (VAR_9);
   FUNC_0 (VAR_10);
   VAR_6 = VAR_12;
   return -1;
 }
    }
  VAR_12 = VAR_6;
  FUNC_0 (VAR_9);
  FUNC_0 (VAR_10);
  if (VAR_11 < 0)
    {
      VAR_6 = VAR_12;
      return -1;
    }
  return 0;
}
