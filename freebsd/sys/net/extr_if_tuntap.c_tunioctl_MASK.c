
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct virtio_net_hdr_mrg_rxbuf {int dummy; } ;
struct virtio_net_hdr {int dummy; } ;
struct TYPE_4__ {int octet; } ;
struct tuntap_softc {int tun_flags; int tun_vhdrlen; int tun_sigio; int tun_pid; TYPE_1__ tun_ether; } ;
struct tuninfo {int baudrate; int type; int mtu; } ;
struct thread {int dummy; } ;
struct mbuf {int m_len; struct mbuf* m_next; } ;
struct ifreq {int ifr_mtu; int ifr_name; } ;
struct ifnet {int if_flags; int if_snd; int if_baudrate; int if_type; int if_mtu; int if_vnet; int if_xname; } ;
struct cdev {struct tuntap_softc* si_drv1; } ;
typedef int * caddr_t ;
struct TYPE_6__ {TYPE_2__* td_proc; } ;
struct TYPE_5__ {int p_pid; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mbuf*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;


 int VAR_8 ;




 struct ifnet* FUNC_7 (struct tuntap_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct tuntap_softc*) ;
 int FUNC_9 (struct tuntap_softc*) ;
 int VAR_13 ;

 int FUNC_10 (char,int ) ;
 int FUNC_11 (int *,int *,int) ;
 TYPE_3__* VAR_14 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,int *) ;
 int FUNC_14 (struct ifnet*) ;
 int FUNC_15 (int ,struct ifnet*,int *,struct thread*) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (struct ifnet*,int) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_18(struct cdev *VAR_16, u_long VAR_17, caddr_t VAR_18, int VAR_19,
    struct thread *VAR_20)
{
 struct ifreq VAR_21, *VAR_22;
 struct tuntap_softc *VAR_23 = VAR_16->si_drv1;
 struct ifnet *VAR_24 = FUNC_7(VAR_23);
 struct tuninfo *VAR_25;
 int VAR_26, VAR_27, VAR_28;
 bool VAR_29;

 VAR_29 = (VAR_23->tun_flags & VAR_11) != 0;
 if (VAR_29) {

  switch(VAR_17) {
  case 128:
   VAR_27 = *(int *)VAR_18;
   VAR_27 &= VAR_13;
   VAR_27 &= ~VAR_4;
   VAR_27 |= VAR_6;

   FUNC_8(VAR_23);
   VAR_24->if_flags = VAR_27 |
       (VAR_24->if_flags & VAR_4);
   FUNC_9(VAR_23);

   return (0);
  case 144:
   FUNC_8(VAR_23);
   FUNC_11(&VAR_23->tun_ether.octet, VAR_18,
       sizeof(VAR_23->tun_ether.octet));
   FUNC_9(VAR_23);

   return (0);
  case 143:
   FUNC_8(VAR_23);
   FUNC_11(VAR_18, &VAR_23->tun_ether.octet,
       sizeof(VAR_23->tun_ether.octet));
   FUNC_9(VAR_23);

   return (0);
  case 141:
   VAR_28 = *(int *)VAR_18;
   if (VAR_28 != 0 &&
       VAR_28 != sizeof(struct virtio_net_hdr) &&
       VAR_28 != sizeof(struct virtio_net_hdr_mrg_rxbuf)) {
    return (VAR_1);
   }
   FUNC_8(VAR_23);
   FUNC_17(VAR_24, VAR_28);
   FUNC_9(VAR_23);

   return (0);
  case 142:
   FUNC_8(VAR_23);
   *(int *)VAR_18 = VAR_23->tun_vhdrlen;
   FUNC_9(VAR_23);

   return (0);
  }


 } else {
  switch (VAR_17) {
  case 129:
   FUNC_8(VAR_23);
   if (*(int *)VAR_18) {
    VAR_23->tun_flags |= VAR_12;
    VAR_23->tun_flags &= ~VAR_10;
   } else
    VAR_23->tun_flags &= ~VAR_12;
   FUNC_9(VAR_23);

   return (0);
  case 133:
   FUNC_8(VAR_23);
   if (*(int *)VAR_18) {
    VAR_23->tun_flags |= VAR_10;
    VAR_23->tun_flags &= ~VAR_12;
   } else
    VAR_23->tun_flags &= ~VAR_10;
   FUNC_9(VAR_23);

   return (0);
  case 137:
   FUNC_8(VAR_23);
   *(int *)VAR_18 = (VAR_23->tun_flags & VAR_10) ? 1 : 0;
   FUNC_9(VAR_23);

   return (0);
  case 131:

   if (FUNC_7(VAR_23)->if_flags & VAR_6)
    return (VAR_0);

   switch (*(int *)VAR_18 & ~VAR_5) {
   case 145:
   case 146:
    FUNC_8(VAR_23);
    FUNC_7(VAR_23)->if_flags &=
        ~(146|145|VAR_5);
    FUNC_7(VAR_23)->if_flags |= *(int *)VAR_18;
    FUNC_9(VAR_23);

    break;
   default:
    return (VAR_1);
   }

   return (0);
  case 130:
   FUNC_8(VAR_23);
   VAR_23->tun_pid = VAR_14->td_proc->p_pid;
   FUNC_9(VAR_23);

   return (0);
  }

 }

