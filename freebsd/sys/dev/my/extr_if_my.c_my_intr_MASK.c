
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct my_softc {struct ifnet* my_ifp; } ;
struct ifnet {int if_flags; int if_snd; } ;


 int FUNC_0 (struct my_softc*,int ) ;
 int FUNC_1 (struct my_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct my_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct my_softc*) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct my_softc*) ;
 int FUNC_7 (struct my_softc*) ;
 int FUNC_8 (struct my_softc*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct my_softc*) ;
 int FUNC_11 (struct my_softc*) ;
 int FUNC_12 (struct my_softc*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_12)
{
 struct my_softc *VAR_13;
 struct ifnet *VAR_14;
 u_int32_t VAR_15;

 VAR_13 = VAR_12;
 FUNC_3(VAR_13);
 VAR_14 = VAR_13->my_ifp;
 if (!(VAR_14->if_flags & VAR_1)) {
  FUNC_4(VAR_13);
  return;
 }

 FUNC_1(VAR_13, VAR_4, 0x00000000);

 for (;;) {
  VAR_15 = FUNC_0(VAR_13, VAR_6);
  VAR_15 &= VAR_5;
  if (VAR_15)
   FUNC_1(VAR_13, VAR_6, VAR_15);
  else
   break;

  if (VAR_15 & VAR_8)
   FUNC_8(VAR_13);

  if ((VAR_15 & VAR_7) || (VAR_15 & VAR_9)) {

   FUNC_5(VAR_14, VAR_0, 1);





  }
  if (VAR_15 & VAR_11)
   FUNC_12(VAR_13);
  if (VAR_15 & VAR_2)
   FUNC_12(VAR_13);
  if (VAR_15 & VAR_10)
   FUNC_11(VAR_13);
 }


 FUNC_1(VAR_13, VAR_4, VAR_5);
 if (!FUNC_2(&VAR_14->if_snd))
  FUNC_9(VAR_14);
 FUNC_4(VAR_13);
 return;
}
