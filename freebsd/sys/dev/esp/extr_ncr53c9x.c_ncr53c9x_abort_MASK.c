
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {scalar_t__ sc_state; struct ncr53c9x_ecb* sc_nexus; } ;
struct ncr53c9x_ecb {int timeout; int ch; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ncr53c9x_softc*,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ,struct ncr53c9x_ecb*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct ncr53c9x_softc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ncr53c9x_softc *VAR_7, struct ncr53c9x_ecb *VAR_8)
{

 FUNC_0(VAR_7, VAR_1);


 VAR_8->timeout = VAR_2;
 VAR_8->flags |= VAR_0;

 if (VAR_8 == VAR_7->sc_nexus) {




  if (VAR_7->sc_state == VAR_3)
   FUNC_4(VAR_5);




  FUNC_1(&VAR_8->ch, FUNC_2(VAR_8->timeout),
      VAR_6, VAR_8);
 } else {





  if (VAR_7->sc_state == VAR_4)
   FUNC_3(VAR_7);
 }
}
