
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct tuntap_softc {int tun_flags; TYPE_1__ tun_rsel; int * tun_sigio; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct tuntap_softc* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ifnet*,char*,...) ;
 int VAR_5 ;
 int FUNC_4 (struct tuntap_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct tuntap_softc*) ;
 int VAR_8 ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 (struct tuntap_softc*) ;

__attribute__((used)) static void
FUNC_11(struct ifnet *VAR_9)
{
 struct tuntap_softc *VAR_10 = VAR_9->if_softc;

 FUNC_3(VAR_9, "starting\n");






 FUNC_4(VAR_10);
 if (((VAR_10->tun_flags & VAR_8) == 0) &&
     ((VAR_10->tun_flags & VAR_6) != VAR_6)) {
  struct mbuf *VAR_11;


  FUNC_3(VAR_9, "not ready, tun_flags = 0x%x\n", VAR_10->tun_flags);

  for (;;) {
   FUNC_1(&VAR_9->if_snd, VAR_11);
   if (VAR_11 != ((void*)0)) {
    FUNC_7(VAR_11);
    FUNC_6(VAR_9, VAR_0, 1);
   } else
    break;
  }
  FUNC_5(VAR_10);

  return;
 }

 VAR_9->if_drv_flags |= VAR_2;

 if (!FUNC_0(&VAR_9->if_snd)) {
  if (VAR_10->tun_flags & VAR_7) {
   VAR_10->tun_flags &= ~VAR_7;
   FUNC_10(VAR_10);
  }

  if ((VAR_10->tun_flags & VAR_5) && (VAR_10->tun_sigio != ((void*)0))) {
   FUNC_5(VAR_10);
   FUNC_8(&VAR_10->tun_sigio, VAR_4, 0);
   FUNC_4(VAR_10);
  }

  FUNC_9(&VAR_10->tun_rsel, VAR_3+1);
  FUNC_2(&VAR_10->tun_rsel.si_note, 0);
  FUNC_6(VAR_9, VAR_1, 1);
 }

 VAR_9->if_drv_flags &= ~VAR_2;
 FUNC_5(VAR_10);
}
