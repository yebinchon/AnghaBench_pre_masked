
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iop_softc {int lct_count; int lct; scalar_t__ ibase; } ;
struct i2o_lct_entry {int dummy; } ;
struct i2o_get_lct_reply {int table_size; int * entry; } ;
struct TYPE_2__ {int flags; int * phys_addr; int count; } ;
struct i2o_exec_get_lct_message {int version_offset; int message_flags; int message_size; TYPE_1__ sgl; scalar_t__ last_change_id; int class; int function; int initiator_address; int target_address; } ;
struct i2o_basic_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct i2o_exec_get_lct_message*,int) ;
 int FUNC_2 (struct i2o_get_lct_reply*,int ,int ) ;
 struct i2o_get_lct_reply* FUNC_3 (int ,int ,int,int,int,int ,int ) ;
 int FUNC_4 (struct iop_softc*) ;
 scalar_t__ FUNC_5 (struct iop_softc*,int,struct i2o_basic_message*) ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (struct i2o_get_lct_reply*) ;

int
FUNC_8(struct iop_softc *VAR_12)
{
    struct i2o_exec_get_lct_message *VAR_13;
    struct i2o_get_lct_reply *VAR_14;
    int VAR_15;


    if (!(VAR_14 = FUNC_3((VAR_11 + (256 * sizeof(struct i2o_lct_entry))), VAR_9, VAR_8 | VAR_10,
          0x00010000, 0xFFFFFFFF, VAR_11, 0)))
 return 0;

    VAR_15 = FUNC_4(VAR_12);
    VAR_13 = (struct i2o_exec_get_lct_message *)(VAR_12->ibase + VAR_15);
    FUNC_1(VAR_13, sizeof(struct i2o_exec_get_lct_message));
    VAR_13->version_offset = 0x61;
    VAR_13->message_flags = 0x0;
    VAR_13->message_size = sizeof(struct i2o_exec_get_lct_message) >> 2;
    VAR_13->target_address = VAR_7;
    VAR_13->initiator_address = VAR_6;
    VAR_13->function = VAR_2;
    VAR_13->class = VAR_1;
    VAR_13->last_change_id = 0;

    VAR_13->sgl.flags = VAR_5 | VAR_3 | VAR_4;
    VAR_13->sgl.count = (VAR_11 + (256 * sizeof(struct i2o_lct_entry)));
    VAR_13->sgl.phys_addr[0] = FUNC_7(VAR_14);

    if (FUNC_5(VAR_12, VAR_15, (struct i2o_basic_message *)VAR_13)) {
 FUNC_2(VAR_14, (VAR_11 + (256 * sizeof(struct i2o_lct_entry))), VAR_9);
 return 0;
    }
    if (!(VAR_12->lct = FUNC_6(VAR_14->table_size * sizeof(struct i2o_lct_entry),
      VAR_9, VAR_8 | VAR_10))) {
 FUNC_2(VAR_14, (VAR_11 + (256 * sizeof(struct i2o_lct_entry))), VAR_9);
 return 0;
    }
    FUNC_0(&VAR_14->entry[0], VAR_12->lct,
   VAR_14->table_size * sizeof(struct i2o_lct_entry));
    VAR_12->lct_count = VAR_14->table_size;
    FUNC_2(VAR_14, (VAR_11 + (256 * sizeof(struct i2o_lct_entry))), VAR_9);
    return 1;
}
