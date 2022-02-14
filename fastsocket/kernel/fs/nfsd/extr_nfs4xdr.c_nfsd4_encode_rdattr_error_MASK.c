
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static __be32 *
FUNC_1(__be32 *VAR_1, int VAR_2, __be32 VAR_3)
{
 __be32 *VAR_4;

 if (VAR_2 < 6)
  return ((void*)0);
 *VAR_1++ = FUNC_0(2);
 *VAR_1++ = FUNC_0(VAR_0);
 *VAR_1++ = FUNC_0(0);

 VAR_4 = VAR_1++;
 *VAR_1++ = VAR_3;
 *VAR_4 = FUNC_0((char *)VAR_1 - (char *)VAR_4 - 4);
 return VAR_1;
}
