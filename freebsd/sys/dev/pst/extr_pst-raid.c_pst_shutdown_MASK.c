
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pst_softc {TYPE_2__* iop; TYPE_1__* lct; } ;
struct i2o_bsa_cache_flush_message {int version_offset; int message_flags; int message_size; int control_flags; int function; int initiator_address; int target_address; } ;
struct i2o_basic_message {int dummy; } ;
typedef int device_t ;
struct TYPE_5__ {scalar_t__ ibase; } ;
struct TYPE_4__ {int local_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2o_bsa_cache_flush_message*,int) ;
 struct pst_softc* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,struct i2o_basic_message*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
    struct pst_softc *VAR_3 = FUNC_1(VAR_2);
    struct i2o_bsa_cache_flush_message *VAR_4;
    int VAR_5;

    VAR_5 = FUNC_2(VAR_3->iop);
    VAR_4 = (struct i2o_bsa_cache_flush_message *)(VAR_3->iop->ibase + VAR_5);
    FUNC_0(VAR_4, sizeof(struct i2o_bsa_cache_flush_message));
    VAR_4->version_offset = 0x01;
    VAR_4->message_flags = 0x0;
    VAR_4->message_size = sizeof(struct i2o_bsa_cache_flush_message) >> 2;
    VAR_4->target_address = VAR_3->lct->local_tid;
    VAR_4->initiator_address = VAR_1;
    VAR_4->function = VAR_0;
    VAR_4->control_flags = 0x0;
    if (FUNC_3(VAR_3->iop, VAR_5, (struct i2o_basic_message *)VAR_4))
 FUNC_4("pst: shutdown failed!\n");
    return 0;
}
