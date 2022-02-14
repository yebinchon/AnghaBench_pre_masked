
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_id_t ;
struct TYPE_7__ {TYPE_5__* fsap_data; int * vtable; } ;
struct TYPE_10__ {int number; int revision; } ;
struct TYPE_8__ {int revision; } ;
struct TYPE_9__ {TYPE_4__ rev_item; TYPE_2__ txn_id; } ;
struct TYPE_11__ {TYPE_1__ generic_id; TYPE_3__ private_id; } ;
typedef TYPE_5__ fs_fs__id_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int *,int) ;
 int VAR_2 ;

svn_fs_id_t *FUNC_1(const svn_revnum_t VAR_3,
                                       apr_pool_t *VAR_4)
{
  fs_fs__id_t *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));

  VAR_5->private_id.txn_id.revision = VAR_1;
  VAR_5->private_id.rev_item.revision = VAR_3;
  VAR_5->private_id.rev_item.number = VAR_0;

  VAR_5->generic_id.vtable = &VAR_2;
  VAR_5->generic_id.fsap_data = VAR_5;

  return (svn_fs_id_t *)VAR_5;
}
