
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int __be32 ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__be32 *
FUNC_2(__be32 *VAR_0, char **VAR_1,
     unsigned int *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(*VAR_0++);
 if (VAR_4 > VAR_3)
  return ((void*)0);
 *VAR_2 = VAR_4;
 *VAR_1 = (char *) VAR_0;
 return VAR_0 + FUNC_0(VAR_4);
}
