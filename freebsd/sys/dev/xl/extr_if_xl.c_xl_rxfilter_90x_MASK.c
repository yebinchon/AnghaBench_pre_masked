
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
 int FUNC_2 (struct xl_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (struct ifnet*,int ,int*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_5(struct xl_softc *VAR_11)
{
 struct ifnet *VAR_12;
 u_int8_t VAR_13;

 FUNC_2(VAR_11);

 VAR_12 = VAR_11->xl_ifp;

 FUNC_3(5);
 VAR_13 = FUNC_0(VAR_11, VAR_9);
 VAR_13 &= ~(VAR_5 | VAR_6 |
     VAR_7 | VAR_8);


 VAR_13 |= VAR_8;

 if (VAR_12->if_flags & VAR_1)
  VAR_13 |= VAR_7;


 if (VAR_12->if_flags & (VAR_2 | VAR_0)) {
  if (VAR_12->if_flags & VAR_2)
   VAR_13 |= VAR_5;
  if (VAR_12->if_flags & VAR_0)
   VAR_13 |= VAR_6;
 } else
  FUNC_4(VAR_11->xl_ifp, VAR_10, &VAR_13);

 FUNC_1(VAR_11, VAR_4, VAR_13 | VAR_3);
 FUNC_3(7);
}
