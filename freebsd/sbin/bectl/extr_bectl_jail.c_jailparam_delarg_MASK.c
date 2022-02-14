
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* VAR_1 ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_2)
{
 char *VAR_3, *VAR_4;

 if (VAR_2 == ((void*)0))
  return (VAR_0);
 VAR_3 = VAR_2;
 if ((VAR_4 = FUNC_1(VAR_3, '=')) != ((void*)0))
  *VAR_4++ = '\0';

 if (FUNC_2(VAR_3, "path") == 0)
  *VAR_1 = '\0';
 return (FUNC_0(VAR_3));
}
