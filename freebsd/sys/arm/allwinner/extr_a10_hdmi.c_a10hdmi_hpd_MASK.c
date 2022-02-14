
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10hdmi_softc {int mode_hook; } ;
typedef void* device_t ;


 int FUNC_0 (int ,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct a10hdmi_softc*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct a10hdmi_softc* FUNC_3 (void*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{
 struct a10hdmi_softc *VAR_5;
 device_t VAR_6;
 uint32_t VAR_7;

 VAR_6 = VAR_4;
 VAR_5 = FUNC_3(VAR_6);

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 if ((VAR_7 & VAR_2) == VAR_2)
  FUNC_0(VAR_3, VAR_6, VAR_0);

 FUNC_2(&VAR_5->mode_hook);
}
