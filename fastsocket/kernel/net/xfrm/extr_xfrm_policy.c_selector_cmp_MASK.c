
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xfrm_selector {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(struct xfrm_selector *VAR_0, struct xfrm_selector *VAR_1)
{
 u32 *VAR_2 = (u32 *) VAR_0;
 u32 *VAR_3 = (u32 *) VAR_1;
 int VAR_4 = sizeof(struct xfrm_selector) / sizeof(u32);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_2[VAR_5] != VAR_3[VAR_5])
   return 1;
 }

 return 0;
}
