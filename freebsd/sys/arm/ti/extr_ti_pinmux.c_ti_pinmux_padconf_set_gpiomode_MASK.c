
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct ti_pinmux_padconf {scalar_t__ gpio_pin; int gpio_mode; int reg_off; int * ballname; } ;
struct TYPE_2__ {unsigned int padconf_sate_mask; int padconf_muxmode_mask; struct ti_pinmux_padconf* padconf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

int
FUNC_1(uint32_t VAR_4, unsigned int VAR_5)
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


 VAR_7 = (uint16_t)(VAR_5 & VAR_2->padconf_sate_mask);


 VAR_7 |= (uint16_t)(VAR_6->gpio_mode & VAR_2->padconf_muxmode_mask);


 FUNC_0(VAR_3, VAR_6->reg_off, VAR_7);

 return (0);
}
