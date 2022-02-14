
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tuntap_softc {int tun_rsel; } ;
struct thread {int dummy; } ;
struct TYPE_4__ {int ifq_len; } ;
struct ifnet {TYPE_1__ if_snd; } ;
struct cdev {struct tuntap_softc* si_drv1; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ifnet* FUNC_3 (struct tuntap_softc*) ;
 int FUNC_4 (struct ifnet*,char*,...) ;
 int FUNC_5 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct tuntap_softc *VAR_7 = VAR_4->si_drv1;
 struct ifnet *VAR_8 = FUNC_3(VAR_7);
 int VAR_9 = 0;

 FUNC_4(VAR_8, "tunpoll\n");

 if (VAR_5 & (VAR_0 | VAR_2)) {
  FUNC_1(&VAR_8->if_snd);
  if (!FUNC_0(&VAR_8->if_snd)) {
   FUNC_4(VAR_8, "tunpoll q=%d\n", VAR_8->if_snd.ifq_len);
   VAR_9 |= VAR_5 & (VAR_0 | VAR_2);
  } else {
   FUNC_4(VAR_8, "tunpoll waiting\n");
   FUNC_5(VAR_6, &VAR_7->tun_rsel);
  }
  FUNC_2(&VAR_8->if_snd);
 }
 VAR_9 |= VAR_5 & (VAR_1 | VAR_3);

 return (VAR_9);
}
