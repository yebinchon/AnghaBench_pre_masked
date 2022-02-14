
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_hdmi_softc {scalar_t__ i2c_xref; } ;
typedef int * device_t ;


 int * FUNC_0 (scalar_t__) ;
 struct imx_hdmi_softc* FUNC_1 (int *) ;

__attribute__((used)) static device_t
FUNC_2(device_t VAR_0)
{
 struct imx_hdmi_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->i2c_xref == 0)
  return (((void*)0));

 return (FUNC_0(VAR_1->i2c_xref));
}
