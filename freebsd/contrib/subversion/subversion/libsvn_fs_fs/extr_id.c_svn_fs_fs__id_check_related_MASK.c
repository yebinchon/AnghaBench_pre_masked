
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_id_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {scalar_t__ revision; } ;
struct TYPE_5__ {TYPE_3__ node_id; TYPE_3__ txn_id; } ;
struct TYPE_6__ {TYPE_1__ private_id; } ;
typedef TYPE_2__ fs_fs__id_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;

svn_boolean_t
FUNC_1(const svn_fs_id_t *VAR_3,
                            const svn_fs_id_t *VAR_4)
{
  const fs_fs__id_t *VAR_5 = (const fs_fs__id_t *)VAR_3;
  const fs_fs__id_t *VAR_6 = (const fs_fs__id_t *)VAR_4;

  if (VAR_3 == VAR_4)
    return VAR_2;
  if ( VAR_5->private_id.node_id.revision == VAR_1
      && VAR_6->private_id.node_id.revision == VAR_1)
    {
      if (!FUNC_0(&VAR_5->private_id.txn_id,
                                 &VAR_6->private_id.txn_id))
        return VAR_0;


    }

  return FUNC_0(&VAR_5->private_id.node_id,
                               &VAR_6->private_id.node_id);
}
