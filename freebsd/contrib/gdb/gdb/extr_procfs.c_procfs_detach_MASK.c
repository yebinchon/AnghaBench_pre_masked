
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_4, int VAR_5)
{
  char *VAR_6;
  int VAR_7 = 0;

  if (VAR_5)
    {
      VAR_6 = FUNC_3 (0);
      if (VAR_6 == 0)
 VAR_6 = "";
      FUNC_4 ("Detaching from program: %s %s\n",
       VAR_6, FUNC_5 (VAR_0));
      FUNC_2 (VAR_3);
    }
  if (VAR_4)
    VAR_7 = FUNC_0 (VAR_4);

  FUNC_1 (VAR_7);
  VAR_0 = VAR_1;
  FUNC_6 (&VAR_2);
}
