
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {scalar_t__ xbd_state; scalar_t__ xbd_qfrozen_cnt; int xbd_ring; int xbd_io_lock; } ;
struct xbd_command {int cm_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int) ;
 struct xbd_command* FUNC_3 (struct xbd_softc*) ;
 int FUNC_4 (struct xbd_softc*,struct xbd_command*,int) ;
 struct xbd_command* FUNC_5 (struct xbd_softc*,int ) ;
 int FUNC_6 (struct xbd_softc*) ;
 int FUNC_7 (struct xbd_softc*,struct xbd_command*) ;

__attribute__((used)) static void
FUNC_8(struct xbd_softc *VAR_4)
{
 struct xbd_command *VAR_5;
 int VAR_6, VAR_7 = 0;

 FUNC_1(&VAR_4->xbd_io_lock, VAR_0);

 if (VAR_4->xbd_state != VAR_3)
  return;

 while (!FUNC_0(&VAR_4->xbd_ring)) {

  if (VAR_4->xbd_qfrozen_cnt != 0)
   break;

  VAR_5 = FUNC_5(VAR_4, VAR_2);

  if (VAR_5 == ((void*)0))
      VAR_5 = FUNC_3(VAR_4);

  if (VAR_5 == ((void*)0))
   break;

  if ((VAR_5->cm_flags & VAR_1) != 0) {




   FUNC_4(VAR_4, VAR_5, VAR_1);
  }

  if ((VAR_6 = FUNC_7(VAR_4, VAR_5)) != 0) {
   FUNC_2("xbd_queue_request returned %d\n", VAR_6);
   break;
  }
  VAR_7++;
 }

 if (VAR_7 != 0)
  FUNC_6(VAR_4);
}
