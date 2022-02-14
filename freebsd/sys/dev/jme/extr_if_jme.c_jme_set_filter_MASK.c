
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jme_softc {struct ifnet* jme_ifp; } ;
struct ifnet {int if_flags; } ;
typedef int mchash ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct jme_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (struct ifnet*,int ,int**) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_5(struct jme_softc *VAR_12)
{
 struct ifnet *VAR_13;
 uint32_t VAR_14[2];
 uint32_t VAR_15;

 FUNC_2(VAR_12);

 VAR_13 = VAR_12->jme_ifp;

 VAR_15 = FUNC_0(VAR_12, VAR_5);
 VAR_15 &= ~ (VAR_7 | VAR_9 | VAR_8 |
     VAR_6);

 VAR_15 |= VAR_10;
 if ((VAR_13->if_flags & VAR_1) != 0)
  VAR_15 |= VAR_7;
 if ((VAR_13->if_flags & (VAR_2 | VAR_0)) != 0) {
  if ((VAR_13->if_flags & VAR_2) != 0)
   VAR_15 |= VAR_9;
  if ((VAR_13->if_flags & VAR_0) != 0)
   VAR_15 |= VAR_6;
  FUNC_1(VAR_12, VAR_3, 0xFFFFFFFF);
  FUNC_1(VAR_12, VAR_4, 0xFFFFFFFF);
  FUNC_1(VAR_12, VAR_5, VAR_15);
  return;
 }
 VAR_15 |= VAR_8;
 FUNC_3(VAR_14, sizeof(VAR_14));
 FUNC_4(VAR_13, VAR_11, &VAR_14);

 FUNC_1(VAR_12, VAR_3, VAR_14[0]);
 FUNC_1(VAR_12, VAR_4, VAR_14[1]);
 FUNC_1(VAR_12, VAR_5, VAR_15);
}
