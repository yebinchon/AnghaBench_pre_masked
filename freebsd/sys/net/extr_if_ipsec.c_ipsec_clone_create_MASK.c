
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ipsec_softc {struct ifnet* ifp; int fibnum; } ;
struct ifnet {int if_flags; int if_output; int if_qflush; int if_transmit; int if_ioctl; int if_mtu; scalar_t__ if_addrlen; struct ipsec_softc* if_softc; } ;
struct if_clone {int dummy; } ;
typedef int caddr_t ;
struct TYPE_4__ {TYPE_1__* td_proc; } ;
struct TYPE_3__ {int p_fibnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ifnet*,int ,int) ;
 TYPE_2__* VAR_8 ;
 struct ifnet* FUNC_1 (int ) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct ipsec_softc* FUNC_4 (int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct if_clone *VAR_14, int VAR_15, caddr_t VAR_16)
{
 struct ipsec_softc *VAR_17;
 struct ifnet *VAR_18;

 VAR_17 = FUNC_4(sizeof(*VAR_17), VAR_5, VAR_6 | VAR_7);
 VAR_17->fibnum = VAR_8->td_proc->p_fibnum;
 VAR_17->ifp = VAR_18 = FUNC_1(VAR_3);
 VAR_18->if_softc = VAR_17;
 FUNC_3(VAR_18, VAR_13, VAR_15);

 VAR_18->if_addrlen = 0;
 VAR_18->if_mtu = VAR_4;
 VAR_18->if_flags = VAR_2 | VAR_1;
 VAR_18->if_ioctl = VAR_9;
 VAR_18->if_transmit = VAR_12;
 VAR_18->if_qflush = VAR_11;
 VAR_18->if_output = VAR_10;
 FUNC_2(VAR_18);
 FUNC_0(VAR_18, VAR_0, sizeof(uint32_t));

 return (0);
}
