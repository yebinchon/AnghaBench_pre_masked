
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* d; int write_sequence; } ;
struct TYPE_4__ {int w_epoch; int curr_write_sequence; int last_write_sequence; } ;
typedef TYPE_2__ RECORD_LAYER ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(RECORD_LAYER *VAR_0, unsigned short VAR_1)
{
    if (VAR_1 == VAR_0->d->w_epoch - 1) {
        FUNC_0(VAR_0->d->curr_write_sequence,
               VAR_0->write_sequence, sizeof(VAR_0->write_sequence));
        FUNC_0(VAR_0->write_sequence,
               VAR_0->d->last_write_sequence, sizeof(VAR_0->write_sequence));
    } else if (VAR_1 == VAR_0->d->w_epoch + 1) {
        FUNC_0(VAR_0->d->last_write_sequence,
               VAR_0->write_sequence, sizeof(unsigned char[8]));
        FUNC_0(VAR_0->write_sequence,
               VAR_0->d->curr_write_sequence, sizeof(VAR_0->write_sequence));
    }
    VAR_0->d->w_epoch = VAR_1;
}
