
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct sbni_in_stats {size_t rxl; int fixed_rxl; int fixed_rate; int mac_addr; int rate; } ;
struct TYPE_2__ {int rate; int rxl; } ;
struct sbni_softc {size_t cur_rxl_index; struct sbni_in_stats in_stats; TYPE_1__ csr1; int ifp; int delta_rxl; } ;
struct sbni_flags {size_t rxl; int fixed_rxl; int fixed_rate; int mac_addr; int rate; } ;
struct ifreq {struct sbni_in_stats ifr_ifru; } ;
struct ifnet {int if_flags; int if_drv_flags; struct sbni_softc* if_softc; } ;
typedef int flags ;
typedef struct sbni_in_stats* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char VAR_9 ;
 int FUNC_1 (struct sbni_softc*) ;
 int FUNC_2 (struct sbni_softc*) ;







 int FUNC_3 (struct sbni_in_stats*,struct sbni_in_stats*,int) ;
 int FUNC_4 (struct sbni_in_stats*,int) ;
 int FUNC_5 (struct sbni_in_stats*,int ,int) ;
 struct thread* VAR_10 ;
 int FUNC_6 (struct ifnet*,int,struct sbni_in_stats*) ;
 int FUNC_7 (struct sbni_in_stats*,int ) ;
 int FUNC_8 (struct ifreq*) ;
 struct sbni_in_stats* FUNC_9 (int,int ,int ) ;
 int FUNC_10 (struct thread*,int ) ;
 int * VAR_11 ;
 int FUNC_11 (struct sbni_softc*) ;
 int FUNC_12 (struct sbni_softc*,int ,char) ;
 int FUNC_13 (struct sbni_softc*) ;

__attribute__((used)) static int
FUNC_14(struct ifnet *VAR_12, u_long VAR_13, caddr_t VAR_14)
{
 struct sbni_softc *VAR_15;
 struct ifreq *VAR_16;
 struct thread *VAR_17;
 struct sbni_in_stats *VAR_18;
 struct sbni_flags VAR_19;
 int VAR_20;

 VAR_15 = VAR_12->if_softc;
 VAR_16 = (struct ifreq *)VAR_14;
 VAR_17 = VAR_10;
 VAR_20 = 0;

 switch (VAR_13) {
 case 128:




  FUNC_1(VAR_15);
  if (VAR_12->if_flags & VAR_5) {
   if (!(VAR_12->if_drv_flags & VAR_4))
    FUNC_11(VAR_15);
  } else {
   if (VAR_12->if_drv_flags & VAR_4) {
    FUNC_13(VAR_15);
   }
  }
  FUNC_2(VAR_15);
  break;

 case 134:
 case 133:




  VAR_20 = 0;


  break;




 case 132:
  FUNC_1(VAR_15);
  FUNC_3((caddr_t)FUNC_0(VAR_15->ifp)+3, (caddr_t) &VAR_19, 3);
  VAR_19.rxl = VAR_15->cur_rxl_index;
  VAR_19.rate = VAR_15->csr1.rate;
  VAR_19.fixed_rxl = (VAR_15->delta_rxl == 0);
  VAR_19.fixed_rate = 1;
  FUNC_2(VAR_15);
  FUNC_3(&VAR_19, &VAR_16->ifr_ifru, sizeof(VAR_19));
  break;

 case 131:
  VAR_18 = FUNC_9(sizeof(struct sbni_in_stats), VAR_6,
      VAR_7);
  FUNC_1(VAR_15);
  FUNC_3(&VAR_15->in_stats, VAR_18, sizeof(struct sbni_in_stats));
  FUNC_2(VAR_15);
  VAR_20 = FUNC_5(VAR_18, FUNC_8(VAR_16),
      sizeof(struct sbni_in_stats));
  FUNC_7(VAR_18, VAR_6);
  break;

 case 129:

  VAR_20 = FUNC_10(VAR_17, VAR_8);
  if (VAR_20)
   break;
  FUNC_3(&VAR_16->ifr_ifru, &VAR_19, sizeof(VAR_19));
  FUNC_1(VAR_15);
  if (VAR_19.fixed_rxl) {
   VAR_15->delta_rxl = 0;
   VAR_15->cur_rxl_index = VAR_19.rxl;
  } else {
   VAR_15->delta_rxl = VAR_3;
   VAR_15->cur_rxl_index = VAR_2;
  }
  VAR_15->csr1.rxl = VAR_11[VAR_15->cur_rxl_index];
  VAR_15->csr1.rate = VAR_19.fixed_rate ? VAR_19.rate : VAR_1;
  if (VAR_19.mac_addr)
   FUNC_3((caddr_t) &VAR_19,
         (caddr_t) FUNC_0(VAR_15->ifp)+3, 3);


  FUNC_12(VAR_15, VAR_0, *(char*)(&VAR_15->csr1) | VAR_9);
  FUNC_2(VAR_15);
  break;

 case 130:
  FUNC_1(VAR_15);
  if (!(VAR_20 = FUNC_10(VAR_17, VAR_8)))
   FUNC_4(&VAR_15->in_stats, sizeof(struct sbni_in_stats));
  FUNC_2(VAR_15);
  break;

 default:
  VAR_20 = FUNC_6(VAR_12, VAR_13, VAR_14);
  break;
 }

 return (VAR_20);
}
