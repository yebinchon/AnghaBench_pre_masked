
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10hdmi_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct a10hdmi_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct a10hdmi_softc*,int ,int ) ;
 int VAR_1 ;
 struct a10hdmi_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, int VAR_3)
{
 struct a10hdmi_softc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_2(VAR_2);


 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;
 FUNC_1(VAR_4, VAR_0, VAR_5);

 return (0);
}
