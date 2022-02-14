
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_ccm_softc {int res; int soc; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_ccm_softc*) ;




 int VAR_0 ;
 int FUNC_1 (struct aml8726_ccm_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 struct aml8726_ccm_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7)
{
 struct aml8726_ccm_softc *VAR_8 = FUNC_3(VAR_7);

 VAR_8->dev = VAR_7;

 switch (VAR_6) {
 case 131:
  VAR_8->soc = VAR_2;
  break;
 case 130:
  VAR_8->soc = VAR_3;
  break;
 case 129:
  VAR_8->soc = VAR_4;
  break;
 case 128:
  VAR_8->soc = VAR_5;
  break;
 default:
  FUNC_4(VAR_7, "unsupported SoC\n");
  return (VAR_0);

 }

 if (FUNC_2(VAR_7, VAR_1, VAR_8->res)) {
  FUNC_4(VAR_7, "can not allocate resources for device\n");
  return (VAR_0);
 }

 FUNC_0(VAR_8);

 return (FUNC_1(VAR_8));
}
