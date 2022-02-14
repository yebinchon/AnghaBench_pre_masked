
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef unsigned int uint16_t ;
struct ti_pinmux_padconf {scalar_t__ gpio_pin; unsigned int gpio_mode; int reg_off; int * ballname; } ;
struct TYPE_2__ {unsigned int padconf_muxmode_mask; unsigned int padconf_sate_mask; struct ti_pinmux_padconf* padconf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int FUNC_0 (int ,int ) ;
 int VAR_3 ;

int
FUNC_1(uint32_t VAR_4, unsigned int *VAR_5)
{
 const struct ti_pinmux_padconf *VAR_6;
 uint16_t VAR_7;

 if (!VAR_3)
  return (VAR_1);


 VAR_6 = VAR_2->padconf;
 while (VAR_6->ballname != ((void*)0)) {
  if (VAR_6->gpio_pin == VAR_4)
   break;
  VAR_6++;
 }
 if (VAR_6->ballname == ((void*)0))
  return (VAR_0);


 VAR_7 = FUNC_0(VAR_3, VAR_6->reg_off);


 if ((VAR_7 & VAR_2->padconf_muxmode_mask) != VAR_6->gpio_mode)
  return (VAR_0);


 if (VAR_5)
  *VAR_5 = (VAR_7 & VAR_2->padconf_sate_mask);

 return (0);
}
