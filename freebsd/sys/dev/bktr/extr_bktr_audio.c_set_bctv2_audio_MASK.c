
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* bktr_ptr_t ;
struct TYPE_4__ {int audio_mux_select; scalar_t__ audio_mute_state; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void
FUNC_1( bktr_ptr_t VAR_7 )
{
        int VAR_8;

        switch (VAR_7->audio_mux_select) {
        case 1:
        case 2:
                FUNC_0(VAR_7, VAR_1, 0);
                break;
        default:
                FUNC_0(VAR_7, VAR_1, 1);
                break;
        }

        switch (130) {
        case 128:
                VAR_8 = VAR_5;
                break;
        case 130:
                VAR_8 = VAR_2;
                break;
        case 129:
        default:
                VAR_8 = VAR_3;
                break;
        }
        if (VAR_7->audio_mute_state == VAR_6)
                VAR_8 |= VAR_4;

        FUNC_0(VAR_7, VAR_0, VAR_8);

        return;
}
