
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(FILE *VAR_1, char *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1);
 if (!VAR_3)
  return ((void*)0);

 if (VAR_2[FUNC_1(VAR_2) - 1] == '\n')
  VAR_2[FUNC_1(VAR_2) - 1] = '\0';

 return VAR_3;
}
