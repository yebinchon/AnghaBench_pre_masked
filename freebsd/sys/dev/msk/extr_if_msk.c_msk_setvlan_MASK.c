
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_softc {int dummy; } ;
struct msk_if_softc {int msk_port; struct msk_softc* msk_softc; } ;
struct ifnet {int if_capenable; } ;


 int FUNC_0 (struct msk_softc*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct msk_if_softc *VAR_7, struct ifnet *VAR_8)
{
 struct msk_softc *VAR_9;

 VAR_9 = VAR_7->msk_softc;
 if ((VAR_8->if_capenable & VAR_0) != 0) {
  FUNC_0(VAR_9, FUNC_1(VAR_7->msk_port, VAR_1),
      VAR_3);
  FUNC_0(VAR_9, FUNC_1(VAR_7->msk_port, VAR_4),
      VAR_6);
 } else {
  FUNC_0(VAR_9, FUNC_1(VAR_7->msk_port, VAR_1),
      VAR_2);
  FUNC_0(VAR_9, FUNC_1(VAR_7->msk_port, VAR_4),
      VAR_5);
 }
}
