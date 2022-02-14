
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int octet; } ;
struct tuntap_softc {int tun_flags; int tun_pid; TYPE_1__ tun_ether; } ;
struct thread {TYPE_2__* td_proc; } ;
struct ifnet {int if_flags; int if_drv_flags; } ;
struct cdev {struct tuntap_softc* si_drv1; int si_name; } ;
struct TYPE_4__ {int p_pid; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (int,char*) ;
 int VAR_5 ;
 int FUNC_4 (struct thread*) ;
 struct ifnet* FUNC_5 (struct tuntap_softc*) ;
 int FUNC_6 (struct ifnet*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct tuntap_softc*) ;
 int VAR_9 ;
 int FUNC_8 (struct tuntap_softc*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct tuntap_softc*,int ) ;
 int FUNC_11 (struct ifnet*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (struct tuntap_softc*) ;
 int VAR_11 ;
 int FUNC_13 (int ,int *,int*) ;

__attribute__((used)) static int
FUNC_14(struct cdev *VAR_12, int VAR_13, int VAR_14, struct thread *VAR_15)
{
 struct ifnet *VAR_16;
 struct tuntap_softc *VAR_17;
 int VAR_18, VAR_19;

 VAR_19 = 0;
 FUNC_1(FUNC_4(VAR_15));
 VAR_18 = FUNC_13(VAR_12->si_name, ((void*)0), &VAR_19);
 if (VAR_18 != 0) {
  FUNC_0();
  return (VAR_18);
 }

 VAR_17 = VAR_12->si_drv1;
 FUNC_3(VAR_17 != ((void*)0),
     ("si_drv1 should have been initialized at creation"));

 FUNC_7(VAR_17);
 if ((VAR_17->tun_flags & VAR_7) == 0) {
  FUNC_8(VAR_17);
  FUNC_0();
  return (VAR_1);
 }
 if ((VAR_17->tun_flags & (VAR_9 | VAR_6)) != 0) {
  FUNC_8(VAR_17);
  FUNC_0();
  return (VAR_0);
 }

 VAR_18 = FUNC_12(VAR_17);
 FUNC_3(VAR_18 == 0, ("Must be able to busy an unopen tunnel"));
 VAR_16 = FUNC_5(VAR_17);

 if ((VAR_17->tun_flags & VAR_8) != 0) {
  FUNC_9(FUNC_2(VAR_16), VAR_17->tun_ether.octet,
      sizeof(VAR_17->tun_ether.octet));

  VAR_16->if_drv_flags |= VAR_3;
  VAR_16->if_drv_flags &= ~VAR_2;

  if (VAR_10)
   VAR_16->if_flags |= VAR_4;
 }

 VAR_17->tun_pid = VAR_15->td_proc->p_pid;
 VAR_17->tun_flags |= VAR_9;

 FUNC_11(VAR_16, VAR_5);
 FUNC_6(VAR_16, "open\n");
 FUNC_8(VAR_17);
 (void)FUNC_10(VAR_17, VAR_11);
 FUNC_0();
 return (0);
}
