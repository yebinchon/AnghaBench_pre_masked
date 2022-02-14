
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct igu_ack_register {int sb_id_and_flags; int status_block_index; } ;
struct bxe_softc {TYPE_1__* bar; } ;
struct TYPE_2__ {int handle; int tag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bxe_softc*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void
FUNC_4(struct bxe_softc *VAR_7,
              uint8_t VAR_8,
              uint8_t VAR_9,
              uint16_t VAR_10,
              uint8_t VAR_11,
              uint8_t VAR_12)
{
    uint32_t VAR_13 = (VAR_2 + FUNC_1(VAR_7)*32 +
                        VAR_1);
    struct igu_ack_register VAR_14;

    VAR_14.status_block_index = VAR_10;
    VAR_14.sb_id_and_flags =
        ((VAR_8 << VAR_4) |
         (VAR_9 << VAR_5) |
         (VAR_12 << VAR_6) |
         (VAR_11 << VAR_3));

    FUNC_0(VAR_7, VAR_13, (*(uint32_t *)&VAR_14));


    FUNC_2(VAR_7->bar[0].tag, VAR_7->bar[0].handle, 0, 0,
                      VAR_0);
    FUNC_3();
}
