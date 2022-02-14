
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct msk_softc {int dummy; } ;
struct msk_if_softc {int msk_port; struct ifnet* msk_ifp; struct msk_softc* msk_softc; } ;
struct ifnet {int if_flags; } ;
typedef int mchash ;


 int FUNC_0 (struct msk_softc*,int ,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct msk_if_softc*) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (struct ifnet*,int ,int*) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_5(struct msk_if_softc *VAR_10)
{
 struct msk_softc *VAR_11;
 struct ifnet *VAR_12;
 uint32_t VAR_13[2];
 uint16_t VAR_14;

 VAR_11 = VAR_10->msk_softc;

 FUNC_2(VAR_10);

 VAR_12 = VAR_10->msk_ifp;

 FUNC_3(VAR_13, sizeof(VAR_13));
 VAR_14 = FUNC_0(VAR_11, VAR_10->msk_port, VAR_6);
 if ((VAR_12->if_flags & VAR_8) != 0)
  VAR_14 &= ~(VAR_5 | VAR_4);
 else if ((VAR_12->if_flags & VAR_7) != 0) {
  VAR_14 |= VAR_5 | VAR_4;
  VAR_13[0] = 0xffff;
  VAR_13[1] = 0xffff;
 } else {
  VAR_14 |= VAR_5;
  FUNC_4(VAR_12, VAR_9, VAR_13);
  if (VAR_13[0] != 0 || VAR_13[1] != 0)
   VAR_14 |= VAR_4;
 }

 FUNC_1(VAR_11, VAR_10->msk_port, VAR_0,
     VAR_13[0] & 0xffff);
 FUNC_1(VAR_11, VAR_10->msk_port, VAR_1,
     (VAR_13[0] >> 16) & 0xffff);
 FUNC_1(VAR_11, VAR_10->msk_port, VAR_2,
     VAR_13[1] & 0xffff);
 FUNC_1(VAR_11, VAR_10->msk_port, VAR_3,
     (VAR_13[1] >> 16) & 0xffff);
 FUNC_1(VAR_11, VAR_10->msk_port, VAR_6, VAR_14);
}
