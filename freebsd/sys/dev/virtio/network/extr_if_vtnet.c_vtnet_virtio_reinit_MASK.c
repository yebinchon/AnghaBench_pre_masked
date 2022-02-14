
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtnet_softc {int vtnet_features; struct ifnet* vtnet_ifp; int vtnet_dev; } ;
struct ifnet {int if_capabilities; int if_capenable; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct vtnet_softc *VAR_7)
{
 device_t VAR_8;
 struct ifnet *VAR_9;
 uint64_t VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = VAR_7->vtnet_dev;
 VAR_9 = VAR_7->vtnet_ifp;
 VAR_10 = VAR_7->vtnet_features;

 VAR_11 = 0;
 if (VAR_9->if_capabilities & VAR_11) {





  if ((VAR_9->if_capenable & VAR_11) != VAR_11)
   VAR_10 &= ~VAR_5;
 }

 if (VAR_9->if_capabilities & VAR_0) {
  if ((VAR_9->if_capenable & VAR_0) == 0)
   VAR_10 &= ~VAR_6;
 }

 if (VAR_9->if_capabilities & VAR_3) {
  if ((VAR_9->if_capenable & VAR_3) == 0)
   VAR_10 &= ~VAR_4;
 }

 VAR_12 = FUNC_1(VAR_8, VAR_10);
 if (VAR_12)
  FUNC_0(VAR_8, "virtio reinit error %d\n", VAR_12);

 return (VAR_12);
}
