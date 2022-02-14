
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int xbd_state; int xbd_io_lock; int * xbd_cm_q; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct xbd_softc* FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int *,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct xbd_softc*,size_t) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct xbd_softc *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;
 int VAR_9;


 FUNC_2(&VAR_7->xbd_io_lock);
 VAR_9 = VAR_7->xbd_state;
 VAR_7->xbd_state = VAR_4;


 VAR_8 = 0;
 while (FUNC_4(VAR_7, VAR_3) != 0) {
  if (FUNC_1(&VAR_7->xbd_cm_q[VAR_3], &VAR_7->xbd_io_lock,
      VAR_2, "blkf_susp", 30 * VAR_5) == VAR_1) {
   VAR_8 = VAR_0;
   break;
  }
 }
 FUNC_3(&VAR_7->xbd_io_lock);

 if (VAR_8 != 0)
  VAR_7->xbd_state = VAR_9;

 return (VAR_8);
}
