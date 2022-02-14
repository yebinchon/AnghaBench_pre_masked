
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct host_packet {int addr; } ;
struct ata_promise_sx4 {int busy; int mtx; int queue; } ;
struct ata_pci_controller {int r_res2; struct ata_promise_sx4* chipset_data; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct host_packet*,int ) ;
 int VAR_3 ;
 struct host_packet* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ata_pci_controller *VAR_4, u_int32_t VAR_5)
{
    struct ata_promise_sx4 *VAR_6 = VAR_4->chipset_data;

    FUNC_3(&VAR_6->mtx);
    if (VAR_6->busy) {
 struct host_packet *VAR_7 =
     FUNC_2(sizeof(struct host_packet), VAR_1, VAR_0 | VAR_2);
 VAR_7->addr = VAR_5;
 FUNC_1(&VAR_6->queue, VAR_7, VAR_3);
    }
    else {
 VAR_6->busy = 1;
 FUNC_0(VAR_4->r_res2, 0x000c0100, VAR_5);
    }
    FUNC_4(&VAR_6->mtx);
}
