
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pci_dev; } ;
typedef TYPE_1__ qla_host_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_4(qla_host_t *VAR_4)
{
        device_t VAR_5;

        VAR_5 = VAR_4->pci_dev;

        FUNC_0(FUNC_2(VAR_5),
                FUNC_1(FUNC_3(VAR_5)),
                VAR_1, "num_rds_rings", VAR_0, &VAR_2,
  VAR_2, "Number of Rcv Descriptor Rings");

        FUNC_0(FUNC_2(VAR_5),
                FUNC_1(FUNC_3(VAR_5)),
                VAR_1, "num_sds_rings", VAR_0, &VAR_3,
  VAR_3, "Number of Status Descriptor Rings");
}
