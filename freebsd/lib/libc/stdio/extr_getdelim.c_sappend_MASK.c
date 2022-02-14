
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,size_t,size_t*) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_2(char ** __restrict VAR_0, size_t * __restrict VAR_1,
 size_t * __restrict VAR_2, char * __restrict VAR_3, size_t VAR_4)
{


 if (FUNC_0(VAR_0, VAR_4 + *VAR_1 + 1, VAR_2))
  return (-1);
 FUNC_1(*VAR_0 + *VAR_1, VAR_3, VAR_4);
 *VAR_1 += VAR_4;
 return (0);
}
