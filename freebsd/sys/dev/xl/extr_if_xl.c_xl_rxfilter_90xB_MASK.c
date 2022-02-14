
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct xl_softc {struct ifnet* xl_ifp; } ;
struct ifnet {int if_flags; } ;


 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct xl_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (struct ifnet*,int ,struct xl_softc*) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_5(struct xl_softc *VAR_14)
{
 struct ifnet *VAR_15;
 int VAR_16;
 u_int8_t VAR_17;

 FUNC_2(VAR_14);

 VAR_15 = VAR_14->xl_ifp;

 FUNC_3(5);
 VAR_17 = FUNC_0(VAR_14, VAR_12);
 VAR_17 &= ~(VAR_7 | VAR_8 |
     VAR_9 | VAR_10 |
     VAR_11);


 VAR_17 |= VAR_10;

 if (VAR_15->if_flags & VAR_1)
  VAR_17 |= VAR_9;


 if (VAR_15->if_flags & (VAR_2 | VAR_0)) {
  if (VAR_15->if_flags & VAR_2)
   VAR_17 |= VAR_7;
  if (VAR_15->if_flags & VAR_0)
   VAR_17 |= VAR_8;
 } else {

  for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++)
   FUNC_1(VAR_14, VAR_5, VAR_4 | VAR_16);


  if (FUNC_4(VAR_14->xl_ifp, VAR_13, VAR_14) > 0)
   VAR_17 |= VAR_11;
 }

 FUNC_1(VAR_14, VAR_5, VAR_17 | VAR_3);
 FUNC_3(7);
}
