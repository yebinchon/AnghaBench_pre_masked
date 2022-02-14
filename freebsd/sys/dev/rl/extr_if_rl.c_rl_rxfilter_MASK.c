
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rl_softc {struct ifnet* rl_ifp; } ;
struct ifnet {int if_flags; } ;


 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rl_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct ifnet*,int ,int*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_4(struct rl_softc *VAR_11)
{
 struct ifnet *VAR_12 = VAR_11->rl_ifp;
 uint32_t VAR_13[2] = { 0, 0 };
 uint32_t VAR_14;

 FUNC_2(VAR_11);

 VAR_14 = FUNC_0(VAR_11, VAR_5);
 VAR_14 &= ~(VAR_6 | VAR_7 |
     VAR_9);

 VAR_14 |= VAR_8;

 if (VAR_12->if_flags & VAR_1)
  VAR_14 |= VAR_7;
 if (VAR_12->if_flags & VAR_0 || VAR_12->if_flags & VAR_2) {
  VAR_14 |= VAR_9;
  if (VAR_12->if_flags & VAR_2)
   VAR_14 |= VAR_6;
  VAR_13[0] = 0xFFFFFFFF;
  VAR_13[1] = 0xFFFFFFFF;
 } else {

  FUNC_3(VAR_12, VAR_10, VAR_13);
  if (VAR_13[0] != 0 || VAR_13[1] != 0)
   VAR_14 |= VAR_9;
 }

 FUNC_1(VAR_11, VAR_3, VAR_13[0]);
 FUNC_1(VAR_11, VAR_4, VAR_13[1]);
 FUNC_1(VAR_11, VAR_5, VAR_14);
}
