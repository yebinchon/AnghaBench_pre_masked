
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp_data {int * sc_ifbuf; TYPE_1__* sc_ifp; int sc_dev; } ;
struct ifnet {int if_drv_flags; struct lp_data* if_softc; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ if_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_9)
{
 struct lp_data *VAR_10 = VAR_9->if_softc;
 device_t VAR_11 = VAR_10->sc_dev;
 device_t VAR_12 = FUNC_0(VAR_11);
 int VAR_13;

 FUNC_3(VAR_12);
 VAR_13 = FUNC_5(VAR_12, VAR_11, VAR_8);
 if (VAR_13)
  return (VAR_13);


 FUNC_6(VAR_12, VAR_7);

 if (FUNC_1()) {
  FUNC_4(VAR_12, VAR_11);
  return (VAR_0);
 }

 VAR_10->sc_ifbuf = FUNC_2(VAR_10->sc_ifp->if_mtu + VAR_4,
     VAR_5, VAR_6);
 if (VAR_10->sc_ifbuf == ((void*)0)) {
  FUNC_4(VAR_12, VAR_11);
  return (VAR_0);
 }

 FUNC_7(VAR_12, VAR_3);

 VAR_9->if_drv_flags |= VAR_2;
 VAR_9->if_drv_flags &= ~VAR_1;
 return (0);
}
