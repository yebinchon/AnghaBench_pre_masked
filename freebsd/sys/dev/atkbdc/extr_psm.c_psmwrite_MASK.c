
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct uio {scalar_t__ uio_resid; } ;
struct TYPE_2__ {scalar_t__ level; } ;
struct psm_softc {int state; int kbdc; TYPE_1__ mode; } ;
struct cdev {struct psm_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct psm_softc*,int ) ;
 int FUNC_3 (int *,int,struct uio*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_7, struct uio *VAR_8, int VAR_9)
{
 struct psm_softc *VAR_10 = VAR_7->si_drv1;
 u_char VAR_11[VAR_5];
 int VAR_12 = 0, VAR_13, VAR_14;

 if ((VAR_10->state & VAR_6) == 0)
  return (VAR_0);

 if (VAR_10->mode.level < VAR_4)
  return (VAR_1);


 while (VAR_8->uio_resid > 0) {
  VAR_14 = FUNC_1(VAR_5, VAR_8->uio_resid);
  VAR_12 = FUNC_3(VAR_11, VAR_14, VAR_8);
  if (VAR_12)
   break;
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   FUNC_0(4, (VAR_3, "psm: cmd 0x%x\n", VAR_11[VAR_13]));
   if (!FUNC_4(VAR_10->kbdc, VAR_11[VAR_13])) {
    FUNC_0(2, (VAR_3,
        "psm: cmd 0x%x failed.\n", VAR_11[VAR_13]));
    return (FUNC_2(VAR_10, VAR_2));
   }
  }
 }

 return (VAR_12);
}
