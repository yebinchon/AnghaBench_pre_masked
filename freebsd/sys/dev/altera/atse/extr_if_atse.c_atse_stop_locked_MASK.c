
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct atse_softc {int atse_flags; int atse_dev; struct ifnet* atse_ifp; int atse_tick; } ;


 int VAR_0 ;
 int FUNC_0 (struct atse_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct atse_softc*,int ) ;
 int FUNC_2 (struct atse_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct atse_softc *VAR_6)
{
 uint32_t VAR_7, VAR_8;
 struct ifnet *VAR_9;
 int VAR_10;

 FUNC_0(VAR_6);

 FUNC_4(&VAR_6->atse_tick);

 VAR_9 = VAR_6->atse_ifp;
 VAR_9->if_drv_flags &= ~(VAR_5 | VAR_4);


 VAR_7 = VAR_3|VAR_2;
 VAR_8 = FUNC_1(VAR_6, VAR_1);
 VAR_8 &= ~VAR_7;
 FUNC_2(VAR_6, VAR_1, VAR_8);


 for (VAR_10 = 0; VAR_10 < 100; VAR_10++) {
  VAR_8 = FUNC_1(VAR_6, VAR_1);
  if ((VAR_8 & VAR_7) == 0) {
   break;
  }
  FUNC_3(10);
 }

 if ((VAR_8 & VAR_7) != 0) {
  FUNC_5(VAR_6->atse_dev, "Disabling MAC TX/RX timed out.\n");

 }

 VAR_6->atse_flags &= ~VAR_0;

 return (0);
}
