
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_4)
{
 if (VAR_1 >= VAR_0)
  FUNC_1("too many -I directives");
 FUNC_0(&VAR_2[VAR_1 - VAR_3 + 1], &VAR_2[VAR_1 - VAR_3],
     sizeof(VAR_4[0]) * VAR_3);
 VAR_2[VAR_1 - VAR_3] = FUNC_2(VAR_4);
 VAR_1++;
}
