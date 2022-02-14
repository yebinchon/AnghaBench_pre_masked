
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ti_pinmux_softc {int sc_dev; } ;
struct ti_pinmux_padconf {int reg_off; int ** muxmodes; } ;
struct TYPE_2__ {unsigned int padconf_sate_mask; unsigned int padconf_muxmode_mask; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,char const*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct ti_pinmux_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ti_pinmux_softc *VAR_3,
    const struct ti_pinmux_padconf *VAR_4,
    const char *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;
 uint16_t VAR_8;


 VAR_8 = (uint16_t)(VAR_6 & VAR_2->padconf_sate_mask);


 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  if ((VAR_4->muxmodes[VAR_7] != ((void*)0)) &&
      (FUNC_2(VAR_4->muxmodes[VAR_7], VAR_5) == 0)) {
   break;
  }
 }


 if (VAR_7 >= 8) {
  FUNC_1("Invalid mode \"%s\"\n", VAR_5);
  return (VAR_0);
 }


 VAR_8 |= (uint16_t)(VAR_7 & VAR_2->padconf_muxmode_mask);

 if (VAR_1)
  FUNC_0(VAR_3->sc_dev, "setting internal %x for %s\n",
      VAR_8, VAR_5);

 FUNC_3(VAR_3, VAR_4->reg_off, VAR_8);

 return (0);
}
