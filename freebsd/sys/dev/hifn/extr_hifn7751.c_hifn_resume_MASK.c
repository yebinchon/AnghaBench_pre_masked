
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hifn_softc {scalar_t__ sc_suspended; } ;
typedef int device_t ;
struct TYPE_2__ {int if_flags; } ;


 int VAR_0 ;
 struct hifn_softc* FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct hifn_softc*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 struct hifn_softc *VAR_3 = FUNC_0(VAR_2);





 VAR_3->sc_suspended = 0;

 return (0);
}
