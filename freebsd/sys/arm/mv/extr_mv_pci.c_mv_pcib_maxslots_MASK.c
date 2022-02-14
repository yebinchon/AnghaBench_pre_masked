
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_pcib_softc {scalar_t__ sc_type; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mv_pcib_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2)
{
 struct mv_pcib_softc *VAR_3 = FUNC_0(VAR_2);

 return ((VAR_3->sc_type != VAR_0) ? 1 : VAR_1);
}
