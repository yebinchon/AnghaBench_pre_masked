
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_fs_id_t ;
struct TYPE_5__ {int number; int revision; } ;
struct TYPE_8__ {int number; int revision; } ;
struct TYPE_6__ {TYPE_1__ rev_item; TYPE_4__ txn_id; int copy_id; int node_id; } ;
struct TYPE_7__ {TYPE_2__ private_id; } ;
typedef TYPE_3__ fs_fs__id_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int * FUNC_3 (char*,int,int *) ;
 char* FUNC_4 (char*,int *) ;

svn_string_t *
FUNC_5(const svn_fs_id_t *VAR_1,
                      apr_pool_t *VAR_2)
{
  char VAR_3[6 * VAR_0 + 10];
  const fs_fs__id_t *VAR_4 = (const fs_fs__id_t *)VAR_1;

  char *VAR_5 = FUNC_4(VAR_3, &VAR_4->private_id.node_id);
  VAR_5 = FUNC_4(VAR_5, &VAR_4->private_id.copy_id);

  if (FUNC_2(&VAR_4->private_id.txn_id))
    {
      *(VAR_5++) = 't';
      VAR_5 += FUNC_0(VAR_5, VAR_4->private_id.txn_id.revision);
      *(VAR_5++) = '-';
      VAR_5 += FUNC_1(VAR_5, VAR_4->private_id.txn_id.number);
    }
  else
    {
      *(VAR_5++) = 'r';
      VAR_5 += FUNC_0(VAR_5, VAR_4->private_id.rev_item.revision);
      *(VAR_5++) = '/';
      VAR_5 += FUNC_0(VAR_5, VAR_4->private_id.rev_item.number);
    }

  return FUNC_3(VAR_3, VAR_5 - VAR_3, VAR_2);
}
