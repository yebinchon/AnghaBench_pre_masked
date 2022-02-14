
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int u8 ;
typedef int u32 ;
struct qlnxr_dev {TYPE_4__* ha; } ;
struct TYPE_6__ {int value; int agg_flags; } ;
struct TYPE_8__ {int raw; TYPE_1__ data; } ;
struct qlnxr_cq {TYPE_3__ db; scalar_t__ db_addr; } ;
struct TYPE_7__ {scalar_t__ doorbells; } ;
struct TYPE_9__ {int pci_dbells; TYPE_2__ cdev; } ;
typedef TYPE_4__ qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct qlnxr_dev *VAR_1, struct qlnxr_cq *VAR_2, u32 VAR_3, u8 VAR_4)
{
 uint64_t VAR_5;
 qlnx_host_t *VAR_6 = VAR_1->ha;

 FUNC_0(VAR_6, "enter\n");

 FUNC_4();
 VAR_2->db.data.agg_flags = VAR_4;
 VAR_2->db.data.value = FUNC_3(VAR_3);

 VAR_5 = (uint64_t)((uint8_t *)VAR_2->db_addr -
    (uint8_t *)(VAR_6->cdev.doorbells));

 FUNC_2(VAR_6->pci_dbells, VAR_5, VAR_2->db.raw);
 FUNC_1(VAR_6->pci_dbells, 0, 0, VAR_0);

 FUNC_0(VAR_6, "exit\n");
 return;
}
