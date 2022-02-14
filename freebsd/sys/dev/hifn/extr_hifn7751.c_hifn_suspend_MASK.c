
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_softc {int sc_suspended; } ;
typedef int device_t ;


 struct hifn_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct hifn_softc*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct hifn_softc *VAR_1 = FUNC_0(VAR_0);



 VAR_1->sc_suspended = 1;

 return (0);
}
