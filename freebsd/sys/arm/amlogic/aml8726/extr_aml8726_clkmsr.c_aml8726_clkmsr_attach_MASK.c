
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_clkmsr_softc {int dev; int res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aml8726_clkmsr_softc*,int ) ;
 int FUNC_1 (struct aml8726_clkmsr_softc*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 struct aml8726_clkmsr_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct aml8726_clkmsr_softc *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_4->dev = VAR_3;

 if (FUNC_2(VAR_3, VAR_2, VAR_4->res)) {
  FUNC_4(VAR_3, "can not allocate resources for device\n");
  return (VAR_1);
 }

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 FUNC_4(VAR_4->dev, "bus clock %u MHz\n", VAR_5);

 FUNC_1(VAR_4, VAR_5 * 1000000);

 return (0);
}
