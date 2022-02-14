
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_flags; int sc_ic; int sc_attached; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*) ;
 int FUNC_1 (struct iwm_softc*) ;
 int VAR_1 ;
 struct iwm_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iwm_softc*) ;
 int FUNC_5 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct iwm_softc *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = 0;





 FUNC_5(VAR_2, VAR_1, 0x00, 1);

 if (!VAR_3->sc_attached)
  return 0;

 FUNC_4(FUNC_2(VAR_2));

 FUNC_0(VAR_3);
 if (VAR_3->sc_flags & VAR_0) {
  VAR_3->sc_flags &= ~VAR_0;
  VAR_4 = 1;
 }
 FUNC_1(VAR_3);

 if (VAR_4)
  FUNC_3(&VAR_3->sc_ic);

 return 0;
}
