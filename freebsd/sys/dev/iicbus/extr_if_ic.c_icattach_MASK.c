
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifq_maxlen; } ;
struct ifnet {int if_flags; TYPE_1__ if_snd; scalar_t__ if_addrlen; scalar_t__ if_hdrlen; int if_output; int if_ioctl; struct ic_softc* if_softc; } ;
struct ic_softc {int ic_dev; int ic_addr; int ic_lock; struct ifnet* ic_ifp; } ;
typedef int device_t ;


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
 int FUNC_0 (struct ifnet*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ic_softc*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 struct ifnet* FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*,int ,int ) ;
 int VAR_13 ;
 int FUNC_9 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_14)
{
 struct ic_softc *VAR_15 = (struct ic_softc *)FUNC_3(VAR_14);
 struct ifnet *VAR_16;

 VAR_16 = VAR_15->ic_ifp = FUNC_6(VAR_7);
 if (VAR_16 == ((void*)0))
  return (VAR_1);

 FUNC_9(&VAR_15->ic_lock, FUNC_2(VAR_14), VAR_9,
     VAR_8);
 VAR_15->ic_addr = VAR_10;
 VAR_15->ic_dev = VAR_14;

 VAR_16->if_softc = VAR_15;
 FUNC_8(VAR_16, FUNC_1(VAR_14), FUNC_4(VAR_14));
 VAR_16->if_flags = VAR_6 | VAR_5 | VAR_4;
 VAR_16->if_ioctl = VAR_11;
 VAR_16->if_output = VAR_12;
 VAR_16->if_hdrlen = 0;
 VAR_16->if_addrlen = 0;
 VAR_16->if_snd.ifq_maxlen = VAR_13;

 FUNC_5(VAR_15, VAR_3);

 FUNC_7(VAR_16);

 FUNC_0(VAR_16, VAR_0, VAR_2);

 return (0);
}
