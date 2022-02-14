
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tsec_softc {struct ifnet* tsec_ifp; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tsec_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct tsec_softc*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct tsec_softc*,int ,int) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct ifnet*,char*,int) ;
 int FUNC_5 (struct tsec_softc*) ;

__attribute__((used)) static void
FUNC_6(struct tsec_softc *VAR_19, int VAR_20)
{
 struct ifnet *VAR_21;
 uint32_t VAR_22;

 FUNC_0(VAR_19);

 VAR_21 = VAR_19->tsec_ifp;

 VAR_22 = FUNC_1(VAR_19, VAR_16);


 FUNC_2(VAR_19, VAR_16, VAR_12 | VAR_7 |
     VAR_9 | VAR_11 | VAR_6 |
     VAR_13 | VAR_14 | VAR_10 |
     VAR_8 | VAR_15);


 if (VAR_22 & VAR_14) {
  FUNC_3(VAR_21, VAR_3, 1);

  if (VAR_22 & VAR_10)
   FUNC_3(VAR_21, VAR_0, 1);

  FUNC_2(VAR_19, VAR_17, VAR_18);
 }


 if (VAR_22 & VAR_7) {
  FUNC_3(VAR_21, VAR_2, 1);
 }

 if (VAR_21->if_flags & VAR_4)
  FUNC_4(VAR_21, "tsec_error_intr(): event flags: 0x%x\n",
      VAR_22);

 if (VAR_22 & VAR_9) {
  FUNC_4(VAR_21, "System bus error occurred during"
      "DMA transaction (flags: 0x%x)\n", VAR_22);
  FUNC_5(VAR_19);
 }

 if (VAR_22 & VAR_6)
  FUNC_3(VAR_21, VAR_3, 1);

 if (VAR_22 & VAR_5)
  FUNC_3(VAR_21, VAR_1, 1);
}
