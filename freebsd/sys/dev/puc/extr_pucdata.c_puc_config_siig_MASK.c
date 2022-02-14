
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puc_softc {struct puc_cfg* sc_cfg; } ;
struct puc_cfg {int ports; } ;
typedef enum puc_cfg_cmd { ____Placeholder_puc_cfg_cmd } puc_cfg_cmd ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct puc_softc *VAR_3, enum puc_cfg_cmd VAR_4, int VAR_5,
    intptr_t *VAR_6)
{
 const struct puc_cfg *VAR_7 = VAR_3->sc_cfg;

 switch (VAR_4) {
 case 129:
  if (VAR_7->ports == VAR_2) {
   *VAR_6 = (VAR_5 > 4) ? 8 * (VAR_5 - 4) : 0;
   return (0);
  }
  break;
 case 128:
  if (VAR_7->ports == VAR_2) {
   *VAR_6 = 0x10 + ((VAR_5 > 4) ? 0x10 : 4 * VAR_5);
   return (0);
  }
  if (VAR_7->ports == VAR_1) {
   switch (VAR_5) {
   case 0: *VAR_6 = 0x10; return (0);
   case 1: *VAR_6 = 0x14; return (0);
   case 2: *VAR_6 = 0x1c; return (0);
   }
  }
  break;
 default:
  break;
 }
 return (VAR_0);
}
