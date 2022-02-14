
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct mly_softc {int dummy; } ;
struct TYPE_4__ {int value; int scale; } ;
struct mly_command_ioctl {TYPE_1__ timeout; int opcode; int maximum_sense_size; int sense_buffer_address; } ;
struct mly_command {size_t mc_length; size_t mc_sense; int * mc_data; TYPE_3__* mc_packet; int mc_status; int mc_flags; } ;
struct TYPE_5__ {size_t data_size; } ;
struct TYPE_6__ {TYPE_2__ generic; struct mly_command_ioctl ioctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mly_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,void*,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (size_t,int ,int ) ;
 scalar_t__ FUNC_5 (struct mly_softc*,struct mly_command**) ;
 int FUNC_6 (struct mly_command*) ;
 int FUNC_7 (struct mly_command*) ;

__attribute__((used)) static int
FUNC_8(struct mly_softc *VAR_7, struct mly_command_ioctl *VAR_8, void **VAR_9, size_t VAR_10,
   u_int8_t *VAR_11, void *VAR_12, size_t *VAR_13)
{
    struct mly_command *VAR_14;
    struct mly_command_ioctl *VAR_15;
    int VAR_16;

    FUNC_2(1);
    FUNC_0(VAR_7);

    VAR_14 = ((void*)0);
    if (FUNC_5(VAR_7, &VAR_14)) {
 VAR_16 = VAR_0;
 goto out;
    }


    VAR_15 = &VAR_14->mc_packet->ioctl;
    VAR_8->sense_buffer_address = VAR_15->sense_buffer_address;
    VAR_8->maximum_sense_size = VAR_15->maximum_sense_size;
    *VAR_15 = *VAR_8;
    VAR_15->opcode = VAR_1;
    VAR_15->timeout.value = 30;
    VAR_15->timeout.scale = VAR_4;


    if (VAR_9 != ((void*)0)) {
 if (*VAR_9 == ((void*)0)) {

     if ((VAR_14->mc_data = FUNC_4(VAR_10, VAR_5, VAR_6)) == ((void*)0)) {
  VAR_16 = VAR_0;
  goto out;
     }
     VAR_14->mc_flags |= VAR_2;
 } else {
     VAR_14->mc_data = *VAR_9;
     VAR_14->mc_flags |= VAR_3;
 }
 VAR_14->mc_length = VAR_10;
 VAR_14->mc_packet->generic.data_size = VAR_10;
    }


    if ((VAR_16 = FUNC_6(VAR_14)))
 goto out;


    *VAR_11 = VAR_14->mc_status;
    if ((VAR_14->mc_sense > 0) && (VAR_12 != ((void*)0))) {
 FUNC_1(VAR_14->mc_packet, VAR_12, VAR_14->mc_sense);
 *VAR_13 = VAR_14->mc_sense;
 goto out;
    }


    if ((VAR_9 != ((void*)0)) && (*VAR_9 == ((void*)0)))
 *VAR_9 = VAR_14->mc_data;


    VAR_16 = 0;

out:
    if (VAR_14 != ((void*)0)) {

 if (VAR_16 && (VAR_14->mc_data != ((void*)0)) && (*VAR_9 == ((void*)0)))
     FUNC_3(VAR_14->mc_data, VAR_5);
 FUNC_7(VAR_14);
    }
    return(VAR_16);
}
