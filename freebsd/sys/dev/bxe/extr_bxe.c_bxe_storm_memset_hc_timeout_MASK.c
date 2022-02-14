
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_2,
                            uint8_t VAR_3,
                            uint8_t VAR_4,
                            uint8_t VAR_5,
                            uint8_t VAR_6)
{
    uint32_t VAR_7 =
        (VAR_0 +
         FUNC_1(VAR_4, VAR_5));

    FUNC_2(VAR_2, VAR_7, VAR_6);

    FUNC_0(VAR_2, VAR_1,
          "port %d fw_sb_id %d sb_index %d ticks %d\n",
          VAR_3, VAR_4, VAR_5, VAR_6);
}
