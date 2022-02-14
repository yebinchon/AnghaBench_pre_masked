
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,int,char**) ;
 int VAR_0 ;

void
FUNC_1(
 int * VAR_1,
 char ***VAR_2
 )
{
 static int VAR_3;
 static int VAR_4;

 if (!VAR_3)
  VAR_4 = FUNC_0(&VAR_0, *VAR_1, *VAR_2);

 VAR_3 = 1;

 *VAR_1 -= VAR_4;
 *VAR_2 += VAR_4;
}
