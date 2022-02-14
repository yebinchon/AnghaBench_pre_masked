
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {TYPE_1__* prop_rep; } ;
typedef TYPE_2__ node_revision_t ;
struct TYPE_10__ {int fs; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_8__ {int expanded_size; int txn_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__**,TYPE_3__*) ;
 int FUNC_3 (int **,int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (int *) ;

svn_error_t *
FUNC_5(svn_boolean_t *VAR_2,
                         dag_node_t *VAR_3,
                         apr_pool_t *VAR_4)
{
  node_revision_t *VAR_5;

  FUNC_0(FUNC_2(&VAR_5, VAR_3));

  if (! VAR_5->prop_rep)
    {
      *VAR_2 = VAR_0;
      return VAR_1;
    }

  if (FUNC_4(&VAR_5->prop_rep->txn_id))
    {

      apr_hash_t *VAR_6;

      FUNC_0(FUNC_3(&VAR_6, VAR_3->fs,
                                      VAR_5, VAR_4));

      *VAR_2 = VAR_6 ? (0 < FUNC_1(VAR_6)) : VAR_0;
    }
  else
    {


      *VAR_2 = VAR_5->prop_rep->expanded_size > 4;
    }

  return VAR_1;
}
