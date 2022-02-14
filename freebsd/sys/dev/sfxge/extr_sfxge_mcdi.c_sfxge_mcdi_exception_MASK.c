
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int dev; } ;
typedef scalar_t__ efx_mcdi_exception_t ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (struct sfxge_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4, efx_mcdi_exception_t VAR_5)
{
 struct sfxge_softc *VAR_6;
 device_t VAR_7;

 VAR_6 = (struct sfxge_softc *)VAR_4;
 VAR_7 = VAR_6->dev;

 FUNC_3(VAR_2, "[%s%d] MC_%s", FUNC_1(VAR_7),
     FUNC_2(VAR_7),
     (VAR_5 == VAR_1)
     ? "REBOOT"
     : (VAR_5 == VAR_0)
     ? "BADASSERT" : "UNKNOWN");

 FUNC_0(VAR_3);

 FUNC_4(VAR_6);
}
