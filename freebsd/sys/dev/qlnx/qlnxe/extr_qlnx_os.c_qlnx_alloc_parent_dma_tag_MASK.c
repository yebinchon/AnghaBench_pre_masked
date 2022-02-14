
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent_tag; } ;
struct TYPE_6__ {TYPE_1__ flags; int parent_tag; int pci_dev; } ;
typedef TYPE_2__ qlnx_host_t ;
typedef int device_t ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(qlnx_host_t *VAR_2)
{
        int VAR_3;
        device_t VAR_4;

        VAR_4 = VAR_2->pci_dev;




        VAR_3 = FUNC_1(
                        FUNC_2(VAR_4),
                        1,((bus_size_t)(1ULL << 32)),
                        VAR_0,
                        VAR_0,
                        ((void*)0), ((void*)0),
                        VAR_1,
                        0,
                        VAR_1,
                        0,
                        ((void*)0), ((void*)0),
                        &VAR_2->parent_tag);

        if (VAR_3) {
                FUNC_0(VAR_2, "could not create parent dma tag\n");
                return (-1);
        }

        VAR_2->flags.parent_tag = 1;

        return (0);
}
