
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct iwm_softc {int sc_dev; TYPE_1__* cfg; } ;
struct iwm_nvm_data {int * hw_addr; } ;
struct TYPE_4__ {scalar_t__ mac_addr_from_csr; } ;
struct TYPE_3__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwm_softc*,struct iwm_nvm_data*,int const*,int const*) ;
 int FUNC_3 (struct iwm_softc*,struct iwm_nvm_data*) ;

__attribute__((used)) static int
FUNC_4(struct iwm_softc *VAR_4, struct iwm_nvm_data *VAR_5,
     const uint16_t *VAR_6, const uint16_t *VAR_7)
{





 if (VAR_4->cfg->device_family < VAR_1) {
  const uint8_t *VAR_8 = (const uint8_t *)(VAR_6 + VAR_2);


  VAR_5->hw_addr[0] = VAR_8[1];
  VAR_5->hw_addr[1] = VAR_8[0];
  VAR_5->hw_addr[2] = VAR_8[3];
  VAR_5->hw_addr[3] = VAR_8[2];
  VAR_5->hw_addr[4] = VAR_8[5];
  VAR_5->hw_addr[5] = VAR_8[4];
 } else {
  FUNC_2(VAR_4, VAR_5, VAR_7, VAR_6);
 }

 if (!FUNC_1(VAR_5->hw_addr)) {
  FUNC_0(VAR_4->sc_dev, "no valid mac address was found\n");
  return VAR_0;
 }

 return 0;
}
