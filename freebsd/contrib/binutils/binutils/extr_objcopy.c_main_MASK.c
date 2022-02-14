
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,char**) ;
 int VAR_6 ;
 int FUNC_6 (int*,char***) ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*) ;
 int VAR_9 ;
 int FUNC_9 (int,char**) ;
 int VAR_10 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;

int
FUNC_13 (int VAR_11, char *VAR_12[])
{






  FUNC_4 (VAR_4, VAR_2);
  FUNC_11 (VAR_4);

  VAR_8 = VAR_12[0];
  FUNC_12 (VAR_8);

  FUNC_2 (VAR_8, 0);

  FUNC_6 (&VAR_11, &VAR_12);

  VAR_10 = VAR_5;
  VAR_6 = VAR_3;

  FUNC_3 ();
  FUNC_7 ();

  if (VAR_7 < 0)
    {
      int VAR_13 = FUNC_10 (VAR_8);
      VAR_7 = (VAR_13 >= 5 && FUNC_1 (VAR_8 + VAR_13 - 5, "strip") == 0);
    }

  if (VAR_7)
    FUNC_9 (VAR_11, VAR_12);
  else
    FUNC_5 (VAR_11, VAR_12);

  FUNC_0 (VAR_8);

  return VAR_9;
}
