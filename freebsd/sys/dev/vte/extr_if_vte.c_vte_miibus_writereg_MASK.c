
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vte_softc {int vte_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct vte_softc*,int ) ;
 int FUNC_1 (struct vte_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vte_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct vte_softc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_6);

 FUNC_1(VAR_10, VAR_4, VAR_9);
 FUNC_1(VAR_10, VAR_3, VAR_2 |
     (VAR_7 << VAR_0) | (VAR_8 << VAR_1));
 for (VAR_11 = VAR_5; VAR_11 > 0; VAR_11--) {
  FUNC_2(5);
  if ((FUNC_0(VAR_10, VAR_3) & VAR_2) == 0)
   break;
 }

 if (VAR_11 == 0)
  FUNC_4(VAR_10->vte_dev, "phy write timeout : %d\n", VAR_8);

 return (0);
}
