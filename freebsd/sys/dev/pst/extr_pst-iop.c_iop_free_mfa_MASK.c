
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iop_softc {TYPE_1__* reg; scalar_t__ ibase; } ;
struct i2o_basic_message {int version; int message_flags; int message_size; int function; int initiator_address; int target_address; } ;
struct TYPE_2__ {int iqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2o_basic_message*,int) ;

void
FUNC_1(struct iop_softc *VAR_3, int VAR_4)
{
    struct i2o_basic_message *VAR_5 = (struct i2o_basic_message *)(VAR_3->ibase+VAR_4);

    FUNC_0(VAR_5, sizeof(struct i2o_basic_message));
    VAR_5->version = 0x01;
    VAR_5->message_flags = 0x0;
    VAR_5->message_size = sizeof(struct i2o_basic_message) >> 2;
    VAR_5->target_address = VAR_1;
    VAR_5->initiator_address = VAR_0;
    VAR_5->function = VAR_2;
    VAR_3->reg->iqueue = VAR_4;
}
