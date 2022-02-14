
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled_capa; } ;
struct TYPE_4__ {TYPE_1__ ucode_capa; } ;
struct iwm_softc {TYPE_2__ sc_fw; } ;


 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static inline bool
FUNC_1(struct iwm_softc *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0->sc_fw.ucode_capa.enabled_capa, VAR_1);
}
