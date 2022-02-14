
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vr_softc {scalar_t__ vr_revid; } ;


 int FUNC_0 (struct vr_softc*,int ) ;
 int FUNC_1 (struct vr_softc*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct vr_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_3(struct vr_softc *VAR_17)
{
 uint8_t VAR_18;

 FUNC_2(VAR_17);

 if (VAR_17->vr_revid < VAR_0)
  return;


 VAR_18 = FUNC_0(VAR_17, VAR_6);
 VAR_18 &= ~(VAR_7 | VAR_8 | VAR_9);
 FUNC_1(VAR_17, VAR_6, VAR_18);


 FUNC_1(VAR_17, VAR_16, 0xFF);
 FUNC_1(VAR_17, VAR_11,
     VAR_14 | VAR_15 | VAR_13);
 FUNC_1(VAR_17, VAR_5, 0xFF);
 FUNC_1(VAR_17, VAR_2, VAR_3);
 if (VAR_17->vr_revid > VAR_1) {

  FUNC_1(VAR_17, VAR_11, VAR_12);
  FUNC_1(VAR_17, VAR_10, 3);
  FUNC_1(VAR_17, VAR_4, 3);
 }
}
