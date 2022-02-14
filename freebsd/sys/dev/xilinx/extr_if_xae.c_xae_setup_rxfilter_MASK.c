
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xae_softc {int* macaddr; struct ifnet* ifp; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xae_softc*,int ) ;
 int FUNC_1 (struct xae_softc*,int ,int) ;
 int FUNC_2 (struct xae_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ifnet*,int ,struct xae_softc*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(struct xae_softc *VAR_7)
{
 struct ifnet *VAR_8;
 uint32_t VAR_9;

 FUNC_2(VAR_7);

 VAR_8 = VAR_7->ifp;




 if ((VAR_8->if_flags & (VAR_1 | VAR_2)) != 0) {
  VAR_9 = FUNC_0(VAR_7, VAR_3);
  VAR_9 |= VAR_0;
  FUNC_1(VAR_7, VAR_3, VAR_9);
 } else {
  VAR_9 = FUNC_0(VAR_7, VAR_3);
  VAR_9 &= ~VAR_0;
  FUNC_1(VAR_7, VAR_3, VAR_9);

  FUNC_3(VAR_8, VAR_6, VAR_7);
 }




 VAR_9 = VAR_7->macaddr[0];
 VAR_9 |= (VAR_7->macaddr[1] << 8);
 VAR_9 |= (VAR_7->macaddr[2] << 16);
 VAR_9 |= (VAR_7->macaddr[3] << 24);
 FUNC_1(VAR_7, VAR_4, VAR_9);

 VAR_9 = VAR_7->macaddr[4];
 VAR_9 |= (VAR_7->macaddr[5] << 8);
 FUNC_1(VAR_7, VAR_5, VAR_9);
}
