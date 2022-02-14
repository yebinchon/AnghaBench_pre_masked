
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sshkey {int dummy; } ;


 int FUNC_0 (struct sshkey*,char**) ;
 int FUNC_1 (struct sshkey*) ;

int
FUNC_2(char **VAR_0, u_int *VAR_1, struct sshkey *VAR_2)
{
 char *VAR_3;
 int VAR_4;


 for (VAR_3 = *VAR_0; *VAR_3 == ' ' || *VAR_3 == '\t'; VAR_3++)
  ;

 if ((VAR_4 = FUNC_0(VAR_2, &VAR_3)) != 0)
  return 0;


 for (; *VAR_3 == ' ' || *VAR_3 == '\t'; VAR_3++)
  ;


 *VAR_0 = VAR_3;
 if (VAR_1 != ((void*)0))
  *VAR_1 = FUNC_1(VAR_2);
 return 1;
}
