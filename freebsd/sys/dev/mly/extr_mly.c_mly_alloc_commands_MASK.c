
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union mly_command_packet {int dummy; } mly_command_packet ;
struct mly_softc {int mly_buffer_dmat; scalar_t__ mly_packetphys; scalar_t__ mly_packet; struct mly_command* mly_command; int mly_packetmap; int mly_packet_dmat; TYPE_1__* mly_controllerinfo; } ;
struct mly_command {int mc_datamap; scalar_t__ mc_packetphys; scalar_t__ mc_packet; scalar_t__ mc_slot; struct mly_softc* mc_sc; } ;
struct TYPE_2__ {int maximum_parallel_commands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,int,int ,struct mly_softc*,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (struct mly_command*,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct mly_command*) ;

__attribute__((used)) static int
FUNC_6(struct mly_softc *VAR_5)
{
    struct mly_command *VAR_6;
    int VAR_7, VAR_8;

    if (VAR_5->mly_controllerinfo == ((void*)0)) {
 VAR_8 = 4;
    } else {
 VAR_8 = FUNC_4(VAR_2, VAR_5->mly_controllerinfo->maximum_parallel_commands);
    }





    if (FUNC_2(VAR_5->mly_packet_dmat, (void **)&VAR_5->mly_packet,
    VAR_0, &VAR_5->mly_packetmap)) {
 return(VAR_1);
    }
    if (FUNC_1(VAR_5->mly_packet_dmat, VAR_5->mly_packetmap, VAR_5->mly_packet,
   VAR_8 * sizeof(union mly_command_packet),
   VAR_4, VAR_5, VAR_0) != 0)
 return (VAR_1);

    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
 VAR_6 = &VAR_5->mly_command[VAR_7];
 FUNC_3(VAR_6, sizeof(*VAR_6));
 VAR_6->mc_sc = VAR_5;
 VAR_6->mc_slot = VAR_3 + VAR_7;
 VAR_6->mc_packet = VAR_5->mly_packet + VAR_7;
 VAR_6->mc_packetphys = VAR_5->mly_packetphys + (VAR_7 * sizeof(union mly_command_packet));
 if (!FUNC_0(VAR_5->mly_buffer_dmat, 0, &VAR_6->mc_datamap))
     FUNC_5(VAR_6);
    }
    return(0);
}
