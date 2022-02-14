
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, char **VAR_1, char **VAR_2)
{
 char *VAR_3 = VAR_0, VAR_4;

 while (FUNC_1(VAR_3[0]))
  ++VAR_3;

 if (VAR_3[0] == '\0')
  return -1;

 *VAR_2 = VAR_3 + 1;

 while ((*VAR_2)[0] != '\0' && !FUNC_1((*VAR_2)[0]))
  ++*VAR_2;

 VAR_4 = (*VAR_2)[0];
 (*VAR_2)[0] = '\0';
 *VAR_1 = FUNC_2(VAR_3);

 if (*VAR_1 == ((void*)0))
  goto out_free_name;

 (*VAR_2)[0] = VAR_4;

 if ((*VAR_2)[0] != '\0') {
  (*VAR_2)++;
  while (FUNC_1((*VAR_2)[0]))
   ++(*VAR_2);
 }

 return 0;

out_free_name:
 FUNC_0(*VAR_1);
 *VAR_1 = ((void*)0);
 return -1;
}
