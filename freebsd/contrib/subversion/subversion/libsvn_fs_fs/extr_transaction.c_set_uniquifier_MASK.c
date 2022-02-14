
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_12__ {int number; } ;
typedef TYPE_3__ svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int number; int noderev_txn_id; } ;
struct TYPE_13__ {TYPE_1__ uniquifier; int txn_id; } ;
typedef TYPE_4__ representation_t ;
struct TYPE_14__ {scalar_t__ format; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_t *VAR_2,
               representation_t *VAR_3,
               apr_pool_t *VAR_4)
{
  svn_fs_fs__id_part_t VAR_5;
  fs_fs_data_t *VAR_6 = VAR_2->fsap_data;

  if (VAR_6->format >= VAR_0)
    {
      FUNC_0(FUNC_1(&VAR_5, VAR_2, &VAR_3->txn_id, VAR_4));
      VAR_3->uniquifier.noderev_txn_id = VAR_3->txn_id;
      VAR_3->uniquifier.number = VAR_5.number;
    }

  return VAR_1;
}
