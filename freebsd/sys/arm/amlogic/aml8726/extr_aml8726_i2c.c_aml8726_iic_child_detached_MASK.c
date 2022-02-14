
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_iic_softc {int * iicbb; } ;
typedef int * device_t ;


 struct aml8726_iic_softc* FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct aml8726_iic_softc *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 == VAR_2->iicbb)
  VAR_2->iicbb = ((void*)0);
}
