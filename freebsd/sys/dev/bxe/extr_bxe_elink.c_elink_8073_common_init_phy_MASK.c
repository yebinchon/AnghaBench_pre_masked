
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
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
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_4 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_5 (struct bxe_softc*,struct elink_phy*,int) ;
 int FUNC_6 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_7 (struct bxe_softc*,int ,int ,int) ;
 int FUNC_8 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_9 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_10 (struct bxe_softc*,int) ;
 scalar_t__ FUNC_11 (struct bxe_softc*,int ,scalar_t__,scalar_t__,int,struct elink_phy*) ;

__attribute__((used)) static elink_status_t FUNC_12(struct bxe_softc *VAR_19,
          uint32_t VAR_20[],
          uint32_t VAR_21[], uint8_t VAR_22,
          uint32_t VAR_23)
{
 struct elink_phy VAR_24[VAR_18];
 struct elink_phy *VAR_25[VAR_18];
 uint16_t VAR_26;
 int8_t VAR_27 = 0;
 int8_t VAR_28 = 0;
 uint32_t VAR_29, VAR_30;
 VAR_29 = FUNC_4(VAR_19, VAR_14);
 VAR_30 = FUNC_4(VAR_19, VAR_15);
 VAR_27 ^= (VAR_29 && VAR_30);
 FUNC_10(VAR_19, VAR_27);

 for (VAR_27 = VAR_18 - 1; VAR_27 >= VAR_16; VAR_27--) {
  uint32_t VAR_31, VAR_32;

  if (FUNC_0(VAR_19)) {
   VAR_31 = VAR_20[0];
   VAR_32 = VAR_21[0];
   VAR_28 = VAR_27;
  } else {
   VAR_31 = VAR_20[VAR_27];
   VAR_32 = VAR_21[VAR_27];
   VAR_28 = 0;
  }


  if (FUNC_11(VAR_19, VAR_22, VAR_31, VAR_32,
           VAR_28, &VAR_24[VAR_27]) !=
      VAR_5) {
   FUNC_2(VAR_19, "populate_phy failed\n");
   return VAR_4;
  }

  FUNC_6(VAR_19, VAR_13 +
          VAR_28*4,
          (VAR_3 |
    VAR_2 |
    VAR_1 |
    VAR_0));




  FUNC_7(VAR_19, VAR_10,
          VAR_11,
          VAR_27);


  FUNC_9(VAR_19, &VAR_24[VAR_27],
     VAR_6,
     VAR_7,
     1<<15);
 }


 FUNC_1(1000 * 150);

 if (VAR_24[VAR_16].addr & 0x1) {
  VAR_25[VAR_16] = &(VAR_24[VAR_17]);
  VAR_25[VAR_17] = &(VAR_24[VAR_16]);
 } else {
  VAR_25[VAR_16] = &(VAR_24[VAR_16]);
  VAR_25[VAR_17] = &(VAR_24[VAR_17]);
 }


 for (VAR_27 = VAR_18 - 1; VAR_27 >= VAR_16; VAR_27--) {
  if (FUNC_0(VAR_19))
   VAR_28 = VAR_27;
  else
   VAR_28 = 0;

  FUNC_3(VAR_19, "Loading spirom for phy address 0x%x\n",
      VAR_25[VAR_27]->addr);
  if (FUNC_5(VAR_19, VAR_25[VAR_27],
            VAR_28))
   return VAR_4;


  FUNC_8(VAR_19, VAR_25[VAR_27],
    VAR_6,
    VAR_9, &VAR_26);


  FUNC_9(VAR_19, VAR_25[VAR_27],
     VAR_6,
     VAR_9,
     (VAR_26 | 1<<10));
 }




 FUNC_1(1000 * 600);


 for (VAR_27 = VAR_18 - 1; VAR_27 >= VAR_16; VAR_27--) {


  FUNC_8(VAR_19, VAR_25[VAR_27],
    VAR_6,
    VAR_9, &VAR_26);

  FUNC_9(VAR_19, VAR_25[VAR_27],
    VAR_6,
    VAR_9, (VAR_26 & (~(1<<10))));
  FUNC_1(1000 * 15);


  FUNC_8(VAR_19, VAR_25[VAR_27],
    VAR_6,
    VAR_8, &VAR_26);
  FUNC_9(VAR_19, VAR_25[VAR_27],
     VAR_6,
     VAR_8, (VAR_26 | (1<<12)));


  FUNC_7(VAR_19, VAR_10,
          VAR_12, VAR_27);
 }
 return VAR_5;
}
