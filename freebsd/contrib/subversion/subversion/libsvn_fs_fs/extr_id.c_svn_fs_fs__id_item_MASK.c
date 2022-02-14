
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_id_t ;
struct TYPE_4__ {int number; } ;
struct TYPE_5__ {TYPE_1__ rev_item; } ;
struct TYPE_6__ {TYPE_2__ private_id; } ;
typedef TYPE_3__ fs_fs__id_t ;
typedef int apr_uint64_t ;



apr_uint64_t
FUNC_0(const svn_fs_id_t *VAR_0)
{
  const fs_fs__id_t *VAR_1 = (const fs_fs__id_t *)VAR_0;

  return VAR_1->private_id.rev_item.number;
}
