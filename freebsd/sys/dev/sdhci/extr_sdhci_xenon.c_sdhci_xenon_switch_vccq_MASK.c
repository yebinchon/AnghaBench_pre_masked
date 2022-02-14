
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_xenon_softc {int dev; int * reg_vqmmc; } ;
struct TYPE_3__ {int vccq; } ;
struct TYPE_4__ {TYPE_1__ ios; } ;
struct sdhci_slot {TYPE_2__ host; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sdhci_slot* FUNC_0 (int ) ;
 struct sdhci_xenon_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int *,int,int) ;



__attribute__((used)) static int
FUNC_4(device_t VAR_2, device_t VAR_3)
{
 struct sdhci_xenon_softc *VAR_4;
 struct sdhci_slot *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = FUNC_1(VAR_2);

        if (VAR_4->reg_vqmmc == ((void*)0))
  return VAR_1;

 VAR_5 = FUNC_0(VAR_3);
 switch (VAR_5->host.ios.vccq) {
 case 129:
  VAR_6 = 1800000;
  break;
 case 128:
  VAR_6 = 3300000;
  break;
 default:
  return VAR_0;
 }

 VAR_7 = FUNC_3(VAR_4->reg_vqmmc, VAR_6, VAR_6);
 if (VAR_7 != 0) {
  FUNC_2(VAR_4->dev,
      "Cannot set vqmmc to %d<->%d\n",
      VAR_6,
      VAR_6);
  return (VAR_7);
 }

 return (0);
}
