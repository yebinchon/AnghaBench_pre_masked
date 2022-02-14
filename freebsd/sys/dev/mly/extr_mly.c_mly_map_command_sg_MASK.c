
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mly_softc {scalar_t__ mly_sg_busaddr; struct mly_sg_entry* mly_sg_table; } ;
struct mly_sg_entry {int length; int physaddr; } ;
struct TYPE_12__ {int extended_sg_table; } ;
struct TYPE_10__ {int* entries; scalar_t__* table_physaddr; } ;
struct TYPE_9__ {struct mly_sg_entry* sg; } ;
struct TYPE_11__ {TYPE_3__ indirect; TYPE_2__ direct; } ;
struct mly_command_generic {TYPE_5__ command_control; TYPE_4__ transfer; } ;
struct mly_command {int mc_slot; TYPE_1__* mc_packet; struct mly_softc* mc_sc; } ;
struct TYPE_13__ {int ds_len; int ds_addr; } ;
typedef TYPE_6__ bus_dma_segment_t ;
struct TYPE_8__ {struct mly_command_generic generic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2, bus_dma_segment_t *VAR_3, int VAR_4, int VAR_5)
{
    struct mly_command *VAR_6 = (struct mly_command *)VAR_2;
    struct mly_softc *VAR_7 = VAR_6->mc_sc;
    struct mly_command_generic *VAR_8 = &(VAR_6->mc_packet->generic);
    struct mly_sg_entry *VAR_9;
    int VAR_10, VAR_11;

    FUNC_0(2);


    if (VAR_4 <= 2) {
 VAR_9 = &VAR_8->transfer.direct.sg[0];
 VAR_8->command_control.extended_sg_table = 0;
    } else {
 VAR_11 = ((VAR_6->mc_slot - VAR_1) * VAR_0);
 VAR_9 = VAR_7->mly_sg_table + VAR_11;
 VAR_8->transfer.indirect.entries[0] = VAR_4;
 VAR_8->transfer.indirect.table_physaddr[0] = VAR_7->mly_sg_busaddr + (VAR_11 * sizeof(struct mly_sg_entry));
 VAR_8->command_control.extended_sg_table = 1;
    }


    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
 VAR_9[VAR_10].physaddr = VAR_3[VAR_10].ds_addr;
 VAR_9[VAR_10].length = VAR_3[VAR_10].ds_len;
    }

}
