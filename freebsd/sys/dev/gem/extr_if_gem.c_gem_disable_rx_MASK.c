
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gem_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gem_softc*,int ,int,int) ;
 scalar_t__ FUNC_1 (struct gem_softc*,int ,int,int ) ;
 int FUNC_2 (struct gem_softc*,int ) ;
 int FUNC_3 (struct gem_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct gem_softc *VAR_4)
{

 FUNC_3(VAR_4, VAR_2,
     FUNC_2(VAR_4, VAR_2) & ~VAR_3);
 FUNC_0(VAR_4, VAR_2, 4,
     VAR_0 | VAR_1);
 if (FUNC_1(VAR_4, VAR_2, VAR_3, 0))
  return (1);
 FUNC_4(VAR_4->sc_dev, "cannot disable RX MAC\n");
 return (0);
}
