
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vge_softc {int vge_dev; } ;


 int FUNC_0 (struct vge_softc*,int ) ;
 int FUNC_1 (struct vge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct vge_softc *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_4, VAR_0,
     FUNC_0(VAR_4, VAR_0) | VAR_2);
 FUNC_1(VAR_4, VAR_0,
     FUNC_0(VAR_4, VAR_0) | VAR_1);
 for (VAR_5 = VAR_3; VAR_5 > 0; VAR_5--) {
  FUNC_2(1);
  if ((FUNC_0(VAR_4, VAR_0) & VAR_1) == 0)
   break;
 }
 if (VAR_5 == 0)
  FUNC_3(VAR_4->vge_dev, "MIB clear timed out!\n");
 FUNC_1(VAR_4, VAR_0, FUNC_0(VAR_4, VAR_0) &
     ~VAR_2);
}
