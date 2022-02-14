
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gem_softc {scalar_t__ sc_variant; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gem_softc*,int ,int,int) ;
 int FUNC_2 (struct gem_softc*,int ,int,int ) ;
 int FUNC_3 (struct gem_softc*,int ,int) ;
 int FUNC_4 (struct gem_softc*,int ,int,int) ;
 int FUNC_5 (struct gem_softc*,int ,int,int ) ;
 int FUNC_6 (struct gem_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct gem_softc*) ;

__attribute__((used)) static int
FUNC_9(struct gem_softc *VAR_10)
{





 (void)FUNC_8(VAR_10);
 FUNC_3(VAR_10, VAR_7, 0);
 FUNC_1(VAR_10, VAR_7, 4,
     VAR_0 | VAR_1);
 if (!FUNC_2(VAR_10, VAR_7, VAR_8, 0))
  FUNC_7(VAR_10->sc_dev, "cannot disable RX DMA\n");


 FUNC_0(5000);


 FUNC_6(VAR_10, VAR_4, VAR_6 |
     (VAR_10->sc_variant == VAR_9 ? VAR_2 <<
     VAR_5 : 0));
 FUNC_4(VAR_10, VAR_4, 4,
     VAR_0 | VAR_1);
 if (!FUNC_5(VAR_10, VAR_4, VAR_6, 0)) {
  FUNC_7(VAR_10->sc_dev, "cannot reset receiver\n");
  return (1);
 }


 FUNC_3(VAR_10, VAR_3, 1);
 FUNC_1(VAR_10, VAR_3, 4,
     VAR_0 | VAR_1);
 if (!FUNC_2(VAR_10, VAR_3, 1, 0)) {
  FUNC_7(VAR_10->sc_dev, "cannot reset RX MAC\n");
  return (1);
 }

 return (0);
}
