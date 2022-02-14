
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0(u8 VAR_3, u32 VAR_4,
         u32 *VAR_5)
{
 if (VAR_3) {
  if ((VAR_4 == VAR_1) ||
      (VAR_4 & ~VAR_2))
   return -VAR_0;
  *VAR_5 = VAR_4;
 } else {
  *VAR_5 = VAR_1;
 }

 return 0;
}
