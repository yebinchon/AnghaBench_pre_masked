
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct qlnxr_dev {int num_cnq; int sgid_lock; int idr_lock; TYPE_3__* sgid_tbl; TYPE_3__* sb_array; TYPE_3__* cnq_array; TYPE_1__* ha; int * iwarp_wq; } ;
struct qlnxr_cnq {int dummy; } ;
struct ecore_sb_info {int dummy; } ;
struct TYPE_6__ {int cdev; } ;
typedef TYPE_1__ qlnx_host_t ;
struct TYPE_7__ {int pbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_8(struct qlnxr_dev *VAR_2)
{
        int VAR_3;
 qlnx_host_t *VAR_4;

 VAR_4 = VAR_2->ha;

 FUNC_1(VAR_4, "enter dev->num_cnq = %d\n", VAR_2->num_cnq);

 if (FUNC_0(VAR_2)) {
  if (VAR_2->iwarp_wq != ((void*)0))
   FUNC_3(VAR_2->iwarp_wq);
 }

        for (VAR_3 = 0; VAR_3 < VAR_2->num_cnq; VAR_3++) {
                FUNC_7(VAR_2->ha, &VAR_2->sb_array[VAR_3]);
                FUNC_4(&VAR_2->ha->cdev, &VAR_2->cnq_array[VAR_3].pbl);
        }

 FUNC_2(VAR_2->cnq_array, (sizeof(struct qlnxr_cnq) * VAR_0));
 FUNC_2(VAR_2->sb_array, (sizeof(struct ecore_sb_info) * VAR_0));
 FUNC_2(VAR_2->sgid_tbl, (sizeof(union ib_gid) * VAR_1));

 if (FUNC_6(&VAR_2->idr_lock))
  FUNC_5(&VAR_2->idr_lock);

 if (FUNC_6(&VAR_2->sgid_lock))
  FUNC_5(&VAR_2->sgid_lock);

 FUNC_1(VAR_4, "exit\n");
 return;
}
