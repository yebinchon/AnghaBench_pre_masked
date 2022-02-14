
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_tx_rings; int num_rx_rings; int pci_dev; } ;
typedef TYPE_1__ qla_host_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,int,void*,int ,int ,char*,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_5(qla_host_t *VAR_8)
{
        device_t VAR_9;

        VAR_9 = VAR_8->pci_dev;

 VAR_8->num_rx_rings = VAR_3; VAR_8->num_tx_rings = VAR_4;

 FUNC_1(FUNC_3(VAR_9),
  FUNC_2(FUNC_4(VAR_9)),
  VAR_5, "num_rx_rings", VAR_0, &VAR_8->num_rx_rings,
  VAR_8->num_rx_rings, "Number of Completion Queues");

        FUNC_1(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_5, "num_tx_rings", VAR_0, &VAR_8->num_tx_rings,
  VAR_8->num_tx_rings, "Number of Transmit Rings");

        FUNC_0(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_5, "mpi_dump", VAR_2 | VAR_1,
                (void *)VAR_8, 0,
                VAR_7, "I", "MPI Dump");

        FUNC_0(FUNC_3(VAR_9),
                FUNC_2(FUNC_4(VAR_9)),
                VAR_5, "link_status", VAR_2 | VAR_1,
                (void *)VAR_8, 0,
                VAR_6, "I", "Link Status");
}
