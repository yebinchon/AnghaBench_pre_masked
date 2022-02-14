
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct a10_aintc_softc {int sc_dev; TYPE_1__* isrcs; } ;
struct TYPE_4__ {int td_intr_frame; } ;
struct TYPE_3__ {int isrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct a10_aintc_softc*,int) ;
 int FUNC_1 (struct a10_aintc_softc*,int) ;
 int FUNC_2 (struct a10_aintc_softc*) ;
 int FUNC_3 (int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_3)
{
 struct a10_aintc_softc *VAR_4 = VAR_3;
 u_int VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 == -1 || VAR_5 > VAR_0) {
  FUNC_4(VAR_4->sc_dev, "Spurious interrupt %d\n", VAR_5);
  return (VAR_1);
 }

 while (VAR_5 != -1) {
  if (VAR_5 > VAR_0) {
   FUNC_4(VAR_4->sc_dev, "Spurious interrupt %d\n",
       VAR_5);
   return (VAR_1);
  }
  if (FUNC_5(&VAR_4->isrcs[VAR_5].isrc,
      VAR_2->td_intr_frame) != 0) {
   FUNC_1(VAR_4, VAR_5);
   FUNC_0(VAR_4, VAR_5);
   FUNC_4(VAR_4->sc_dev,
       "Stray interrupt %d disabled\n", VAR_5);
  }

  FUNC_3(VAR_5);
  VAR_5 = FUNC_2(VAR_4);
 }

 return (VAR_1);
}
