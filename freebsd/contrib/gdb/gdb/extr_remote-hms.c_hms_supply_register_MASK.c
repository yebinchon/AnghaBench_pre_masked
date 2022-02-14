
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{
  int VAR_6;

  if (VAR_3 != 2)
    return;
  if (VAR_2[0] != 'P')
    return;


  VAR_4 = FUNC_0 (VAR_1, VAR_4);

  while (*VAR_4 != '=' && *VAR_4)
    VAR_4++;

  VAR_4 = FUNC_0 (VAR_0, VAR_4 + 1);


  while (*VAR_4 != '=' && *VAR_4)
    VAR_4++;

  for (VAR_6 = 0; VAR_6 < 7; VAR_6++)
    {
      VAR_4 = FUNC_0 (VAR_6, VAR_4 + 1);
    }
}
