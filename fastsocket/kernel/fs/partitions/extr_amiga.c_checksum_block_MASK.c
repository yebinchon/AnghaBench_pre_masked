
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static __inline__ u32
FUNC_1(__be32 *VAR_0, int VAR_1)
{
 u32 VAR_2 = 0;

 while (VAR_1--)
  VAR_2 += FUNC_0(*VAR_0++);
 return VAR_2;
}
