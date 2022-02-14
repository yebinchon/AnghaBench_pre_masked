
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas_softc {int sc_flags; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cas_softc*,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct cas_softc*,int ,int) ;
 int FUNC_2 (struct cas_softc*,int ,int,int ) ;
 int FUNC_3 (struct cas_softc*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct cas_softc *VAR_8)
{





 (void)FUNC_3(VAR_8);
 FUNC_1(VAR_8, VAR_6, 0);
 FUNC_0(VAR_8, VAR_6, 4,
     VAR_0 | VAR_1);
 if (!FUNC_2(VAR_8, VAR_6, VAR_7, 0))
  FUNC_4(VAR_8->sc_dev, "cannot disable TX DMA\n");


 FUNC_1(VAR_8, VAR_2, VAR_4 |
     ((VAR_8->sc_flags & VAR_5) != 0 ? VAR_3 : 0));
 FUNC_0(VAR_8, VAR_2, 4,
     VAR_0 | VAR_1);
 if (!FUNC_2(VAR_8, VAR_2, VAR_4, 0)) {
  FUNC_4(VAR_8->sc_dev, "cannot reset transmitter\n");
  return (1);
 }
 return (0);
}
