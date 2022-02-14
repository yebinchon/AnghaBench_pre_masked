
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_8__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_baudrate; int if_xname; TYPE_5__ if_snd; scalar_t__ if_hdrlen; scalar_t__ if_addrlen; int if_type; int if_mtu; int if_ioctl; int if_start; int if_output; TYPE_1__* if_softc; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_7__ {int unit; int node; struct ifnet* ifp; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 struct ifnet* FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*,int ,int ) ;
 int VAR_14 ;
 int FUNC_9 (int ,char*,int ) ;
 TYPE_1__* FUNC_10 (int,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,char*) ;

__attribute__((used)) static int
FUNC_13(node_p VAR_18)
{
 struct ifnet *VAR_19;
 priv_p VAR_20;


 VAR_20 = FUNC_10(sizeof(*VAR_20), VAR_8, VAR_9 | VAR_10);
 VAR_19 = FUNC_6(VAR_6);
 if (VAR_19 == ((void*)0)) {
  FUNC_5(VAR_20, VAR_8);
  return (VAR_1);
 }

 FUNC_12(&VAR_20->lock, "ng_iface private rmlock");


 VAR_19->if_softc = VAR_20;
 VAR_20->ifp = VAR_19;


 VAR_20->unit = FUNC_3(VAR_13);


 FUNC_2(VAR_18, VAR_20);
 VAR_20->node = VAR_18;


 FUNC_8(VAR_19, VAR_11, VAR_20->unit);
 VAR_19->if_output = VAR_16;
 VAR_19->if_start = VAR_17;
 VAR_19->if_ioctl = VAR_15;
 VAR_19->if_mtu = VAR_12;
 VAR_19->if_flags = (VAR_5|VAR_4|VAR_3|VAR_2);
 VAR_19->if_type = VAR_6;
 VAR_19->if_addrlen = 0;
 VAR_19->if_hdrlen = 0;
 VAR_19->if_baudrate = 64000;
 FUNC_0(&VAR_19->if_snd, VAR_14);
 VAR_19->if_snd.ifq_drv_maxlen = VAR_14;
 FUNC_1(&VAR_19->if_snd);


 if (FUNC_11(VAR_18, VAR_19->if_xname) != 0)
  FUNC_9(VAR_7, "%s: can't acquire netgraph name\n",
      VAR_19->if_xname);


 FUNC_7(VAR_19);
 FUNC_4(VAR_19, VAR_0, sizeof(u_int32_t));


 return (0);
}
