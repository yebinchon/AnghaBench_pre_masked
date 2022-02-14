
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct axe_softc {int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct axe_softc*) ;
 int FUNC_1 (struct axe_softc*) ;
 int FUNC_2 (struct axe_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct axe_softc*,int ,int,int,int*) ;
 struct axe_softc* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, int VAR_6, int VAR_7)
{
 struct axe_softc *VAR_8 = FUNC_4(VAR_5);
 uint16_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_6(&VAR_8->sc_mtx);
 if (!VAR_10)
  FUNC_1(VAR_8);

 FUNC_3(VAR_8, VAR_1, 0, 0, ((void*)0));
 FUNC_3(VAR_8, VAR_2, VAR_7, VAR_6, &VAR_9);
 FUNC_3(VAR_8, VAR_0, 0, 0, ((void*)0));

 VAR_9 = FUNC_5(VAR_9);
 if (FUNC_0(VAR_8) && VAR_7 == VAR_4) {






  VAR_9 &= ~VAR_3;
 }

 if (!VAR_10)
  FUNC_2(VAR_8);
 return (VAR_9);
}
