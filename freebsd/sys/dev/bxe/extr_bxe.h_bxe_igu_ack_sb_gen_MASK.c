
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct igu_regular {int sb_id_and_flags; int member_0; } ;
struct bxe_softc {TYPE_1__* bar; } ;
struct TYPE_2__ {int handle; int tag; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bxe_softc*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void
FUNC_4(struct bxe_softc *VAR_6,
                   uint8_t VAR_7,
                   uint8_t VAR_8,
                   uint16_t VAR_9,
                   uint8_t VAR_10,
                   uint8_t VAR_11,
                   uint32_t VAR_12)
{
    struct igu_regular VAR_13 = {0};

    VAR_13.sb_id_and_flags =
        ((VAR_9 << VAR_4) |
         (VAR_8 << VAR_5) |
         (VAR_11 << VAR_2) |
         (VAR_10 << VAR_3));

    FUNC_0(VAR_6, VAR_1, "write 0x%08x to IGU addr 0x%x\n",
            VAR_13.sb_id_and_flags, VAR_12);
    FUNC_1(VAR_6, VAR_12, VAR_13.sb_id_and_flags);


    FUNC_2(VAR_6->bar[0].tag, VAR_6->bar[0].handle, 0, 0,
                      VAR_0);
    FUNC_3();
}
