
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
struct mly_softc {scalar_t__ mly_event_counter; scalar_t__ mly_event_waiting; } ;
struct mly_event {int dummy; } ;
struct TYPE_11__ {int sequence_number_low; } ;
struct TYPE_12__ {TYPE_5__ getevent; } ;
struct TYPE_10__ {int value; int scale; } ;
struct TYPE_8__ {int lun; int target; scalar_t__ controller; scalar_t__ channel; } ;
struct TYPE_9__ {TYPE_2__ phys; } ;
struct mly_command_ioctl {int data_size; TYPE_6__ param; int sub_ioctl; TYPE_4__ timeout; TYPE_3__ addr; int opcode; } ;
struct mly_command {int mc_length; TYPE_1__* mc_packet; int mc_complete; int mc_flags; int * mc_data; } ;
struct TYPE_7__ {int ioctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (struct mly_softc*,struct mly_command**) ;
 int VAR_7 ;
 int FUNC_4 (struct mly_softc*,char*,int) ;
 int FUNC_5 (struct mly_command*) ;
 scalar_t__ FUNC_6 (struct mly_command*) ;

__attribute__((used)) static void
FUNC_7(struct mly_softc *VAR_8)
{
    struct mly_command *VAR_9;
    struct mly_command_ioctl *VAR_10;
    u_int32_t VAR_11;

    FUNC_1(1);


    if (FUNC_3(VAR_8, &VAR_9))
 return;


    if ((VAR_9->mc_data = FUNC_2(sizeof(struct mly_event), VAR_4, VAR_5 | VAR_6)) == ((void*)0)) {
 FUNC_5(VAR_9);
 return;
    }
    VAR_9->mc_length = sizeof(struct mly_event);
    VAR_9->mc_flags |= VAR_2;
    VAR_9->mc_complete = VAR_7;





    if (VAR_8->mly_event_counter == VAR_8->mly_event_waiting) {
 FUNC_5(VAR_9);
 return;
    }
    VAR_11 = VAR_8->mly_event_counter++;







    VAR_10 = (struct mly_command_ioctl *)&VAR_9->mc_packet->ioctl;
    VAR_10->opcode = VAR_1;
    VAR_10->data_size = sizeof(struct mly_event);
    VAR_10->addr.phys.lun = (VAR_11 >> 16) & 0xff;
    VAR_10->addr.phys.target = (VAR_11 >> 24) & 0xff;
    VAR_10->addr.phys.channel = 0;
    VAR_10->addr.phys.controller = 0;
    VAR_10->timeout.value = 30;
    VAR_10->timeout.scale = VAR_3;
    VAR_10->sub_ioctl = VAR_0;
    VAR_10->param.getevent.sequence_number_low = VAR_11 & 0xffff;

    FUNC_0(1, "fetch event %u", VAR_11);







    if (FUNC_6(VAR_9) != 0) {
 FUNC_4(VAR_8, "couldn't fetch event %u\n", VAR_11);
 FUNC_5(VAR_9);
    }
}