 switch (VAR_17) {
 case 135:
  VAR_22 = (struct ifreq *)VAR_18;
  FUNC_16(VAR_22->ifr_name, FUNC_7(VAR_23)->if_xname, VAR_7);

  return (0);
 case 132:
  VAR_25 = (struct tuninfo *)VAR_18;
  if (FUNC_7(VAR_23)->if_type != VAR_25->type)
   return (VAR_3);
  FUNC_8(VAR_23);
  if (FUNC_7(VAR_23)->if_mtu != VAR_25->mtu) {
   FUNC_16(VAR_21.ifr_name, FUNC_14(FUNC_7(VAR_23)), VAR_7);
   VAR_21.ifr_mtu = VAR_25->mtu;
   FUNC_1(FUNC_7(VAR_23)->if_vnet);
   VAR_26 = FUNC_15(VAR_8, FUNC_7(VAR_23),
       (caddr_t)&VAR_21, VAR_20);
   FUNC_0();
   if (VAR_26) {
    FUNC_9(VAR_23);
    return (VAR_26);
   }
  }
  FUNC_7(VAR_23)->if_baudrate = VAR_25->baudrate;
  FUNC_9(VAR_23);
  break;
 case 136:
  VAR_25 = (struct tuninfo *)VAR_18;
  FUNC_8(VAR_23);
  VAR_25->mtu = FUNC_7(VAR_23)->if_mtu;
  VAR_25->type = FUNC_7(VAR_23)->if_type;
  VAR_25->baudrate = FUNC_7(VAR_23)->if_baudrate;
  FUNC_9(VAR_23);
  break;
 case 134:
  VAR_15 = *(int *)VAR_18;
  break;
 case 138:
  *(int *)VAR_18 = VAR_15;
  break;
 case 149:
  break;
 case 151:
  FUNC_8(VAR_23);
  if (*(int *)VAR_18)
   VAR_23->tun_flags |= VAR_9;
  else
   VAR_23->tun_flags &= ~VAR_9;
  FUNC_9(VAR_23);
  break;
 case 148:
  if (!FUNC_2(&FUNC_7(VAR_23)->if_snd)) {
   struct mbuf *VAR_30;
   FUNC_3(&FUNC_7(VAR_23)->if_snd);
   FUNC_4(&FUNC_7(VAR_23)->if_snd, VAR_30);
   for (*(int *)VAR_18 = 0; VAR_30 != ((void*)0); VAR_30 = VAR_30->m_next)
    *(int *)VAR_18 += VAR_30->m_len;
   FUNC_5(&FUNC_7(VAR_23)->if_snd);
  } else
   *(int *)VAR_18 = 0;
  break;
 case 147:
  return (FUNC_13(*(int *)VAR_18, &VAR_23->tun_sigio));

 case 150:
  *(int *)VAR_18 = FUNC_12(&VAR_23->tun_sigio);
  return (0);


 case 139:
  return (FUNC_13(-(*(int *)VAR_18), &VAR_23->tun_sigio));


 case 140:
  *(int *)VAR_18 = -FUNC_12(&VAR_23->tun_sigio);
  return (0);

 default:
  return (VAR_2);
 }
 return (0);
}
