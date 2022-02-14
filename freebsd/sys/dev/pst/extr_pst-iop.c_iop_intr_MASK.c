
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct iop_softc {int obase; int phys_obase; int mtx; TYPE_1__* reg; } ;
struct i2o_util_event_reply_message {int event_mask; int* event_data; } ;
struct i2o_single_reply {scalar_t__ function; int message_flags; scalar_t__ initiator_context; } ;
struct i2o_fault_reply {int preserved_mfa; } ;
struct TYPE_2__ {int oqueue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iop_softc*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int) ;
 void FUNC_4 (struct iop_softc*,int,struct i2o_single_reply*) ;

void
FUNC_5(void *VAR_2)
{
    struct iop_softc *VAR_3 = (struct iop_softc *)VAR_2;
    struct i2o_single_reply *VAR_4;
    u_int32_t VAR_5;


    FUNC_1(&VAR_3->mtx);
    while (1) {
 if ((VAR_5 = VAR_3->reg->oqueue) == 0xffffffff)
     if ((VAR_5 = VAR_3->reg->oqueue) == 0xffffffff)
  break;

 VAR_4 = (struct i2o_single_reply *)(VAR_3->obase + (VAR_5 - VAR_3->phys_obase));


 if (VAR_4->function == VAR_1) {
     struct i2o_util_event_reply_message *VAR_6 =
  (struct i2o_util_event_reply_message *)VAR_4;

     FUNC_3("pstiop: EVENT!! idx=%08x data=%08x\n",
     VAR_6->event_mask, VAR_6->event_data[0]);
     break;
 }


 if (VAR_4->message_flags & VAR_0)
     FUNC_0(VAR_3,((struct i2o_fault_reply *)(VAR_4))->preserved_mfa);


 ((void (*)(struct iop_softc *, u_int32_t, struct i2o_single_reply *))
     (VAR_4->initiator_context))(VAR_3, VAR_5, VAR_4);
    }
    FUNC_2(&VAR_3->mtx);
}
