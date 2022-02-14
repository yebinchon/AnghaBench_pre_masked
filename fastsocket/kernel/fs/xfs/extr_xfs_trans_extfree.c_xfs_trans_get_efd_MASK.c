
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int t_mountp; } ;
typedef TYPE_1__ xfs_trans_t ;
typedef int xfs_efi_log_item_t ;
struct TYPE_8__ {int efd_item; } ;
typedef TYPE_2__ xfs_efd_log_item_t ;
typedef scalar_t__ uint ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int *) ;

xfs_efd_log_item_t *
FUNC_3(xfs_trans_t *VAR_0,
    xfs_efi_log_item_t *VAR_1,
    uint VAR_2)
{
 xfs_efd_log_item_t *VAR_3;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_2 > 0);

 VAR_3 = FUNC_1(VAR_0->t_mountp, VAR_1, VAR_2);
 FUNC_0(VAR_3 != ((void*)0));




 FUNC_2(VAR_0, &VAR_3->efd_item);
 return VAR_3;
}
