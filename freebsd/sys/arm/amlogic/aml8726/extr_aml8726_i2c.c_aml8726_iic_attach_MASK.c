
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_iic_softc {int res; int * iicbb; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_iic_softc*) ;
 int FUNC_1 (struct aml8726_iic_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int ,char*,int) ;
 struct aml8726_iic_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct aml8726_iic_softc *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 VAR_3->dev = VAR_2;

 if (FUNC_2(VAR_2, VAR_1, VAR_3->res)) {
  FUNC_6(VAR_2, "can not allocate resources for device\n");
  return (VAR_0);
 }

 FUNC_1(VAR_3);

 VAR_3->iicbb = FUNC_4(VAR_2, "iicbb", -1);

 if (VAR_3->iicbb == ((void*)0)) {
  FUNC_6(VAR_2, "could not add iicbb\n");
  VAR_4 = VAR_0;
  goto fail;
 }

 VAR_4 = FUNC_7(VAR_3->iicbb);

 if (VAR_4) {
  FUNC_6(VAR_2, "could not attach iicbb\n");
  goto fail;
 }

 return (0);

fail:
 FUNC_0(VAR_3);
 FUNC_3(VAR_2, VAR_1, VAR_3->res);

 return (VAR_4);
}
