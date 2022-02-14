
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union mly_command_packet {int dummy; } mly_command_packet ;
struct mly_command {TYPE_2__* mc_packet; int mc_packetphys; int * mc_private; int * mc_complete; scalar_t__ mc_flags; int * mc_data; } ;
struct TYPE_3__ {int maximum_sense_size; int sense_buffer_address; } ;
struct TYPE_4__ {TYPE_1__ generic; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mly_command*) ;

__attribute__((used)) static void
FUNC_2(struct mly_command *VAR_0)
{
    FUNC_0(3);





    VAR_0->mc_data = ((void*)0);
    VAR_0->mc_flags = 0;
    VAR_0->mc_complete = ((void*)0);
    VAR_0->mc_private = ((void*)0);





    VAR_0->mc_packet->generic.sense_buffer_address = VAR_0->mc_packetphys;
    VAR_0->mc_packet->generic.maximum_sense_size = sizeof(union mly_command_packet);

    FUNC_1(VAR_0);
}
