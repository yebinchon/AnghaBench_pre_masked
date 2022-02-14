
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpms_softc {int dpms_supported_states; } ;
typedef int device_t ;


 int VAR_0 ;
 struct dpms_softc* FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct dpms_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if ((VAR_2->dpms_supported_states & VAR_0) != 0)
  FUNC_1(VAR_0);
 return (0);
}
