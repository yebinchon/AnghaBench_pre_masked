
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puc_softc {struct puc_cfg* sc_cfg; } ;
struct puc_cfg {int subdevice; } ;
typedef enum puc_cfg_cmd { ____Placeholder_puc_cfg_cmd } puc_cfg_cmd ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct puc_softc *VAR_2, enum puc_cfg_cmd VAR_3, int VAR_4,
    intptr_t *VAR_5)
{
 const struct puc_cfg *VAR_6 = VAR_2->sc_cfg;

 if (VAR_3 == VAR_1) {
  if (VAR_6->subdevice == 0x1282)
   VAR_4 <<= 1;
  else if (VAR_6->subdevice == 0x104b)
   VAR_4 = (VAR_4 == 3) ? 4 : VAR_4;
  *VAR_5 = VAR_4 * 8 + ((VAR_4 > 2) ? 0x18 : 0);
  return (0);
 }
 return (VAR_0);
}
