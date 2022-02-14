
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rtl8366rb_softc {int numphys; int* vid; int * ifp; int * miibus; scalar_t__ phy4cpu; } ;
struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct TYPE_3__ {int es_port; int es_pvid; int es_ifr; } ;
typedef TYPE_1__ etherswitch_port_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,struct ifmedia*,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, etherswitch_port_t *VAR_7)
{
 struct rtl8366rb_softc *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 struct ifmedia *VAR_12;
 struct mii_data *VAR_13;
 int VAR_14;

 VAR_8 = FUNC_2(VAR_6);

 if (VAR_7->es_port < 0 || VAR_7->es_port >= (VAR_8->numphys + 1))
  return (VAR_0);
 VAR_11 = -1;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if ((VAR_8->vid[VAR_9] & VAR_1) == VAR_7->es_pvid) {
   VAR_11 = VAR_9;
   break;
  }
 }
 if (VAR_11 == -1)
  return (VAR_0);
 if (VAR_8->phy4cpu && VAR_7->es_port == VAR_8->numphys) {
  VAR_14 = VAR_7->es_port + 1;
 } else {
  VAR_14 = VAR_7->es_port;
 }
 VAR_10 = FUNC_4(VAR_6, FUNC_0(VAR_14),
     FUNC_1(VAR_14, VAR_3),
     FUNC_1(VAR_14, VAR_11), VAR_4);
 if (VAR_10)
  return (VAR_10);

 if (VAR_7->es_port == VAR_8->numphys)
  return (0);
 VAR_13 = FUNC_2(VAR_8->miibus[VAR_7->es_port]);
 VAR_12 = &VAR_13->mii_media;
 VAR_10 = FUNC_3(VAR_8->ifp[VAR_7->es_port], &VAR_7->es_ifr, VAR_12, VAR_5);
 return (VAR_10);
}
