
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puc_softc {struct puc_cfg* sc_cfg; } ;
struct puc_cfg {int device; } ;
typedef enum puc_cfg_cmd { ____Placeholder_puc_cfg_cmd } puc_cfg_cmd ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct puc_softc *VAR_2, enum puc_cfg_cmd VAR_3, int VAR_4,
    intptr_t *VAR_5)
{
 const struct puc_cfg *VAR_6 = VAR_2->sc_cfg;

 if (VAR_3 == VAR_1) {
  if (VAR_4 == 3 && (VAR_6->device == 0x1045 ||
      VAR_6->device == 0x1144))
   VAR_4 = 7;
  *VAR_5 = VAR_4 * 0x200;

  return 0;
 }
 return (VAR_0);
}
