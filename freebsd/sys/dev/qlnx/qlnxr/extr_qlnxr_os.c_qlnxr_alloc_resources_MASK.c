
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int uint16_t ;
struct regpair {int dummy; } ;
struct qlnxr_dev {int num_cnq; TYPE_2__* ha; TYPE_4__* cnq_array; TYPE_4__* sb_array; scalar_t__ sb_start; int rdma_ctx; int qpidr; int sgid_lock; int idr_lock; TYPE_4__* sgid_tbl; } ;
struct qlnxr_cnq {int dummy; } ;
struct ecore_sb_info {int dummy; } ;
struct TYPE_8__ {int pci_func; int cdev; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_9__ {int index; int name; TYPE_1__* sb_virt; int * hw_cons_ptr; struct TYPE_9__* sb; struct qlnxr_dev* dev; int pbl; } ;
struct TYPE_7__ {int * pi_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__*,scalar_t__) ;
 int FUNC_8 (struct qlnxr_dev*) ;
 int FUNC_9 (int ,char*,int,int) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_10(struct qlnxr_dev *VAR_11)
{
 uint16_t VAR_12;
 int VAR_13, VAR_14;
 qlnx_host_t *VAR_15;

 VAR_15 = VAR_11->ha;

        FUNC_0(VAR_15, "enter\n");

        FUNC_1(VAR_11->sgid_tbl, (sizeof (union ib_gid) * VAR_8));

        FUNC_6(&VAR_11->idr_lock, "idr_lock", ((void*)0), VAR_6);
        FUNC_6(&VAR_11->sgid_lock, "sgid_lock", ((void*)0), VAR_6);

        FUNC_4(&VAR_11->qpidr);

        FUNC_1(VAR_11->sb_array, (sizeof (struct ecore_sb_info) * VAR_7));
        FUNC_1(VAR_11->cnq_array, (sizeof (struct qlnxr_cnq) * VAR_7));

        VAR_11->sb_start = FUNC_3(VAR_11->rdma_ctx, 0);

        FUNC_0(VAR_15, "dev->sb_start = 0x%x\n", VAR_11->sb_start);



        VAR_12 = FUNC_5(VAR_10, VAR_3, VAR_9);

        for (VAR_13 = 0; VAR_13 < VAR_11->num_cnq; VAR_13++) {
                VAR_14 = FUNC_7(VAR_11->ha, &VAR_11->sb_array[VAR_13],
                                       VAR_11->sb_start + VAR_13);
                if (VAR_14)
                        goto qlnxr_alloc_resources_exit;

                VAR_14 = FUNC_2(&VAR_11->ha->cdev,
                                VAR_2,
                                VAR_1,
                                VAR_0,
                                VAR_12,
                                sizeof(struct regpair *),
                                &VAR_11->cnq_array[VAR_13].pbl,
                                ((void*)0));


                VAR_11->cnq_array[VAR_13].dev = VAR_11;
                VAR_11->cnq_array[VAR_13].sb = &VAR_11->sb_array[VAR_13];
                VAR_11->cnq_array[VAR_13].hw_cons_ptr =
                        &(VAR_11->sb_array[VAR_13].sb_virt->pi_array[VAR_4]);
                VAR_11->cnq_array[VAR_13].index = VAR_13;
                FUNC_9(VAR_11->cnq_array[VAR_13].name, "qlnxr%d@pci:%d",
                        VAR_13, (VAR_11->ha->pci_func));

        }

 FUNC_0(VAR_15, "exit\n");
        return 0;

qlnxr_alloc_resources_exit:

 FUNC_8(VAR_11);

 FUNC_0(VAR_15, "exit -ENOMEM\n");
        return -VAR_5;
}
