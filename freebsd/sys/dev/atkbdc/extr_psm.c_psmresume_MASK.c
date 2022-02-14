
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psm_softc {int config; int state; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 struct psm_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct psm_softc*,int) ;
 int FUNC_4 (struct psm_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct psm_softc *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = FUNC_2(VAR_6);
 int VAR_9;

 FUNC_0(2, (VAR_1, "psm%d: system resume hook called.\n", VAR_8));

 if ((VAR_7->config &
     (VAR_3 | VAR_4)) == 0)
  return (0);

 VAR_9 = FUNC_3(VAR_7, VAR_7->config & VAR_4);

 if ((VAR_7->state & VAR_2) && !(VAR_7->state & VAR_5)) {




  VAR_7->state &= ~VAR_2;
  FUNC_4(VAR_7);
 }

 FUNC_0(2, (VAR_0, "psm%d: system resume hook exiting.\n", VAR_8));

 return (VAR_9);
}
