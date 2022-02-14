
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int alpha ;


 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *
FUNC_2 (char *VAR_0, unsigned VAR_1)
{
  static char VAR_2[26] = "abcdefghijklmnopqrstuvwxyz";
  static char VAR_3[32];
  char *VAR_4;
  FUNC_1 (VAR_3, VAR_0);
  VAR_4 = FUNC_0 (VAR_3, '\0');
  do
    *VAR_4++ = VAR_2[VAR_1 % sizeof (VAR_2)];
  while ((VAR_1 /= sizeof (VAR_2)) != 0);
  *VAR_4 = '\0';
  return VAR_3;
}
