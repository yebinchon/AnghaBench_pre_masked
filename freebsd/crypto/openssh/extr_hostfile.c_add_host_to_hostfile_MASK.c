
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char const*,int *,struct sshkey const*,int) ;

int
FUNC_3(const char *VAR_0, const char *VAR_1,
    const struct sshkey *VAR_2, int VAR_3)
{
 FILE *VAR_4;
 int VAR_5;

 if (VAR_2 == ((void*)0))
  return 1;
 VAR_4 = FUNC_1(VAR_0, "a");
 if (!VAR_4)
  return 0;
 VAR_5 = FUNC_2(VAR_4, VAR_1, ((void*)0), VAR_2, VAR_3);
 FUNC_0(VAR_4);
 return VAR_5;
}
