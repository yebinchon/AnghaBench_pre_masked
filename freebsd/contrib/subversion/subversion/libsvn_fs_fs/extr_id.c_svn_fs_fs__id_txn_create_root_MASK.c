
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
struct TYPE_8__ {TYPE_4__* fsap_data; int * vtable; } ;
struct TYPE_6__ {int revision; } ;
struct TYPE_7__ {TYPE_1__ rev_item; int txn_id; } ;
struct TYPE_9__ {TYPE_3__ generic_id; TYPE_2__ private_id; } ;
typedef TYPE_4__ fs_fs__id_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,int) ;
 int VAR_1 ;

svn_fs_id_t *
FUNC_1(const svn_fs_fs__id_part_t *VAR_2,
                              apr_pool_t *VAR_3)
{
  fs_fs__id_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));



  VAR_4->private_id.txn_id = *VAR_2;
  VAR_4->private_id.rev_item.revision = VAR_0;

  VAR_4->generic_id.vtable = &VAR_1;
  VAR_4->generic_id.fsap_data = VAR_4;

  return (svn_fs_id_t *)VAR_4;
}
