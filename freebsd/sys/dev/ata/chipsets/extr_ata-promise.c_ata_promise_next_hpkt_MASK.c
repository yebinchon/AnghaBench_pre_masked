
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host_packet {int addr; } ;
struct ata_promise_sx4 {int mtx; scalar_t__ busy; int queue; } ;
struct ata_pci_controller {int r_res2; struct ata_promise_sx4* chipset_data; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 struct host_packet* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct host_packet*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct host_packet*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ata_pci_controller *VAR_2)
{
    struct ata_promise_sx4 *VAR_3 = VAR_2->chipset_data;
    struct host_packet *VAR_4;

    FUNC_4(&VAR_3->mtx);
    if ((VAR_4 = FUNC_1(&VAR_3->queue))) {
 FUNC_2(&VAR_3->queue, VAR_4, VAR_1);
 FUNC_0(VAR_2->r_res2, 0x000c0100, VAR_4->addr);
 FUNC_3(VAR_4, VAR_0);
    }
    else
 VAR_3->busy = 0;
    FUNC_5(&VAR_3->mtx);
}
