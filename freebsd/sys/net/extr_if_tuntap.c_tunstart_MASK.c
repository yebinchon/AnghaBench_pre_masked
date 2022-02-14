
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct tuntap_softc {int tun_flags; scalar_t__ tun_sigio; TYPE_1__ tun_rsel; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_snd; struct tuntap_softc* if_softc; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct ifnet*,char*) ;
 int VAR_2 ;
 int FUNC_6 (struct tuntap_softc*) ;
 int VAR_3 ;
 int FUNC_7 (struct tuntap_softc*) ;
 int FUNC_8 (scalar_t__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 (struct tuntap_softc*) ;

__attribute__((used)) static void
FUNC_11(struct ifnet *VAR_4)
{
 struct tuntap_softc *VAR_5 = VAR_4->if_softc;
 struct mbuf *VAR_6;

 FUNC_5(VAR_4, "starting\n");
 if (FUNC_0(&VAR_4->if_snd)) {
  FUNC_1(&VAR_4->if_snd);
  FUNC_2(&VAR_4->if_snd, VAR_6);
  if (VAR_6 == ((void*)0)) {
   FUNC_3(&VAR_4->if_snd);
   return;
  }
  FUNC_3(&VAR_4->if_snd);
 }

 FUNC_6(VAR_5);
 if (VAR_5->tun_flags & VAR_3) {
  VAR_5->tun_flags &= ~VAR_3;
  FUNC_10(VAR_5);
 }
 FUNC_9(&VAR_5->tun_rsel, VAR_0 + 1);
 FUNC_4(&VAR_5->tun_rsel.si_note, 0);
 if (VAR_5->tun_flags & VAR_2 && VAR_5->tun_sigio) {
  FUNC_7(VAR_5);
  FUNC_8(&VAR_5->tun_sigio, VAR_1, 0);
 } else
  FUNC_7(VAR_5);
}
