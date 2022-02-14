
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ flag; int data; } ;
union mly_command_packet {TYPE_3__ mmbox; } ;
struct mly_softc {int mly_state; size_t mly_mmbox_command_index; int mly_idbr; int mly_regs_resource; TYPE_2__* mly_mmbox; int mly_command_mailbox; } ;
struct mly_command {TYPE_5__* mc_packet; int mc_flags; int mc_packetphys; int mc_timestamp; int mc_slot; struct mly_softc* mc_sc; } ;
struct TYPE_9__ {scalar_t__ flag; int data; } ;
struct TYPE_6__ {int command_id; } ;
struct TYPE_10__ {TYPE_4__ mmbox; TYPE_1__ generic; } ;
struct TYPE_7__ {union mly_command_packet* mmm_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mly_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct mly_softc*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct mly_softc*,int ,int *) ;
 int FUNC_3 (struct mly_softc*,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct mly_command*) ;
 int FUNC_8 (struct mly_command*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(struct mly_command *VAR_8)
{
    struct mly_softc *VAR_9 = VAR_8->mc_sc;
    union mly_command_packet *VAR_10;

    FUNC_6(2);
    FUNC_0(VAR_9);




    FUNC_8(VAR_8);
    VAR_8->mc_packet->generic.command_id = VAR_8->mc_slot;
    if (!(VAR_9->mly_state & VAR_6)) {



 if (FUNC_1(VAR_9, VAR_4)) {
     return(VAR_1);
 }
 VAR_8->mc_flags |= VAR_3;




 FUNC_2(VAR_9, VAR_9->mly_command_mailbox, &VAR_8->mc_packetphys);
 FUNC_3(VAR_9, VAR_9->mly_idbr, VAR_4);

    } else {

 VAR_10 = &VAR_9->mly_mmbox->mmm_command[VAR_9->mly_mmbox_command_index];


 if (VAR_10->mmbox.flag != 0) {
     return(VAR_1);
 }
 VAR_8->mc_flags |= VAR_3;


 FUNC_4(VAR_8->mc_packet->mmbox.data, VAR_10->mmbox.data, sizeof(VAR_10->mmbox.data));

 FUNC_5(VAR_9->mly_regs_resource, 0, 0, VAR_0);

 VAR_10->mmbox.flag = VAR_8->mc_packet->mmbox.flag;

 FUNC_5(VAR_9->mly_regs_resource, 0, 0, VAR_0);


 FUNC_3(VAR_9, VAR_9->mly_idbr, VAR_2);
 VAR_9->mly_mmbox_command_index = (VAR_9->mly_mmbox_command_index + 1) % VAR_5;
    }

    FUNC_7(VAR_8);
    return(0);
}
