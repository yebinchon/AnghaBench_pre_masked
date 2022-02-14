
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_flags; scalar_t__ sc_ratectl_sysctl; scalar_t__ sc_ratectl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct rtwn_softc*,int ,int,int ) ;
 int FUNC_1 (struct rtwn_softc*,scalar_t__,int) ;

void
FUNC_2(struct rtwn_softc *VAR_9)
{


 FUNC_0(VAR_9, VAR_3, 0x08, 0);

 FUNC_1(VAR_9, VAR_0 + 3, 0x01);


 FUNC_1(VAR_9, VAR_1, 0);
 FUNC_1(VAR_9, VAR_2, 0);

 FUNC_1(VAR_9, VAR_4, 0);


 if (VAR_9->sc_flags & VAR_5) {
  if (VAR_9->sc_ratectl_sysctl == VAR_6) {

   VAR_9->sc_ratectl = VAR_7;
  } else
   VAR_9->sc_ratectl = VAR_9->sc_ratectl_sysctl;
 } else

  VAR_9->sc_ratectl = VAR_8;
}
