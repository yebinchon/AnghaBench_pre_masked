
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_softc {int sc_bus_space; int sc_dev; } ;
struct bwi_mac {int mac_flags; struct bwi_softc* mac_sc; } ;
typedef enum bwi_bus_space { ____Placeholder_bwi_bus_space } bwi_bus_space ;


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
 int VAR_13 ;
 int FUNC_0 (struct bwi_softc*,int) ;
 int FUNC_1 (struct bwi_softc*,int,int) ;
 int FUNC_2 (struct bwi_softc*,int,char*,char*) ;
 int VAR_14 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct bwi_mac *VAR_15)
{
 struct bwi_softc *VAR_16 = VAR_15->mac_sc;
 enum bwi_bus_space VAR_17;
 uint32_t VAR_18;




 VAR_18 = FUNC_0(VAR_16, VAR_6);
 if (VAR_18 & VAR_7) {
  FUNC_2(VAR_16, VAR_4 | VAR_3, "%s\n",
   "need byte swap");
  VAR_15->mac_flags |= VAR_5;
 }




 VAR_17 = VAR_16->sc_bus_space;

 VAR_18 = FUNC_0(VAR_16, VAR_8);
 if (FUNC_3(VAR_18, VAR_9) &
     VAR_10) {

  VAR_16->sc_bus_space = VAR_2;
  FUNC_2(VAR_16, VAR_4 | VAR_3, "%s\n",
   "64bit bus space");
 } else {
  uint32_t VAR_19 = VAR_13 + VAR_11;

  FUNC_1(VAR_16, VAR_19, VAR_12);
  if (FUNC_0(VAR_16, VAR_19) & VAR_12) {

   VAR_16->sc_bus_space = VAR_1;
   FUNC_2(VAR_16, VAR_4 | VAR_3, "%s\n",
    "32bit bus space");
  } else {

   VAR_16->sc_bus_space = VAR_0;
   FUNC_2(VAR_16, VAR_4 | VAR_3, "%s\n",
    "30bit bus space");
  }
 }

 if (VAR_17 != 0 && VAR_17 != VAR_16->sc_bus_space) {
  FUNC_4(VAR_16->sc_dev, "MACs bus space mismatch!\n");
  return VAR_14;
 }
 return 0;
}
