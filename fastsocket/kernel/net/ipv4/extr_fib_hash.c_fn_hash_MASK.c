
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fn_zone {int fz_order; } ;
typedef int __be32 ;


 int FUNC_0 (struct fn_zone*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u32 FUNC_2(__be32 VAR_0, struct fn_zone *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_0)>>(32 - VAR_1->fz_order);
 VAR_2 ^= (VAR_2>>20);
 VAR_2 ^= (VAR_2>>10);
 VAR_2 ^= (VAR_2>>5);
 VAR_2 &= FUNC_0(VAR_1);
 return VAR_2;
}
