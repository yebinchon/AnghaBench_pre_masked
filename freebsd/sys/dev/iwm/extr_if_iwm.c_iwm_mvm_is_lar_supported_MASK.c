
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwm_softc {TYPE_2__* cfg; TYPE_1__* nvm_data; } ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ device_family; } ;
struct TYPE_3__ {int lar_enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwm_softc*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_1(struct iwm_softc *VAR_4)
{
 boolean_t VAR_5 = VAR_4->nvm_data->lar_enabled;
 boolean_t VAR_6 = FUNC_0(VAR_4, VAR_2);

 if (VAR_3)
  return VAR_0;





 if (VAR_4->cfg->device_family >= VAR_1)
  return VAR_5 && VAR_6;
 else
  return VAR_6;
}
