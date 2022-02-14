
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int write_hash; int enc_write_ctx; } ;
struct TYPE_7__ {TYPE_1__ saved_retransmit_state; scalar_t__ is_ccs; } ;
struct TYPE_8__ {struct TYPE_8__* reassembly; struct TYPE_8__* fragment; TYPE_2__ msg_header; } ;
typedef TYPE_3__ hm_fragment ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(hm_fragment *VAR_0)
{
    if (!VAR_0)
        return;
    if (VAR_0->msg_header.is_ccs) {
        FUNC_0(VAR_0->msg_header.
                            saved_retransmit_state.enc_write_ctx);
        FUNC_1(VAR_0->msg_header.saved_retransmit_state.write_hash);
    }
    FUNC_2(VAR_0->fragment);
    FUNC_2(VAR_0->reassembly);
    FUNC_2(VAR_0);
}
