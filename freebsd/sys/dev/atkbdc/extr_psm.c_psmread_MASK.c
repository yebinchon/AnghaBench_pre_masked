
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct uio {scalar_t__ uio_resid; } ;
struct TYPE_2__ {scalar_t__ count; int head; int * buf; } ;
struct psm_softc {int state; TYPE_1__ queue; struct cdev* bdev; } ;
struct cdev {struct psm_softc* si_drv1; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct psm_softc*,int,char*,int ) ;
 int FUNC_5 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_7, struct uio *VAR_8, int VAR_9)
{
 struct psm_softc *VAR_10 = VAR_7->si_drv1;
 u_char VAR_11[VAR_4];
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 if ((VAR_10->state & VAR_5) == 0)
  return (VAR_0);


 VAR_13 = FUNC_2();
 while (VAR_10->queue.count <= 0) {
  if (VAR_7 != VAR_10->bdev) {
   FUNC_3(VAR_13);
   return (VAR_1);
  }
  VAR_10->state |= VAR_3;
  VAR_12 = FUNC_4(VAR_10, VAR_6 | VAR_2, "psmrea", 0);
  VAR_10->state &= ~VAR_3;
  if (VAR_12) {
   FUNC_3(VAR_13);
   return (VAR_12);
  } else if ((VAR_10->state & VAR_5) == 0) {

   FUNC_3(VAR_13);
   return (VAR_0);
  }
 }
 FUNC_3(VAR_13);


 while ((VAR_10->queue.count > 0) && (VAR_8->uio_resid > 0)) {
  VAR_13 = FUNC_2();
  VAR_14 = FUNC_1(VAR_10->queue.count, VAR_8->uio_resid);
  if (VAR_14 > sizeof(VAR_11))
   VAR_14 = sizeof(VAR_11);
  if (VAR_14 > sizeof(VAR_10->queue.buf) - VAR_10->queue.head) {
   FUNC_0(&VAR_10->queue.buf[VAR_10->queue.head], &VAR_11[0],
       sizeof(VAR_10->queue.buf) - VAR_10->queue.head);
   FUNC_0(&VAR_10->queue.buf[0],
       &VAR_11[sizeof(VAR_10->queue.buf) - VAR_10->queue.head],
       VAR_14 - (sizeof(VAR_10->queue.buf) - VAR_10->queue.head));
  } else
   FUNC_0(&VAR_10->queue.buf[VAR_10->queue.head], &VAR_11[0], VAR_14);
  VAR_10->queue.count -= VAR_14;
  VAR_10->queue.head = (VAR_10->queue.head + VAR_14) % sizeof(VAR_10->queue.buf);
  FUNC_3(VAR_13);
  VAR_12 = FUNC_5(VAR_11, VAR_14, VAR_8);
  if (VAR_12)
   break;
 }

 return (VAR_12);
}
