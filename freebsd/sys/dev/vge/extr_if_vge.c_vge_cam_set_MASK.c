
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vge_softc {int vge_camidx; int vge_dev; } ;


 int FUNC_0 (struct vge_softc*,scalar_t__,int ) ;
 int FUNC_1 (struct vge_softc*,scalar_t__) ;
 int FUNC_2 (struct vge_softc*,scalar_t__,int) ;
 int FUNC_3 (struct vge_softc*,scalar_t__,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct vge_softc *VAR_14, uint8_t *VAR_15)
{
 int VAR_16, VAR_17 = 0;

 if (VAR_14->vge_camidx == VAR_9)
  return (VAR_1);


 FUNC_0(VAR_14, VAR_6, VAR_7);
 FUNC_2(VAR_14, VAR_6, VAR_10);


 FUNC_3(VAR_14, VAR_4, VAR_5|VAR_14->vge_camidx);


 for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
  FUNC_3(VAR_14, VAR_3 + VAR_16, VAR_15[VAR_16]);


 FUNC_2(VAR_14, VAR_6, VAR_8);


 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  FUNC_4(1);
  if ((FUNC_1(VAR_14, VAR_6) & VAR_8) == 0)
   break;
 }

 if (VAR_16 == VAR_13) {
  FUNC_5(VAR_14->vge_dev, "setting CAM filter failed\n");
  VAR_17 = VAR_0;
  goto fail;
 }


 FUNC_0(VAR_14, VAR_6, VAR_7);
 FUNC_2(VAR_14, VAR_6, VAR_11);


 FUNC_2(VAR_14, VAR_3 + (VAR_14->vge_camidx/8),
     1<<(VAR_14->vge_camidx & 7));

 VAR_14->vge_camidx++;

fail:

 FUNC_3(VAR_14, VAR_4, 0);
 FUNC_0(VAR_14, VAR_6, VAR_7);
 FUNC_2(VAR_14, VAR_6, VAR_12);

 return (VAR_17);
}
