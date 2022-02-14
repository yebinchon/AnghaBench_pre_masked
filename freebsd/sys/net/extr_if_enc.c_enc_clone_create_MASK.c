
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct enc_softc* if_softc; int if_output; int if_ioctl; int if_mtu; } ;
struct if_clone {int dummy; } ;
struct enchdr {int dummy; } ;
struct enc_softc {struct ifnet* sc_ifp; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct enc_softc* VAR_8 ;
 int FUNC_0 (struct ifnet*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct enc_softc*,int ) ;
 struct ifnet* FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 struct enc_softc* FUNC_6 (int,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct if_clone *VAR_12, int VAR_13, caddr_t VAR_14)
{
 struct ifnet *VAR_15;
 struct enc_softc *VAR_16;

 VAR_16 = FUNC_6(sizeof(struct enc_softc), VAR_5,
     VAR_6 | VAR_7);
 VAR_15 = VAR_16->sc_ifp = FUNC_2(VAR_4);
 if (VAR_15 == ((void*)0)) {
  FUNC_1(VAR_16, VAR_5);
  return (VAR_3);
 }
 if (VAR_8 != ((void*)0)) {
  FUNC_4(VAR_15);
  FUNC_1(VAR_16, VAR_5);
  return (VAR_1);
 }
 VAR_8 = VAR_16;
 FUNC_5(VAR_15, VAR_11, VAR_13);
 VAR_15->if_mtu = VAR_2;
 VAR_15->if_ioctl = VAR_9;
 VAR_15->if_output = VAR_10;
 VAR_15->if_softc = VAR_16;
 FUNC_3(VAR_15);
 FUNC_0(VAR_15, VAR_0, sizeof(struct enchdr));
 return (0);
}
