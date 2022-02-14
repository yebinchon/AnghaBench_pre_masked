
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct iwm_softc {TYPE_2__* nvm_data; int sc_dev; TYPE_1__* cfg; } ;
struct iwm_nvm_section {int * data; scalar_t__ length; } ;
typedef int nvm_sections ;
struct TYPE_4__ {int nvm_version; } ;
struct TYPE_3__ {int nvm_hw_section_num; scalar_t__ eeprom_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwm_softc*,int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct iwm_softc*,int,int *,scalar_t__*,scalar_t__) ;
 TYPE_2__* FUNC_4 (struct iwm_softc*,struct iwm_nvm_section*) ;
 int * FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 int FUNC_7 (struct iwm_nvm_section*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct iwm_softc *VAR_8)
{
 struct iwm_nvm_section VAR_9[VAR_4];
 int VAR_10, VAR_11, VAR_12;
 uint32_t VAR_13 = 0;
 uint8_t *VAR_14, *VAR_15;
 uint16_t VAR_16;

 FUNC_7(VAR_9, 0, sizeof(VAR_9));

 if (VAR_8->cfg->nvm_hw_section_num >= VAR_4)
  return VAR_0;



 FUNC_0(VAR_8, VAR_2, "Read from NVM\n");

 VAR_14 = FUNC_5(VAR_8->cfg->eeprom_size, VAR_5, VAR_6 | VAR_7);
 if (!VAR_14)
  return VAR_1;
 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {

  VAR_11 = FUNC_3(VAR_8, VAR_12, VAR_14,
        &VAR_16, VAR_13);
  if (VAR_11)
   continue;
  VAR_13 += VAR_16;
  VAR_15 = FUNC_5(VAR_16, VAR_5, VAR_6);
  if (!VAR_15) {
   VAR_11 = VAR_1;
   break;
  }
  FUNC_6(VAR_15, VAR_14, VAR_16);

  VAR_9[VAR_12].data = VAR_15;
  VAR_9[VAR_12].length = VAR_16;
 }
 if (!VAR_13)
  FUNC_1(VAR_8->sc_dev, "OTP is blank\n");
 FUNC_2(VAR_14, VAR_5);

 VAR_8->nvm_data = FUNC_4(VAR_8, VAR_9);
 if (!VAR_8->nvm_data)
  return VAR_0;
 FUNC_0(VAR_8, VAR_2 | VAR_3,
      "nvm version = %x\n", VAR_8->nvm_data->nvm_version);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (VAR_9[VAR_10].data != ((void*)0))
   FUNC_2(VAR_9[VAR_10].data, VAR_5);
 }

 return 0;
}
