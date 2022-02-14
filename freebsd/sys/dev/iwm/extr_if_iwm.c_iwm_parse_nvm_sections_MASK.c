
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct iwm_softc {TYPE_1__* cfg; int sc_dev; } ;
struct iwm_nvm_section {scalar_t__ data; } ;
struct iwm_nvm_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ device_family; size_t nvm_hw_section_num; scalar_t__ nvm_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int ,char*) ;
 struct iwm_nvm_data* FUNC_1 (struct iwm_softc*,int const*,int const*,int const*,int const*,int const*,int const*) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static struct iwm_nvm_data *
FUNC_3(struct iwm_softc *VAR_9, struct iwm_nvm_section *VAR_10)
{
 const uint16_t *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;


 if (VAR_9->cfg->device_family == VAR_0) {
  if (!VAR_10[VAR_8].data ||
      !VAR_10[VAR_9->cfg->nvm_hw_section_num].data) {
   FUNC_0(VAR_9->sc_dev,
       "Can't parse empty OTP/NVM sections\n");
   return ((void*)0);
  }
 } else if (VAR_9->cfg->device_family >= VAR_1) {

  if (!VAR_10[VAR_8].data ||
      !VAR_10[VAR_6].data) {
   FUNC_0(VAR_9->sc_dev,
       "Can't parse empty OTP/NVM sections\n");
   return ((void*)0);
  }

  if (!VAR_10[VAR_9->cfg->nvm_hw_section_num].data &&
      !VAR_10[VAR_4].data) {
   FUNC_0(VAR_9->sc_dev,
       "Can't parse mac_address, empty sections\n");
   return ((void*)0);
  }


  if (!VAR_10[VAR_5].data) {
   FUNC_0(VAR_9->sc_dev,
       "Can't parse phy_sku in B0, empty sections\n");
   return ((void*)0);
  }
 } else {
  FUNC_2("unknown device family %d\n", VAR_9->cfg->device_family);
 }

 VAR_11 = (const uint16_t *) VAR_10[VAR_9->cfg->nvm_hw_section_num].data;
 VAR_12 = (const uint16_t *)VAR_10[VAR_8].data;
 VAR_13 = (const uint16_t *)
     VAR_10[VAR_3].data;
 VAR_14 = VAR_9->cfg->nvm_type == VAR_2 ?
     (const uint16_t *)VAR_10[VAR_7].data :
     (const uint16_t *)VAR_10[VAR_6].data;
 VAR_15 = (const uint16_t *)
     VAR_10[VAR_4].data;
 VAR_16 = (const uint16_t *)VAR_10[VAR_5].data;

 return FUNC_1(VAR_9, VAR_11, VAR_12, VAR_13, VAR_15,
     VAR_16, VAR_14);
}
