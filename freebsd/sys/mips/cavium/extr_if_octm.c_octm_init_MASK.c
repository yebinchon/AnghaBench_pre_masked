
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_int8_t ;
struct octm_softc {int sc_port; struct ifnet* sc_ifp; } ;
struct ifnet {int if_drv_flags; int if_flags; } ;
typedef int cvmx_mgmt_port_netdevice_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_7)
{
 struct ifnet *VAR_8;
 struct octm_softc *VAR_9;
 cvmx_mgmt_port_netdevice_flags_t VAR_10;
 uint64_t VAR_11;

 VAR_9 = VAR_7;
 VAR_8 = VAR_9->sc_ifp;

 if ((VAR_8->if_drv_flags & VAR_4) != 0) {
  FUNC_1(VAR_9->sc_port);

  VAR_8->if_drv_flags &= ~VAR_4;
 }







 VAR_11 = 0;
 FUNC_5((u_int8_t *)&VAR_11 + 2, FUNC_0(VAR_8), 6);
 FUNC_3(VAR_9->sc_port, VAR_11);





 VAR_10 = 0;
 if ((VAR_8->if_flags & VAR_2) != 0)
  VAR_10 |= VAR_0;
 if ((VAR_8->if_flags & VAR_5) != 0)
  VAR_10 |= VAR_1;
 FUNC_4(VAR_9->sc_port, VAR_10);



 if ((VAR_8->if_flags & VAR_6) != 0)
  FUNC_2(VAR_9->sc_port);

 VAR_8->if_drv_flags |= VAR_4;
 VAR_8->if_drv_flags &= ~VAR_3;
}
