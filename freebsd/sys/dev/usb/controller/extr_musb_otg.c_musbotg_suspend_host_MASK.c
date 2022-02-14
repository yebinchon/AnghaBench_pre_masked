
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int status_suspend; } ;
struct musbotg_softc {TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct musbotg_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct musbotg_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct musbotg_softc *VAR_2)
{
 uint8_t VAR_3;

 if (VAR_2->sc_flags.status_suspend) {
  return;
 }

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_3 |= VAR_0;
 FUNC_1(VAR_2, VAR_1, VAR_3);
 VAR_2->sc_flags.status_suspend = 1;
}
