
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_softc {scalar_t__ msk_hw_id; scalar_t__ msk_hw_rev; } ;
struct msk_if_softc {int msk_port; struct msk_softc* msk_softc; struct ifnet* msk_ifp; } ;
struct ifnet {scalar_t__ if_mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct msk_softc*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2(struct msk_if_softc *VAR_10)
{
 struct msk_softc *VAR_11;
 struct ifnet *VAR_12;

 VAR_12 = VAR_10->msk_ifp;
 VAR_11 = VAR_10->msk_softc;
 if ((VAR_11->msk_hw_id == VAR_0 &&
     VAR_11->msk_hw_rev != VAR_2) ||
     VAR_11->msk_hw_id >= VAR_1) {
  FUNC_0(VAR_11, FUNC_1(VAR_10->msk_port, VAR_7),
      VAR_9);
 } else {
  if (VAR_12->if_mtu > VAR_3) {

   FUNC_0(VAR_11,
       FUNC_1(VAR_10->msk_port, VAR_6),
       VAR_5 << 16 | VAR_4);

   FUNC_0(VAR_11, FUNC_1(VAR_10->msk_port, VAR_7),
       VAR_8);
  } else {
   FUNC_0(VAR_11, FUNC_1(VAR_10->msk_port, VAR_7),
       VAR_9);
  }
 }
}
