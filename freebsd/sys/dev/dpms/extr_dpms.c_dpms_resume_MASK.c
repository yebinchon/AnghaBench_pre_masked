
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpms_softc {int dpms_initial_state; } ;
typedef int device_t ;


 struct dpms_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct dpms_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->dpms_initial_state);
 return (0);
}
