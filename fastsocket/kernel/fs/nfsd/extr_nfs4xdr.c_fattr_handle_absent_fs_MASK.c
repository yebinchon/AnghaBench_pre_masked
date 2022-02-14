
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static __be32 FUNC_0(u32 *VAR_6, u32 *VAR_7, u32 *VAR_8)
{

 if (*VAR_6 & ~VAR_3 ||
     *VAR_7 & ~VAR_4) {
  if (*VAR_6 & VAR_1 ||
             *VAR_6 & VAR_0)
   *VAR_8 = VAR_2;
  else
   return VAR_5;
 }
 *VAR_6 &= VAR_3;
 *VAR_7 &= VAR_4;
 return 0;
}
