
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
typedef scalar_t__ s32 ;



__attribute__((used)) static inline int FUNC_0(u32 VAR_0, u16 VAR_1,
        u32 VAR_2, u16 VAR_3)
{
 if ((s32)VAR_0 - (s32)VAR_2 < 0 ||
     (VAR_0 == VAR_2 && VAR_1 <= VAR_3))
  return 1;
 return 0;
}
