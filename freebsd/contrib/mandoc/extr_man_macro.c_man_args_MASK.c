
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_man {int roff; } ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char**,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct roff_man *VAR_0, int VAR_1, int *VAR_2, char *VAR_3, char **VAR_4)
{
 char *VAR_5;

 FUNC_0(*VAR_2);
 *VAR_4 = VAR_5 = VAR_3 + *VAR_2;
 FUNC_0(' ' != *VAR_5);

 if ('\0' == *VAR_5)
  return 0;

 *VAR_4 = FUNC_1(VAR_0->roff, VAR_4, VAR_1, VAR_2);
 return 1;
}
