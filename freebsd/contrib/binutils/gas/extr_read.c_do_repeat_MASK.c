
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sb ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*) ;
 int FUNC_2 (char const*,char const*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8 (int VAR_3, const char *VAR_4, const char *VAR_5)
{
  sb VAR_6;
  sb VAR_7;

  FUNC_7 (&VAR_6);
  if (!FUNC_2 (VAR_4, VAR_5, &VAR_6, VAR_1))
    {
      FUNC_1 (FUNC_0("%s without %s"), VAR_4, VAR_5);
      return;
    }

  FUNC_7 (&VAR_7);
  while (VAR_3-- > 0)
    FUNC_5 (&VAR_7, &VAR_6);

  FUNC_6 (&VAR_6);

  FUNC_3 (&VAR_7, VAR_2, 1);
  FUNC_6 (&VAR_7);
  VAR_0 = FUNC_4 (&VAR_2);
}
