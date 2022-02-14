
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct iop_softc {TYPE_1__* reg; scalar_t__ ibase; } ;
struct i2o_exec_iop_reset_message {int version_offset; int message_flags; int message_size; scalar_t__ status_word_high_addr; int status_word_low_addr; int function; int initiator_address; int target_address; } ;
struct TYPE_2__ {int iqueue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i2o_exec_iop_reset_message*,int) ;
 int FUNC_2 (struct iop_softc*,int) ;
 int FUNC_3 (struct iop_softc*) ;
 int FUNC_4 (int volatile*) ;

int
FUNC_5(struct iop_softc *VAR_3)
{
    struct i2o_exec_iop_reset_message *VAR_4;
    int VAR_5, VAR_6 = 5000;
    volatile u_int32_t VAR_7 = 0;

    VAR_5 = FUNC_3(VAR_3);
    VAR_4 = (struct i2o_exec_iop_reset_message *)(VAR_3->ibase + VAR_5);
    FUNC_1(VAR_4, sizeof(struct i2o_exec_iop_reset_message));
    VAR_4->version_offset = 0x1;
    VAR_4->message_flags = 0x0;
    VAR_4->message_size = sizeof(struct i2o_exec_iop_reset_message) >> 2;
    VAR_4->target_address = VAR_2;
    VAR_4->initiator_address = VAR_1;
    VAR_4->function = VAR_0;
    VAR_4->status_word_low_addr = FUNC_4(&VAR_7);
    VAR_4->status_word_high_addr = 0;

    VAR_3->reg->iqueue = VAR_5;

    while (--VAR_6 && !VAR_7)
 FUNC_0(1000);


    VAR_6 = 10000;
    while ((VAR_5 = VAR_3->reg->iqueue) == 0xffffffff && --VAR_6)
 FUNC_0(1000);

    FUNC_2(VAR_3, VAR_5);
    return VAR_7;
}
