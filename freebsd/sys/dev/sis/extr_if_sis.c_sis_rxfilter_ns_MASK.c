
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sis_softc {struct ifnet* sis_ifp; } ;
struct ifnet {int if_flags; } ;


 int FUNC_0 (struct sis_softc*,int ) ;
 int FUNC_1 (struct sis_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_2 (struct ifnet*,int ,struct sis_softc*) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_3(struct sis_softc *VAR_14)
{
 struct ifnet *VAR_15;
 uint32_t VAR_16, VAR_17;

 VAR_15 = VAR_14->sis_ifp;
 VAR_17 = FUNC_0(VAR_14, VAR_11);
 if (VAR_17 & VAR_10) {



  FUNC_1(VAR_14, VAR_11, VAR_17 & ~VAR_10);
  FUNC_0(VAR_14, VAR_11);
 }
 VAR_17 &= ~(VAR_4 | VAR_6 |
     VAR_5 | VAR_8 | VAR_9 |
     VAR_7);

 if (VAR_15->if_flags & VAR_1)
  VAR_17 |= VAR_9;






 VAR_17 |= VAR_4 | VAR_6;

 if (VAR_15->if_flags & (VAR_0 | VAR_2)) {
  VAR_17 |= VAR_7;
  if (VAR_15->if_flags & VAR_2)
   VAR_17 |= VAR_8;
 } else {




  VAR_17 |= VAR_5;


  for (VAR_16 = 0; VAR_16 < 32; VAR_16++) {
   FUNC_1(VAR_14, VAR_11, VAR_3 +
       (VAR_16 * 2));
   FUNC_1(VAR_14, VAR_12, 0);
  }

  FUNC_2(VAR_15, VAR_13, VAR_14);
 }


 FUNC_1(VAR_14, VAR_11, VAR_17 | VAR_10);
 FUNC_0(VAR_14, VAR_11);
}
