
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int,int *) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2 (int VAR_0, char **VAR_1, int *VAR_2)
{
  int VAR_3;


  FUNC_1 (*VAR_1, "/C");
  VAR_3 = FUNC_0 (*VAR_2, (*VAR_1 + 2), 12, ((void*)0));
  *VAR_1 += (VAR_3 + 2);
  FUNC_1 (*VAR_1, "\n");
  *VAR_1 += 2;

  *VAR_2 = 0;
  return (VAR_0 + VAR_3 + 3);
}
