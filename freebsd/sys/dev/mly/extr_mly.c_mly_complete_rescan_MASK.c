
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mly_softc {struct mly_btl** mly_btl; } ;
struct mly_ioctl_getphysdevinfovalid {int channel; int target; scalar_t__ state; int width; int speed; } ;
struct mly_ioctl_getlogdevinfovalid {scalar_t__ raid_level; scalar_t__ state; int logical_device_number; } ;
struct TYPE_7__ {int channel; int target; } ;
struct TYPE_6__ {int logdev; } ;
struct TYPE_8__ {TYPE_3__ phys; TYPE_2__ log; } ;
struct mly_command_ioctl {scalar_t__ sub_ioctl; TYPE_4__ addr; } ;
struct mly_command {scalar_t__ mc_status; int mc_length; scalar_t__ mc_data; TYPE_1__* mc_packet; struct mly_softc* mc_sc; } ;
struct mly_btl {scalar_t__ mb_flags; scalar_t__ mb_type; scalar_t__ mb_state; int mb_width; int mb_speed; } ;
typedef int btl ;
struct TYPE_5__ {int ioctl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mly_softc*,int ) ;
 int FUNC_1 (struct mly_softc*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct mly_btl*,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct mly_softc*,int,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct mly_softc*,char*,...) ;
 int FUNC_9 (struct mly_command*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_10(struct mly_command *VAR_9)
{
    struct mly_softc *VAR_10 = VAR_9->mc_sc;
    struct mly_ioctl_getlogdevinfovalid *VAR_11;
    struct mly_ioctl_getphysdevinfovalid *VAR_12;
    struct mly_command_ioctl *VAR_13;
    struct mly_btl VAR_14, *VAR_15;
    int VAR_16, VAR_17, VAR_18;

    FUNC_4(1);





    VAR_13 = (struct mly_command_ioctl *)&VAR_9->mc_packet->ioctl;
    if (VAR_13->sub_ioctl == VAR_0) {
 VAR_16 = FUNC_0(VAR_10, VAR_13->addr.log.logdev);
 VAR_17 = FUNC_1(VAR_10, VAR_13->addr.log.logdev);
    } else {
 VAR_16 = VAR_13->addr.phys.channel;
 VAR_17 = VAR_13->addr.phys.target;
    }



    FUNC_2(&VAR_14, sizeof(VAR_14));


    if (VAR_9->mc_status == 0) {
 if (VAR_9->mc_length == sizeof(*VAR_11)) {
     VAR_11 = (struct mly_ioctl_getlogdevinfovalid *)VAR_9->mc_data;
     if ((FUNC_0(VAR_10, VAR_11->logical_device_number) != VAR_16) ||
  (FUNC_1(VAR_10, VAR_11->logical_device_number) != VAR_17)) {
  FUNC_8(VAR_10, "WARNING: BTL rescan for %d:%d returned data for %d:%d instead\n",
      VAR_16, VAR_17, FUNC_0(VAR_10, VAR_11->logical_device_number),
      FUNC_1(VAR_10, VAR_11->logical_device_number));

     }
     VAR_14.mb_flags = VAR_1;
     VAR_14.mb_type = VAR_11->raid_level;
     VAR_14.mb_state = VAR_11->state;
     FUNC_3(1, "BTL rescan for %d returns %s, %s", VAR_11->logical_device_number,
    FUNC_7(VAR_8, VAR_11->raid_level),
    FUNC_7(VAR_7, VAR_11->state));
 } else if (VAR_9->mc_length == sizeof(*VAR_12)) {
     VAR_12 = (struct mly_ioctl_getphysdevinfovalid *)VAR_9->mc_data;
     if ((VAR_12->channel != VAR_16) || (VAR_12->target != VAR_17)) {
  FUNC_8(VAR_10, "WARNING: BTL rescan for %d:%d returned data for %d:%d instead\n",
      VAR_16, VAR_17, VAR_12->channel, VAR_12->target);

     }
     VAR_14.mb_flags = VAR_2;
     VAR_14.mb_type = VAR_5;
     VAR_14.mb_state = VAR_12->state;
     VAR_14.mb_speed = VAR_12->speed;
     VAR_14.mb_width = VAR_12->width;
     if (VAR_12->state != VAR_4)
  VAR_10->mly_btl[VAR_16][VAR_17].mb_flags |= VAR_3;
     FUNC_3(1, "BTL rescan for %d:%d returns %s", VAR_16, VAR_17,
    FUNC_7(VAR_7, VAR_12->state));
 } else {
     FUNC_8(VAR_10, "BTL rescan result invalid\n");
 }
    }

    FUNC_5(VAR_9->mc_data, VAR_6);
    FUNC_9(VAR_9);




    VAR_18 = 0;


    VAR_15 = &VAR_10->mly_btl[VAR_16][VAR_17];
    if (VAR_14.mb_flags != VAR_15->mb_flags) {
 FUNC_3(1, "flags changed, rescanning");
 VAR_18 = 1;
    }






    *VAR_15 = VAR_14;




    if (VAR_18)
 FUNC_6(VAR_10, VAR_16, VAR_17);
}
