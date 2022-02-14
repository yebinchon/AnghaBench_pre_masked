
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, int VAR_1)
{
  int VAR_2 = FUNC_1 (VAR_0);
  char *VAR_3 = FUNC_0 (VAR_2 + 1);

  FUNC_2 (VAR_3, VAR_0, VAR_2);
  VAR_3[VAR_2] = '\0';

  FUNC_3 ("%s\n", VAR_3);
}
