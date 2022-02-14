
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct elink_phy {int addr; } ;
struct bxe_softc {int dummy; } ;
typedef int int8_t ;
typedef scalar_t__ elink_status_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int FUNC_3 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_4 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_5 (struct bxe_softc*,struct elink_phy*,int) ;
 int FUNC_6 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_7 (struct bxe_softc*,int,int ,int) ;
 int FUNC_8 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_9 (struct bxe_softc*,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_10 (struct bxe_softc*,int ,scalar_t__,scalar_t__,int,struct elink_phy*) ;

__attribute__((used)) static elink_status_t FUNC_11(struct bxe_softc *VAR_18,
          uint32_t VAR_19[],
          uint32_t VAR_20[], uint8_t VAR_21,
          uint32_t VAR_22)
{
 int8_t VAR_23, VAR_24;
 uint32_t VAR_25, VAR_26;
 struct elink_phy VAR_27[VAR_17];
 struct elink_phy *VAR_28[VAR_17];
 int8_t VAR_29;
 VAR_25 = FUNC_4(VAR_18, VAR_13);
 VAR_26 = FUNC_4(VAR_18, VAR_14);

 VAR_24 = VAR_9;
 VAR_23 = 1;




 FUNC_9(VAR_18, VAR_19[0],
         (uint8_t *)&VAR_24, (uint8_t *)&VAR_23);


 VAR_23 ^= (VAR_25 && VAR_26);


 FUNC_7(VAR_18, VAR_24, VAR_11,
         VAR_23);
 FUNC_1(1000 * 1);
 FUNC_7(VAR_18, VAR_24, VAR_10,
         VAR_23);

 FUNC_1(1000 * 5);


 for (VAR_23 = VAR_17 - 1; VAR_23 >= VAR_15; VAR_23--) {
  uint32_t VAR_30, VAR_31;


  if (FUNC_0(VAR_18)) {
   VAR_30 = VAR_19[0];
   VAR_31 = VAR_20[0];
   VAR_29 = VAR_23;
  } else {
   VAR_30 = VAR_19[VAR_23];
   VAR_31 = VAR_20[VAR_23];
   VAR_29 = 0;
  }


  if (FUNC_10(VAR_18, VAR_21, VAR_30, VAR_31,
           VAR_29, &VAR_27[VAR_23]) !=
           VAR_5) {
   FUNC_2(VAR_18, "populate phy failed\n");
   return VAR_4;
  }

  FUNC_6(VAR_18, VAR_12 +
          VAR_29*4,
          (VAR_3 |
    VAR_2 |
    VAR_1 |
    VAR_0));



  FUNC_8(VAR_18, &VAR_27[VAR_23],
     VAR_6, VAR_7, 1<<15);
 }


 FUNC_1(1000 * 150);
 if (VAR_27[VAR_15].addr & 0x1) {
  VAR_28[VAR_15] = &(VAR_27[VAR_16]);
  VAR_28[VAR_16] = &(VAR_27[VAR_15]);
 } else {
  VAR_28[VAR_15] = &(VAR_27[VAR_15]);
  VAR_28[VAR_16] = &(VAR_27[VAR_16]);
 }

 for (VAR_23 = VAR_17 - 1; VAR_23 >= VAR_15; VAR_23--) {
  if (FUNC_0(VAR_18))
   VAR_29 = VAR_23;
  else
   VAR_29 = 0;
  FUNC_3(VAR_18, "Loading spirom for phy address 0x%x\n",
      VAR_28[VAR_23]->addr);
  if (FUNC_5(VAR_18, VAR_28[VAR_23],
            VAR_29))
   return VAR_4;

  FUNC_8(VAR_18, VAR_28[VAR_23],
     VAR_6,
     VAR_8, 1);

 }
 return VAR_5;
}
