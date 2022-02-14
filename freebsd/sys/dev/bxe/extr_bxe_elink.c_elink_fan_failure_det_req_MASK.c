
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct elink_phy {scalar_t__ flags; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct bxe_softc*,scalar_t__,int ,int ,scalar_t__,struct elink_phy*) ;

uint8_t FUNC_2(struct bxe_softc *VAR_4,
        uint32_t VAR_5,
        uint32_t VAR_6,
        uint8_t VAR_7)
{
 uint8_t VAR_8, VAR_9 = 0;
 struct elink_phy VAR_10;
 for (VAR_8 = VAR_0; VAR_8 < VAR_2;
       VAR_8++) {
  if (FUNC_1(VAR_4, VAR_8, VAR_5, VAR_6,
           VAR_7, &VAR_10)
      != VAR_3) {
   FUNC_0(VAR_4, "populate phy failed\n");
   return 0;
  }
  VAR_9 |= (VAR_10.flags &
     VAR_1);
 }
 return VAR_9;
}
