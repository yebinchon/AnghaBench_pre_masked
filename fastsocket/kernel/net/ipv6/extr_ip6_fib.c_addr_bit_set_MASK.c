
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static __inline__ __be32 FUNC_1(void *VAR_0, int VAR_1)
{
 __be32 *VAR_2 = VAR_0;

 return FUNC_0(1 << ((~VAR_1)&0x1F)) & VAR_2[VAR_1>>5];
}
