
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,int,int ,int,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bxe_softc*,int) ;
 int FUNC_3 (struct bxe_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct bxe_softc *VAR_4,
                            uint8_t VAR_5,
                            uint16_t VAR_6,
                            uint8_t VAR_7,
                            uint8_t VAR_8)
{
    uint32_t VAR_9 =
        (VAR_8) ? 0 : (1 << VAR_3);
    uint32_t VAR_10 =
        (VAR_0 +
         FUNC_1(VAR_6, VAR_7));
    uint8_t VAR_11;


    VAR_11 = FUNC_2(VAR_4, VAR_10);
    VAR_11 &= ~VAR_2;
    VAR_11 |= VAR_9;
    FUNC_3(VAR_4, VAR_10, VAR_11);

    FUNC_0(VAR_4, VAR_1,
          "port %d fw_sb_id %d sb_index %d disable %d\n",
          VAR_5, VAR_6, VAR_7, VAR_8);
}
