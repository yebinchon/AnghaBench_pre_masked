
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axe_softc {scalar_t__ sc_phyno; int sc_ue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct axe_softc*,int ,int ,int,int *) ;
 int VAR_9 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct axe_softc *VAR_10)
{
 FUNC_0(VAR_10, VAR_4, 0, 0x00b0, ((void*)0));
 FUNC_1(&VAR_10->sc_ue, VAR_9 / 16);

 if (VAR_10->sc_phyno == VAR_0) {

  FUNC_0(VAR_10, VAR_2, 0, 0x01, ((void*)0));
  FUNC_1(&VAR_10->sc_ue, VAR_9 / 64);


  FUNC_0(VAR_10, VAR_3, 0,
      VAR_5, ((void*)0));
  FUNC_1(&VAR_10->sc_ue, VAR_9 / 16);


  FUNC_0(VAR_10, VAR_3, 0,
      VAR_6 | VAR_8, ((void*)0));
  FUNC_1(&VAR_10->sc_ue, VAR_9 / 4);


  FUNC_0(VAR_10, VAR_3, 0, VAR_8, ((void*)0));


  FUNC_0(VAR_10, VAR_3, 0,
      VAR_7 | VAR_8, ((void*)0));
 } else {

  FUNC_0(VAR_10, VAR_2, 0, 0x00, ((void*)0));
  FUNC_1(&VAR_10->sc_ue, VAR_9 / 64);


  FUNC_0(VAR_10, VAR_3, 0,
      VAR_6 | VAR_8, ((void*)0));
 }

 FUNC_1(&VAR_10->sc_ue, VAR_9 / 4);
 FUNC_0(VAR_10, VAR_1, 0, 0, ((void*)0));
}
