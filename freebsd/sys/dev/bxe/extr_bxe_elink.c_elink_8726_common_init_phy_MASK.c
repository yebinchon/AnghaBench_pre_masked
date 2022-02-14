
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct elink_phy {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef size_t int8_t ;
typedef scalar_t__ elink_status_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,int ,int) ;
 int FUNC_5 (struct bxe_softc*,int ,int ,size_t) ;
 int FUNC_6 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_7 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_8 (struct bxe_softc*,int ,int,int,size_t,struct elink_phy*) ;

__attribute__((used)) static elink_status_t FUNC_9(struct bxe_softc *VAR_10,
          uint32_t VAR_11[],
          uint32_t VAR_12[], uint8_t VAR_13,
          uint32_t VAR_14)
{
 uint32_t VAR_15;
 int8_t VAR_16;
 struct elink_phy VAR_17;


 VAR_15 = FUNC_3(VAR_10, VAR_8);
 VAR_15 |= ((1<<VAR_5)|
  (1<<(VAR_5 + VAR_7)));
 FUNC_4(VAR_10, VAR_8, VAR_15);

 FUNC_7(VAR_10, 0);
 FUNC_1(1000 * 5);
 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
  uint32_t VAR_18, VAR_19;


  if (FUNC_0(VAR_10)) {
   VAR_18 = VAR_11[0];
   VAR_19 = VAR_12[0];
  } else {
   VAR_18 = VAR_11[VAR_16];
   VAR_19 = VAR_12[VAR_16];
  }

  if (FUNC_8(VAR_10, VAR_13, VAR_18, VAR_19,
           VAR_16, &VAR_17) !=
      VAR_1) {
   FUNC_2(VAR_10, "populate phy failed\n");
   return VAR_0;
  }


  FUNC_6(VAR_10, &VAR_17,
     VAR_2, VAR_3, 0x0001);



  FUNC_5(VAR_10, VAR_4,
          VAR_6,
          VAR_16);
 }

 return VAR_1;
}
