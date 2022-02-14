
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_info {int port_id; int media; int hw_addr; struct ifnet* ifp; int link_check_task; int link_check_ch; int lockbuf; struct adapter* adapter; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_hwassist; int if_mtu; int if_get_counter; int if_qflush; int if_transmit; int if_ioctl; struct port_info* if_softc; int if_init; } ;
struct TYPE_2__ {int nports; } ;
struct adapter {TYPE_1__ params; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ifnet*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct port_info*,int ) ;
 int VAR_18 ;
 int FUNC_2 (int *,int ,int ,struct port_info*) ;
 int FUNC_3 (int *,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct port_info*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (struct port_info*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct port_info* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct ifnet*,int ) ;
 struct ifnet* FUNC_12 (int ) ;
 int FUNC_13 (struct ifnet*,int ,int) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_15 (struct adapter*) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (int ,int ,char*,int,int) ;
 int FUNC_18 (struct port_info*) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_28)
{
 struct port_info *VAR_29;
 struct ifnet *VAR_30;
 int VAR_31;
 struct adapter *VAR_32;

 VAR_29 = FUNC_8(VAR_28);
 VAR_32 = VAR_29->adapter;
 FUNC_17(VAR_29->lockbuf, VAR_18, "cxgb port lock %d:%d",
     FUNC_9(FUNC_7(VAR_28)), VAR_29->port_id);
 FUNC_1(VAR_29, VAR_29->lockbuf);

 FUNC_3(&VAR_29->link_check_ch, 1);
 FUNC_2(&VAR_29->link_check_task, 0, VAR_19, VAR_29);


 VAR_30 = VAR_29->ifp = FUNC_12(VAR_17);
 if (VAR_30 == ((void*)0)) {
  FUNC_10(VAR_28, "Cannot allocate ifnet\n");
  return (VAR_8);
 }

 FUNC_13(VAR_30, FUNC_6(VAR_28), FUNC_9(VAR_28));
 VAR_30->if_init = VAR_22;
 VAR_30->if_softc = VAR_29;
 VAR_30->if_flags = VAR_13 | VAR_15 | VAR_14;
 VAR_30->if_ioctl = VAR_23;
 VAR_30->if_transmit = VAR_27;
 VAR_30->if_qflush = VAR_26;
 VAR_30->if_get_counter = VAR_21;

 VAR_30->if_capabilities = VAR_6;




 VAR_30->if_capenable = VAR_7;
 VAR_30->if_hwassist = VAR_1 | VAR_4 | VAR_0 | VAR_3 |
     VAR_5 | VAR_2;




 if (VAR_32->params.nports > 2) {
  VAR_30->if_capabilities &= ~(VAR_11 | VAR_12);
  VAR_30->if_capenable &= ~(VAR_11 | VAR_12);
  VAR_30->if_hwassist &= ~VAR_3;
 }

 FUNC_11(VAR_30, VAR_29->hw_addr);


 FUNC_0(VAR_30, VAR_20);





 if ((VAR_31 = FUNC_5(VAR_29)) != 0) {
  FUNC_16("makedev failed %d\n", VAR_31);
  return (VAR_31);
 }


 FUNC_14(&VAR_29->media, VAR_16, VAR_24,
     VAR_25);
 FUNC_4(VAR_29);

 FUNC_18(VAR_29);

 return (VAR_31);
}
