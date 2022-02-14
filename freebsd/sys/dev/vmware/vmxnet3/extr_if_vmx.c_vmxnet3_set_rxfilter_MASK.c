
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vmxnet3_softc {struct vmxnet3_driver_shared* vmx_ds; struct ifnet* vmx_ifp; } ;
struct vmxnet3_driver_shared {int mcast_tablelen; int rxmode; } ;
struct ifnet {int dummy; } ;


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
 int VAR_10 ;
 int FUNC_0 (struct ifnet*,int ,struct vmxnet3_softc*) ;
 int VAR_11 ;
 int FUNC_1 (struct vmxnet3_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct vmxnet3_softc *VAR_12, int VAR_13)
{
 struct ifnet *VAR_14;
 struct vmxnet3_driver_shared *VAR_15;
 u_int VAR_16;

 VAR_14 = VAR_12->vmx_ifp;
 VAR_15 = VAR_12->vmx_ds;

 VAR_16 = VAR_10 | VAR_7;
 if (VAR_13 & VAR_2)
  VAR_16 |= VAR_9;
 if (VAR_13 & VAR_1)
  VAR_16 |= VAR_6;
 else {
  int VAR_17;

  VAR_17 = FUNC_0(VAR_14, VAR_11, VAR_12);
  if (VAR_17 >= VAR_5) {
   VAR_17 = 0;
   VAR_16 |= VAR_6;
  } else if (VAR_17 > 0)
   VAR_16 |= VAR_8;
  VAR_15->mcast_tablelen = VAR_17 * VAR_0;
 }

 VAR_15->rxmode = VAR_16;

 FUNC_1(VAR_12, VAR_3);
 FUNC_1(VAR_12, VAR_4);
}
