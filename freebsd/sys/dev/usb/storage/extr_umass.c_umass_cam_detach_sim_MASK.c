
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct umass_softc {TYPE_1__* sc_sim; int sc_name; } ;
struct TYPE_3__ {int * softc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct umass_softc *VAR_1)
{
 if (VAR_1->sc_sim != ((void*)0)) {
  if (FUNC_3(FUNC_1(VAR_1->sc_sim))) {

   VAR_1->sc_sim->softc = ((void*)0);
   FUNC_0(VAR_1->sc_sim, VAR_0);
  } else {
   FUNC_2("%s: CAM layer is busy\n",
       VAR_1->sc_name);
  }
  VAR_1->sc_sim = ((void*)0);
 }
}
