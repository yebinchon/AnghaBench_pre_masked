
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int FUNC_4(int **VAR_0, char *VAR_1)
{
 int *VAR_2;
 int VAR_3;
 char *VAR_4, *VAR_5;

 FUNC_1(*VAR_0);
 *VAR_0 = ((void*)0);

 VAR_4 = VAR_1;
 VAR_3 = 0;
 while (*VAR_4 != '\0') {
  if (*VAR_4 == ' ')
   VAR_3++;
  VAR_4++;
 }

 VAR_2 = FUNC_2(sizeof(int) * (VAR_3 + 2));
 if (VAR_2 == ((void*)0))
  return -1;
 VAR_4 = VAR_1;
 VAR_3 = 0;
 while (*VAR_4 != '\0') {
  VAR_5 = FUNC_3(VAR_4, ' ');
  if (VAR_5)
   *VAR_5 = '\0';

  VAR_2[VAR_3++] = FUNC_0(VAR_4);
  if (!VAR_5)
   break;
  VAR_4 = VAR_5 + 1;
 }
 VAR_2[VAR_3] = -1;

 *VAR_0 = VAR_2;
 return 0;
}
