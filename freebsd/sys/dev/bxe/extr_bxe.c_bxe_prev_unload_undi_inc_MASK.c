
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (struct bxe_softc*,int ) ;
 int FUNC_6 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_1,
                         uint8_t VAR_2,
                         uint8_t VAR_3)
{
    uint16_t VAR_4, VAR_5;
    uint32_t VAR_6 = FUNC_5(VAR_1, FUNC_3(VAR_2));

    VAR_4 = FUNC_4(VAR_6) + VAR_3;
    VAR_5 = FUNC_1(VAR_6) + VAR_3;

    VAR_6 = FUNC_2(VAR_4, VAR_5);
    FUNC_6(VAR_1, FUNC_3(VAR_2), VAR_6);

    FUNC_0(VAR_1, VAR_0,
          "UNDI producer [%d] rings bd -> 0x%04x, rcq -> 0x%04x\n",
          VAR_2, VAR_5, VAR_4);
}
