
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int * mly_packet; int mly_packetmap; int mly_packet_dmat; int mly_buffer_dmat; } ;
struct mly_command {int mc_datamap; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (struct mly_softc*,struct mly_command**) ;

__attribute__((used)) static void
FUNC_4(struct mly_softc *VAR_0)
{
    struct mly_command *VAR_1;


    while (FUNC_3(VAR_0, &VAR_1) == 0)
 FUNC_0(VAR_0->mly_buffer_dmat, VAR_1->mc_datamap);


    if (VAR_0->mly_packet != ((void*)0)) {
 FUNC_1(VAR_0->mly_packet_dmat, VAR_0->mly_packetmap);
 FUNC_2(VAR_0->mly_packet_dmat, VAR_0->mly_packet, VAR_0->mly_packetmap);
 VAR_0->mly_packet = ((void*)0);
    }
}
