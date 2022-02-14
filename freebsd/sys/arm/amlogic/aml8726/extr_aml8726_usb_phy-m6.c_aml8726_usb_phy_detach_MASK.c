
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct aml8726_usb_phy_softc {size_t npwr_en; int res; TYPE_1__* pwr_en; } ;
typedef int device_t ;
struct TYPE_2__ {int pol; int pin; int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aml8726_usb_phy_softc*,int ) ;
 size_t FUNC_1 (struct aml8726_usb_phy_softc*,int ) ;
 int FUNC_2 (struct aml8726_usb_phy_softc*,int ,size_t) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int ) ;
 struct aml8726_usb_phy_softc* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 struct aml8726_usb_phy_softc *VAR_5 = FUNC_6(VAR_4);
 uint32_t VAR_6;
 uint32_t VAR_7;





 VAR_7 = FUNC_1(VAR_5, VAR_1);

 VAR_7 |= VAR_0;

 FUNC_2(VAR_5, VAR_1, VAR_7);

 FUNC_0(VAR_5, VAR_1);


 VAR_6 = VAR_5->npwr_en;
 while (VAR_6-- != 0) {
  FUNC_3(VAR_5->pwr_en[VAR_6].dev, VAR_5->pwr_en[VAR_6].pin,
      FUNC_4(VAR_5->pwr_en[VAR_6].pol));
 }
 FUNC_7 (VAR_5->pwr_en, VAR_2);
 VAR_5->pwr_en = ((void*)0);

 FUNC_5(VAR_4, VAR_3, VAR_5->res);

 return (0);
}
