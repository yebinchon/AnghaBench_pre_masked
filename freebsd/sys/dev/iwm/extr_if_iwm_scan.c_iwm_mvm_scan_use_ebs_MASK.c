
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_ucode_capabilities {int flags; } ;
struct TYPE_2__ {struct iwm_ucode_capabilities ucode_capa; } ;
struct iwm_softc {scalar_t__ last_ebs_successful; TYPE_1__ sc_fw; } ;
typedef int boolean_t ;


 int VAR_0 ;

__attribute__((used)) static boolean_t
FUNC_0(struct iwm_softc *VAR_1)
{
 const struct iwm_ucode_capabilities *VAR_2 = &VAR_1->sc_fw.ucode_capa;







 return ((VAR_2->flags & VAR_0) &&
  VAR_1->last_ebs_successful);
}
