
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_adapter {scalar_t__ num_tx_rings; scalar_t__ num_rx_rings; int na_flags; int num_rx_desc; int num_tx_desc; int * nm_dtor; int nm_register; struct netmap_adapter* name; struct ifnet* ifp; } ;
struct netmap_hw_adapter {struct netmap_adapter up; int nm_hw_register; } ;
struct ifnet {int if_xname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifnet*,struct netmap_adapter*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*,char*,struct ifnet*,int ,struct netmap_hw_adapter*,int ) ;
 int FUNC_3 (struct netmap_adapter*) ;
 scalar_t__ FUNC_4 (struct netmap_adapter*) ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct netmap_hw_adapter*) ;
 struct netmap_hw_adapter* FUNC_6 (size_t) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct netmap_adapter*,int ,int) ;

int
FUNC_10(struct netmap_adapter *VAR_9, size_t VAR_10, int VAR_11)
{
 struct netmap_hw_adapter *VAR_12 = ((void*)0);
 struct ifnet *VAR_13 = ((void*)0);

 if (VAR_10 < sizeof(struct netmap_hw_adapter)) {
  if (VAR_6 & VAR_5)
   FUNC_8("Invalid netmap adapter size %d", (int)VAR_10);
  return VAR_1;
 }

 if (VAR_9 == ((void*)0) || VAR_9->ifp == ((void*)0)) {
  if (VAR_6 & VAR_5)
   FUNC_8("either arg or arg->ifp is NULL");
  return VAR_1;
 }

 if (VAR_9->num_tx_rings == 0 || VAR_9->num_rx_rings == 0) {
  if (VAR_6 & VAR_5)
   FUNC_8("%s: invalid rings tx %d rx %d",
    VAR_9->name, VAR_9->num_tx_rings, VAR_9->num_rx_rings);
  return VAR_1;
 }

 VAR_13 = VAR_9->ifp;
 if (FUNC_1(VAR_13)) {




  FUNC_8("Error: netmap adapter hook is busy");
  return VAR_0;
 }

 VAR_12 = FUNC_6(VAR_10);
 if (VAR_12 == ((void*)0))
  goto fail;
 VAR_12->up = *VAR_9;
 VAR_12->up.na_flags |= VAR_3 | VAR_4;
 FUNC_9(VAR_12->up.name, VAR_13->if_xname, sizeof(VAR_12->up.name));
 if (VAR_11) {
  VAR_12->nm_hw_register = VAR_12->up.nm_register;
  VAR_12->up.nm_register = VAR_8;
 }
 if (FUNC_4(&VAR_12->up)) {
  FUNC_5(VAR_12);
  goto fail;
 }
 FUNC_3(&VAR_12->up);

 FUNC_0(VAR_13, &VAR_12->up);

 FUNC_7(VAR_13);

 if (VAR_9->nm_dtor == ((void*)0)) {
  VAR_12->up.nm_dtor = VAR_7;
 }

 FUNC_2(VAR_13, "netmap queues/slots: TX %d/%d, RX %d/%d\n",
     VAR_12->up.num_tx_rings, VAR_12->up.num_tx_desc,
     VAR_12->up.num_rx_rings, VAR_12->up.num_rx_desc);
 return 0;

fail:
 FUNC_8("fail, arg %p ifp %p na %p", VAR_9, VAR_13, VAR_12);
 return (VAR_12 ? VAR_1 : VAR_2);
}
