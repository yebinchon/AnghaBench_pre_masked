
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vr_softc {scalar_t__ vr_revid; int vr_dev; } ;


 int FUNC_0 (struct vr_softc const*,int ) ;
 int FUNC_1 (struct vr_softc const*,int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct vr_softc const*,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(const struct vr_softc *VAR_6)
{
 int VAR_7;



 FUNC_1(VAR_6, VAR_1, VAR_2);
 if (VAR_6->vr_revid < VAR_0) {

  FUNC_2(100);
 }
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_2(10);
  if (!(FUNC_0(VAR_6, VAR_1) & VAR_2))
   break;
 }
 if (VAR_7 == VAR_5) {
  if (VAR_6->vr_revid < VAR_0)
   FUNC_4(VAR_6->vr_dev, "reset never completed!\n");
  else {

   FUNC_4(VAR_6->vr_dev,
       "Using force reset command.\n");
   FUNC_3(VAR_6, VAR_4, VAR_3);




   FUNC_2(2000);
  }
 }

}
