
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_3, size_t VAR_4)
{

 if (VAR_2 + VAR_4 > VAR_1)
  FUNC_1("overrun attribute buffer\n");
 FUNC_0(&VAR_0[VAR_2], VAR_3, VAR_4);
 VAR_2 += VAR_4;
}
