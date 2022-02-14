
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gem_softc {scalar_t__ sc_variant; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gem_softc*,int ,int,int) ;
 int FUNC_2 (struct gem_softc*,int ,int ,int ) ;
 int FUNC_3 (struct gem_softc*,int ,int ) ;
 int FUNC_4 (struct gem_softc*,int ,int,int) ;
 int FUNC_5 (struct gem_softc*,int ,int,int ) ;
 int FUNC_6 (struct gem_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct gem_softc*) ;

__attribute__((used)) static int
FUNC_9(struct gem_softc *VAR_9)
{





 (void)FUNC_8(VAR_9);
 FUNC_3(VAR_9, VAR_7, 0);
 FUNC_1(VAR_9, VAR_7, 4,
     VAR_0 | VAR_1);
 if (!FUNC_2(VAR_9, VAR_7, VAR_8, 0))
  FUNC_7(VAR_9->sc_dev, "cannot disable TX DMA\n");


 FUNC_0(5000);


 FUNC_6(VAR_9, VAR_3, VAR_5 |
     (VAR_9->sc_variant == VAR_6 ? VAR_2 <<
     VAR_4 : 0));
 FUNC_4(VAR_9, VAR_3, 4,
     VAR_0 | VAR_1);
 if (!FUNC_5(VAR_9, VAR_3, VAR_5, 0)) {
  FUNC_7(VAR_9->sc_dev, "cannot reset transmitter\n");
  return (1);
 }
 return (0);
}
