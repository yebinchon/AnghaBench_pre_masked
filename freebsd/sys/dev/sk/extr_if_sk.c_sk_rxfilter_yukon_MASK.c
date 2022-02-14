
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sk_if_softc {struct ifnet* sk_ifp; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_if_softc*) ;
 int FUNC_1 (struct sk_if_softc*,int ) ;
 int FUNC_2 (struct sk_if_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct ifnet*,int ,int*) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_4(struct sk_if_softc *VAR_10)
{
 struct ifnet *VAR_11;
 uint32_t VAR_12[2] = { 0, 0 }, VAR_13;

 FUNC_0(VAR_10);

 VAR_11 = VAR_10->sk_ifp;
 VAR_13 = FUNC_1(VAR_10, VAR_6);
 if (VAR_11->if_flags & VAR_1)
  VAR_13 &= ~(VAR_8 | VAR_7);
 else if (VAR_11->if_flags & VAR_0) {
  VAR_13 |= VAR_8 | VAR_7;
  VAR_12[0] = 0xFFFFFFFF;
  VAR_12[1] = 0xFFFFFFFF;
 } else {
  VAR_13 |= VAR_8;
  FUNC_3(VAR_11, VAR_9, VAR_12);
  if (VAR_12[0] != 0 || VAR_12[1] != 0)
   VAR_13 |= VAR_7;
 }

 FUNC_2(VAR_10, VAR_2, VAR_12[0] & 0xffff);
 FUNC_2(VAR_10, VAR_3, (VAR_12[0] >> 16) & 0xffff);
 FUNC_2(VAR_10, VAR_4, VAR_12[1] & 0xffff);
 FUNC_2(VAR_10, VAR_5, (VAR_12[1] >> 16) & 0xffff);
 FUNC_2(VAR_10, VAR_6, VAR_13);
}
