
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
struct TYPE_8__ {int * copies; int base_rev; } ;
typedef TYPE_2__ svn_fs_x__transaction_t ;
struct TYPE_7__ {int change_set; } ;
struct TYPE_9__ {TYPE_1__ predecessor_id; } ;
typedef TYPE_3__ svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__**,int *,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

svn_error_t *
FUNC_5(svn_fs_x__transaction_t **VAR_1,
                  svn_fs_t *VAR_2,
                  svn_fs_x__txn_id_t VAR_3,
                  apr_pool_t *VAR_4)
{
  svn_fs_x__transaction_t *VAR_5;
  svn_fs_x__noderev_t *VAR_6;
  svn_fs_x__id_t VAR_7;

  VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
  FUNC_4(&VAR_7, VAR_3);

  FUNC_0(FUNC_2(&VAR_6, VAR_2, &VAR_7, VAR_4, VAR_4));

  VAR_5->base_rev = FUNC_3(VAR_6->predecessor_id.change_set);
  VAR_5->copies = ((void*)0);

  *VAR_1 = VAR_5;

  return VAR_0;
}
