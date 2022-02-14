
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


typedef union mly_devinfo {int dummy; } mly_devinfo ;
struct mly_softc {TYPE_6__** mly_btl; } ;
struct mly_ioctl_getphysdevinfovalid {int dummy; } ;
struct mly_ioctl_getlogdevinfovalid {int dummy; } ;
struct TYPE_10__ {int target; int channel; scalar_t__ lun; scalar_t__ controller; } ;
struct TYPE_9__ {int logdev; } ;
struct TYPE_11__ {TYPE_4__ phys; TYPE_3__ log; } ;
struct TYPE_8__ {int value; int scale; } ;
struct mly_command_ioctl {int data_size; TYPE_5__ addr; int sub_ioctl; TYPE_2__ timeout; int opcode; } ;
struct mly_command {int mc_length; TYPE_1__* mc_packet; int mc_complete; int mc_flags; int * mc_data; } ;
struct TYPE_12__ {int mb_flags; } ;
struct TYPE_7__ {int ioctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mly_softc*,int) ;
 scalar_t__ FUNC_1 (struct mly_softc*,int) ;
 int VAR_4 ;
 int FUNC_2 (struct mly_softc*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,char*,int,...) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int,int ,int) ;
 scalar_t__ FUNC_6 (struct mly_softc*,struct mly_command**) ;
 int VAR_9 ;
 int FUNC_7 (struct mly_command*) ;
 scalar_t__ FUNC_8 (struct mly_command*) ;

__attribute__((used)) static void
FUNC_9(struct mly_softc *VAR_10, int VAR_11, int VAR_12)
{
    struct mly_command *VAR_13;
    struct mly_command_ioctl *VAR_14;

    FUNC_4(1);


    if (!FUNC_0(VAR_10, VAR_11))
 return;


    if (FUNC_6(VAR_10, &VAR_13))
 return;


    if ((VAR_13->mc_data = FUNC_5(sizeof(union mly_devinfo), VAR_6, VAR_7 | VAR_8)) == ((void*)0)) {
 FUNC_7(VAR_13);
 return;
    }
    VAR_13->mc_flags |= VAR_4;
    VAR_13->mc_complete = VAR_9;




    VAR_14 = (struct mly_command_ioctl *)&VAR_13->mc_packet->ioctl;
    VAR_14->opcode = VAR_2;
    VAR_14->addr.phys.controller = 0;
    VAR_14->timeout.value = 30;
    VAR_14->timeout.scale = VAR_5;
    if (FUNC_1(VAR_10, VAR_11)) {
 VAR_13->mc_length = VAR_14->data_size = sizeof(struct mly_ioctl_getlogdevinfovalid);
 VAR_14->sub_ioctl = VAR_0;
 VAR_14->addr.log.logdev = FUNC_2(VAR_10, VAR_11, VAR_12);
 FUNC_3(1, "logical device %d", VAR_14->addr.log.logdev);
    } else {
 VAR_13->mc_length = VAR_14->data_size = sizeof(struct mly_ioctl_getphysdevinfovalid);
 VAR_14->sub_ioctl = VAR_1;
 VAR_14->addr.phys.lun = 0;
 VAR_14->addr.phys.target = VAR_12;
 VAR_14->addr.phys.channel = VAR_11;
 FUNC_3(1, "physical device %d:%d", VAR_14->addr.phys.channel, VAR_14->addr.phys.target);
    }





    if (FUNC_8(VAR_13) != 0) {
 FUNC_7(VAR_13);
    } else {
 VAR_10->mly_btl[VAR_11][VAR_12].mb_flags &= ~VAR_3;
    }
}
