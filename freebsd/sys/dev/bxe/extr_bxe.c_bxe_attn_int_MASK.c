
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct bxe_softc {int attn_state; TYPE_2__* def_sb; } ;
struct TYPE_3__ {int attn_bits_ack; int attn_bits; } ;
struct TYPE_4__ {TYPE_1__ atten_status_block; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,int,int,int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct bxe_softc*,int) ;
 int FUNC_3 (struct bxe_softc*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_1)
{

    uint32_t VAR_2 = FUNC_4(VAR_1->def_sb->atten_status_block.attn_bits);
    uint32_t VAR_3 = FUNC_4(VAR_1->def_sb->atten_status_block.attn_bits_ack);
    uint32_t VAR_4 = VAR_1->attn_state;


    uint32_t VAR_5 = VAR_2 & ~VAR_3 & ~VAR_4;
    uint32_t VAR_6 = ~VAR_2 & VAR_3 & VAR_4;

    FUNC_0(VAR_1, VAR_0,
          "attn_bits 0x%08x attn_ack 0x%08x asserted 0x%08x deasserted 0x%08x\n",
          VAR_2, VAR_3, VAR_5, VAR_6);

    if (~(VAR_2 ^ VAR_3) & (VAR_2 ^ VAR_4)) {
        FUNC_1(VAR_1, "BAD attention state\n");
    }


    if (VAR_5) {
        FUNC_2(VAR_1, VAR_5);
    }

    if (VAR_6) {
        FUNC_3(VAR_1, VAR_6);
    }
}
