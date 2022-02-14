
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int ifq_maxlen; } ;
struct ifnet {int if_flags; TYPE_1__ if_snd; scalar_t__ if_addrlen; scalar_t__ if_hdrlen; int if_output; int if_ioctl; int if_drv_flags; int if_mtu; struct disc_softc* if_softc; } ;
struct if_clone {int dummy; } ;
struct disc_softc {struct ifnet* sc_ifp; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ifnet*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct disc_softc*,int ) ;
 struct ifnet* FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 struct disc_softc* FUNC_5 (int,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct if_clone *VAR_13, int VAR_14, caddr_t VAR_15)
{
 struct ifnet *VAR_16;
 struct disc_softc *VAR_17;

 VAR_17 = FUNC_5(sizeof(struct disc_softc), VAR_7, VAR_8 | VAR_9);
 VAR_16 = VAR_17->sc_ifp = FUNC_2(VAR_6);
 if (VAR_16 == ((void*)0)) {
  FUNC_1(VAR_17, VAR_7);
  return (VAR_2);
 }

 VAR_16->if_softc = VAR_17;
 FUNC_4(VAR_16, VAR_11, VAR_14);
 VAR_16->if_mtu = VAR_1;
 VAR_16->if_flags = VAR_4 | VAR_5;
 VAR_16->if_drv_flags = VAR_3;
 VAR_16->if_ioctl = VAR_10;
 VAR_16->if_output = VAR_12;
 VAR_16->if_hdrlen = 0;
 VAR_16->if_addrlen = 0;
 VAR_16->if_snd.ifq_maxlen = 20;
 FUNC_3(VAR_16);
 FUNC_0(VAR_16, VAR_0, sizeof(u_int32_t));

 return (0);
}
