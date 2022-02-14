
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terasic_mtl_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct terasic_mtl_softc*,int ) ;
 int FUNC_1 (struct terasic_mtl_softc*,int ) ;
 int FUNC_2 (struct terasic_mtl_softc*,int ) ;
 int FUNC_3 (struct terasic_mtl_softc*,int ) ;
 int FUNC_4 (struct terasic_mtl_softc*) ;
 int FUNC_5 (struct terasic_mtl_softc*) ;
 int FUNC_6 (struct terasic_mtl_softc*) ;
 int FUNC_7 (struct terasic_mtl_softc*) ;
 int FUNC_8 (struct terasic_mtl_softc*) ;
 int FUNC_9 (struct terasic_mtl_softc*,int) ;
 int FUNC_10 (struct terasic_mtl_softc*) ;
 int FUNC_11 (struct terasic_mtl_softc*) ;
 int FUNC_12 (struct terasic_mtl_softc*) ;

int
FUNC_13(struct terasic_mtl_softc *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6)
  goto error;
 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6)
  goto error;
 VAR_6 = FUNC_11(VAR_5);
 if (VAR_6)
  goto error;
 FUNC_0(VAR_5, VAR_4);
 return (0);
error:
 FUNC_12(VAR_5);
 FUNC_6(VAR_5);
 FUNC_8(VAR_5);
 return (VAR_6);
}
