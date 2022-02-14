
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NODE ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char*) ;

int
FUNC_3(FILE *VAR_1, FILE *VAR_2)
{
 int VAR_3;
 NODE *VAR_4, *VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = FUNC_1(VAR_2);
 VAR_3 = FUNC_2(VAR_4, VAR_5, "");
 VAR_3 += FUNC_0(VAR_4, VAR_5, "");
 if (VAR_3 > 0)
  return (VAR_0);
 return (0);
}
