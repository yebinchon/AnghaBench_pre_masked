
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ste_softc {struct ifnet* ste_ifp; } ;
struct ifnet {int if_flags; } ;


 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (struct ste_softc*,int ,int) ;
 int FUNC_2 (struct ste_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ste_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct ifnet*,int ,int*) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_5(struct ste_softc *VAR_14)
{
 struct ifnet *VAR_15;
 uint32_t VAR_16[2] = { 0, 0 };
 uint8_t VAR_17;

 FUNC_3(VAR_14);

 VAR_15 = VAR_14->ste_ifp;
 VAR_17 = FUNC_0(VAR_14, VAR_12);
 VAR_17 |= VAR_11;
 VAR_17 &= ~(VAR_7 | VAR_9 |
     VAR_8 | VAR_10);
 if (VAR_15->if_flags & VAR_1)
  VAR_17 |= VAR_8;
 if ((VAR_15->if_flags & (VAR_0 | VAR_2)) != 0) {
  if ((VAR_15->if_flags & VAR_0) != 0)
   VAR_17 |= VAR_7;
  if ((VAR_15->if_flags & VAR_2) != 0)
   VAR_17 |= VAR_10;
  goto chipit;
 }

 VAR_17 |= VAR_9;

 FUNC_4(VAR_15, VAR_13, VAR_16);

chipit:
 FUNC_2(VAR_14, VAR_3, VAR_16[0] & 0xFFFF);
 FUNC_2(VAR_14, VAR_4, (VAR_16[0] >> 16) & 0xFFFF);
 FUNC_2(VAR_14, VAR_5, VAR_16[1] & 0xFFFF);
 FUNC_2(VAR_14, VAR_6, (VAR_16[1] >> 16) & 0xFFFF);
 FUNC_1(VAR_14, VAR_12, VAR_17);
 FUNC_0(VAR_14, VAR_12);
}
