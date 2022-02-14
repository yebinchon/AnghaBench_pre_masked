
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bxe_softc*,int *,int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static elink_status_t FUNC_4(struct bxe_softc *VAR_3,
      uint32_t VAR_4[],
      uint32_t VAR_5[],
      uint8_t VAR_6,
      uint32_t VAR_7)
{
 uint8_t VAR_8;
 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_7);
 FUNC_3(VAR_3, VAR_8, VAR_2);
 FUNC_0(10);
 FUNC_3(VAR_3, VAR_8, VAR_1);
 FUNC_1(VAR_3, "84833 reset pulse on pin values 0x%x\n",
  VAR_8);
 return VAR_0;
}
