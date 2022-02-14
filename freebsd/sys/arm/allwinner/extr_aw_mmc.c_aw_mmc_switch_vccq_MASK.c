
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vccq; } ;
struct TYPE_4__ {TYPE_1__ ios; } ;
struct aw_mmc_softc {int aw_dev; int * aw_reg_vqmmc; TYPE_2__ aw_host; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct aw_mmc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int *,int,int) ;



__attribute__((used)) static int
FUNC_3(device_t VAR_2, device_t VAR_3)
{
 struct aw_mmc_softc *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->aw_reg_vqmmc == ((void*)0))
  return VAR_1;

 switch (VAR_4->aw_host.ios.vccq) {
 case 129:
  VAR_5 = 1800000;
  break;
 case 128:
  VAR_5 = 3300000;
  break;
 default:
  return VAR_0;
 }

 VAR_6 = FUNC_2(VAR_4->aw_reg_vqmmc, VAR_5, VAR_5);
 if (VAR_6 != 0) {
  FUNC_1(VAR_4->aw_dev,
      "Cannot set vqmmc to %d<->%d\n",
      VAR_5,
      VAR_5);
  return (VAR_6);
 }

 return (0);
}
