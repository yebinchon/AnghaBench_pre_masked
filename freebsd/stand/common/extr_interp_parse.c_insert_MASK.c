
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(int *VAR_2, char *VAR_3)
{

 if (*VAR_2 >= VAR_0)
  return 1;
 VAR_1[(*VAR_2)++] = FUNC_0(VAR_3);
 return 0;
}
