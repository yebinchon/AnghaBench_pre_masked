
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_led {int l_flags; int l_mask; } ;


 int VAR_0 ;

__attribute__((used)) static __inline uint16_t
FUNC_0(const struct bwi_led *VAR_1, uint16_t VAR_2, int VAR_3)
{
 if (VAR_1->l_flags & VAR_0)
  VAR_3 = !VAR_3;
 if (VAR_3)
  VAR_2 |= VAR_1->l_mask;
 else
  VAR_2 &= ~VAR_1->l_mask;
 return VAR_2;
}
