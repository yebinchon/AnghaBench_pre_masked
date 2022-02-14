
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct ti_pinmux_padconf {char** muxmodes; int reg_off; } ;
struct TYPE_2__ {size_t padconf_sate_mask; size_t padconf_muxmode_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct ti_pinmux_padconf* FUNC_0 (char const*) ;
 size_t FUNC_1 (int ,int ) ;
 int VAR_3 ;

int
FUNC_2(const char *VAR_4, const char **VAR_5,
    unsigned int *VAR_6)
{
 const struct ti_pinmux_padconf *VAR_7;
 uint16_t VAR_8;

 if (!VAR_3)
  return (VAR_1);


 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 == ((void*)0))
  return (VAR_0);


 VAR_8 = FUNC_1(VAR_3, VAR_7->reg_off);


 if (VAR_6)
  *VAR_6 = (VAR_8 & VAR_2->padconf_sate_mask);


 if (VAR_5)
  *VAR_5 = VAR_7->muxmodes[(VAR_8 & VAR_2->padconf_muxmode_mask)];

 return (0);
}
