
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct imx_usbmisc_softc {int mmio; } ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 struct imx_usbmisc_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, u_int VAR_1, uint32_t VAR_2)
{
 struct imx_usbmisc_softc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = FUNC_0(VAR_3->mmio, VAR_1 * sizeof(uint32_t));
 FUNC_1(VAR_3->mmio, VAR_1 * sizeof(uint32_t), VAR_4 | VAR_2);
}
