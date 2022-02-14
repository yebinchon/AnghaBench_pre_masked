
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_2)
{
  char *VAR_3;

  while (1)
    {
      VAR_3 = FUNC_1 (VAR_2, VAR_0);
      if (VAR_3 != ((void*)0))
 *VAR_3 = '\0';
      if (*VAR_2 != '\0')
 FUNC_0 (VAR_2, VAR_1);
      if (VAR_3 == ((void*)0))
 break;
      VAR_2 = VAR_3 + 1;
    }
}
