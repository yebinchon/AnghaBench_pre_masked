
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct my_softc {struct ifnet* my_ifp; } ;
struct ifnet {int if_flags; } ;


 int FUNC_0 (struct my_softc*,int ) ;
 int FUNC_1 (struct my_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct my_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct ifnet*,int ,int*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(struct my_softc * VAR_7)
{
 struct ifnet *VAR_8;
 u_int32_t VAR_9[2] = {0, 0};
 u_int32_t VAR_10;

 FUNC_2(VAR_7);

 VAR_8 = VAR_7->my_ifp;

 VAR_10 = FUNC_0(VAR_7, VAR_5);

 if (VAR_8->if_flags & VAR_0 || VAR_8->if_flags & VAR_1) {
  VAR_10 |= VAR_2;
  FUNC_1(VAR_7, VAR_5, VAR_10);
  FUNC_1(VAR_7, VAR_3, 0xFFFFFFFF);
  FUNC_1(VAR_7, VAR_4, 0xFFFFFFFF);

  return;
 }

 FUNC_1(VAR_7, VAR_3, 0);
 FUNC_1(VAR_7, VAR_4, 0);


 if (FUNC_3(VAR_8, VAR_6, VAR_9) > 0)
  VAR_10 |= VAR_2;
 else
  VAR_10 &= ~VAR_2;
 FUNC_1(VAR_7, VAR_3, VAR_9[0]);
 FUNC_1(VAR_7, VAR_4, VAR_9[1]);
 FUNC_1(VAR_7, VAR_5, VAR_10);
}
