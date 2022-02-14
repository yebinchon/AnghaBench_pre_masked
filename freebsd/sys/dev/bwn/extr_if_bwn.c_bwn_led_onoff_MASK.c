
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_led {int led_flags; int led_mask; } ;


 int VAR_0 ;

__attribute__((used)) static __inline uint16_t
FUNC_0(const struct bwn_led *VAR_1, uint16_t VAR_2, int VAR_3)
{

 if (VAR_1->led_flags & VAR_0)
  VAR_3 = !VAR_3;
 if (VAR_3)
  VAR_2 |= VAR_1->led_mask;
 else
  VAR_2 &= ~VAR_1->led_mask;
 return VAR_2;
}
