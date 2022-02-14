
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ifnet {int if_flags; } ;
struct dwc_softc {scalar_t__ mactype; struct ifnet* ifp; } ;
struct dwc_hash_maddr_ctx {int* hash; struct dwc_softc* sc; } ;


 int FUNC_0 (struct dwc_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int* FUNC_2 (struct ifnet*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 (struct dwc_softc*,int ,int) ;
 int VAR_9 ;
 int FUNC_6 (struct ifnet*,int ,struct dwc_hash_maddr_ctx*) ;

__attribute__((used)) static void
FUNC_7(struct dwc_softc *VAR_10)
{
 struct dwc_hash_maddr_ctx VAR_11;
 struct ifnet *VAR_12;
 uint8_t *VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;

 FUNC_0(VAR_10);

 VAR_12 = VAR_10->ifp;
 VAR_17 = VAR_10->mactype == VAR_0 ? 2 : 8;




 if ((VAR_12->if_flags & VAR_6) != 0) {
  VAR_14 = (VAR_2);
  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
   VAR_11.hash[VAR_18] = ~0;
 } else {
  VAR_14 = (VAR_1);
  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
   VAR_11.hash[VAR_18] = 0;
  VAR_11.sc = VAR_10;
  FUNC_6(VAR_12, VAR_9, &VAR_11);
 }




 if (VAR_12->if_flags & VAR_7)
  VAR_14 |= (VAR_3);




 VAR_13 = FUNC_2(VAR_12);
 VAR_16 = VAR_13[0] | (VAR_13[1] << 8) | (VAR_13[2] << 16) |
     (VAR_13[3] << 24);
 VAR_15 = VAR_13[4] | (VAR_13[5] << 8);
 FUNC_5(VAR_10, FUNC_4(0), VAR_16);
 FUNC_5(VAR_10, FUNC_3(0), VAR_15);
 FUNC_5(VAR_10, VAR_8, VAR_14);
 if (VAR_10->mactype == VAR_0) {
  FUNC_5(VAR_10, VAR_5, VAR_11.hash[0]);
  FUNC_5(VAR_10, VAR_4, VAR_11.hash[1]);
 } else {
  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
   FUNC_5(VAR_10, FUNC_1(VAR_18), VAR_11.hash[VAR_18]);
 }
}
