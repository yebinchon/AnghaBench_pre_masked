
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_iic_softc {int res; scalar_t__ iicbb; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (struct aml8726_iic_softc*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 struct aml8726_iic_softc* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct aml8726_iic_softc *VAR_2 = FUNC_4(VAR_1);
 device_t VAR_3;
 VAR_3 = VAR_2->iicbb;
 FUNC_1(VAR_1);
 if (VAR_3)
  FUNC_3(VAR_1, VAR_3);

 FUNC_0(VAR_2);

 FUNC_2(VAR_1, VAR_0, VAR_2->res);

 return (0);
}
