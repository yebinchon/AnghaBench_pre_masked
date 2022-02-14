
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ha_softc {int ha_disconnect; int ha_shutdown; int ha_connected; int ha_receiving; int ha_lock; scalar_t__ ha_wakeup; TYPE_3__* ha_so; TYPE_1__* ha_ctl_softc; scalar_t__ ha_connect; scalar_t__ ha_listen; int * ha_lso; } ;
struct TYPE_5__ {int sb_state; } ;
struct TYPE_6__ {scalar_t__ so_error; int so_state; TYPE_2__ so_rcv; } ;
struct TYPE_4__ {int ctl_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ha_softc*) ;
 int FUNC_1 (struct ha_softc*) ;
 int FUNC_2 (struct ha_softc*) ;
 int FUNC_3 (struct ha_softc*,int ,int ,int ) ;
 int FUNC_4 (struct ha_softc*) ;
 int FUNC_5 (struct ha_softc*) ;
 int VAR_5 ;
 int FUNC_6 (struct ha_softc*) ;
 int VAR_6 ;
 int FUNC_7 (int ,struct ha_softc*,int *,int *,int ,int ,char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_14(void *VAR_7)
{
 struct ha_softc *VAR_8 = VAR_7;
 int VAR_9;

 while (1) {
  if (VAR_8->ha_disconnect || VAR_8->ha_shutdown) {
   FUNC_1(VAR_8);
   if (VAR_8->ha_disconnect == 2 || VAR_8->ha_shutdown)
    FUNC_4(VAR_8);
   VAR_8->ha_disconnect = 0;
   if (VAR_8->ha_shutdown)
    break;
  } else if (VAR_8->ha_so != ((void*)0) &&
      (VAR_8->ha_so->so_error ||
       VAR_8->ha_so->so_rcv.sb_state & VAR_3))
   FUNC_1(VAR_8);
  if (VAR_8->ha_so == ((void*)0)) {
   if (VAR_8->ha_lso != ((void*)0))
    FUNC_0(VAR_8);
   else if (VAR_8->ha_listen)
    FUNC_5(VAR_8);
   else if (VAR_8->ha_connect)
    FUNC_2(VAR_8);
  }
  if (VAR_8->ha_so != ((void*)0)) {
   if (VAR_8->ha_connected == 0 &&
       VAR_8->ha_so->so_error == 0 &&
       (VAR_8->ha_so->so_state & VAR_4) == 0) {
    VAR_8->ha_connected = 1;
    FUNC_3(VAR_8, VAR_0,
        VAR_1,
        VAR_2);
    VAR_8->ha_receiving = 1;
    VAR_9 = FUNC_7(VAR_5,
        VAR_8, &VAR_8->ha_ctl_softc->ctl_proc,
        ((void*)0), 0, 0, "ctl", "ha_rx");
    if (VAR_9 != 0) {
     FUNC_12("Error creating CTL HA rx thread!\n");
     VAR_8->ha_receiving = 0;
     VAR_8->ha_disconnect = 1;
    }
   }
   FUNC_6(VAR_8);
  }
  FUNC_10(&VAR_8->ha_lock);
  if (VAR_8->ha_so != ((void*)0) &&
      (VAR_8->ha_so->so_error ||
       VAR_8->ha_so->so_rcv.sb_state & VAR_3))
   ;
  else if (!VAR_8->ha_wakeup)
   FUNC_9(&VAR_8->ha_wakeup, &VAR_8->ha_lock, 0, "-", VAR_6);
  VAR_8->ha_wakeup = 0;
  FUNC_11(&VAR_8->ha_lock);
 }
 FUNC_10(&VAR_8->ha_lock);
 VAR_8->ha_shutdown = 2;
 FUNC_13(&VAR_8->ha_wakeup);
 FUNC_11(&VAR_8->ha_lock);
 FUNC_8();
}
