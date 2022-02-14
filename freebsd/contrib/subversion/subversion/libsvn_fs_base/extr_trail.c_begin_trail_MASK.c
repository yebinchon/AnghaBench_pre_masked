
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * db_txn; TYPE_3__* fs; int pool; } ;
typedef TYPE_2__ trail_t ;
struct TYPE_12__ {TYPE_4__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_13__ {scalar_t__ in_txn_trail; TYPE_1__* bdb; } ;
typedef TYPE_4__ base_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {int (* txn_begin ) (TYPE_5__*,int ,int **,int ) ;} ;
struct TYPE_10__ {TYPE_5__* env; } ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_5__*,int ,int **,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(trail_t **VAR_2,
            svn_fs_t *VAR_3,
            svn_boolean_t VAR_4,
            apr_pool_t *VAR_5)
{
  base_fs_data_t *VAR_6 = VAR_3->fsap_data;
  trail_t *VAR_7 = FUNC_4(VAR_5, sizeof(*VAR_7));

  VAR_7->pool = FUNC_6(VAR_5);
  VAR_7->fs = VAR_3;
  if (VAR_4)
    {



      FUNC_3(! VAR_6->in_txn_trail);

      FUNC_2(FUNC_0(VAR_3, FUNC_1("beginning Berkeley DB transaction"),
                       VAR_6->bdb->env->txn_begin(VAR_6->bdb->env, 0,
                                                &VAR_7->db_txn, 0)));
      VAR_6->in_txn_trail = VAR_1;
    }
  else
    {
      VAR_7->db_txn = ((void*)0);
    }

  *VAR_2 = VAR_7;
  return VAR_0;
}
