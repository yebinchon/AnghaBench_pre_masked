
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_14__ {int kind; } ;
typedef TYPE_2__ svn_checksum_t ;
struct TYPE_15__ {TYPE_1__* node_revision; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int created_path; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__ const*,TYPE_2__*) ;
 int * FUNC_3 (TYPE_2__ const*,TYPE_2__*,int *,int ,int ) ;
 int FUNC_4 (TYPE_2__**,TYPE_3__*,int ,int *) ;
 int FUNC_5 (TYPE_3__*) ;

svn_error_t *
FUNC_6(dag_node_t *VAR_1,
                             const svn_checksum_t *VAR_2,
                             apr_pool_t *VAR_3)
{
  if (VAR_2)
    {
      svn_checksum_t *VAR_4;

      FUNC_0(FUNC_4(&VAR_4, VAR_1,
                                          VAR_2->kind, VAR_3));
      if (!FUNC_2(VAR_2, VAR_4))
        return FUNC_3(VAR_2, VAR_4,
                                         VAR_3,
                                         FUNC_1("Checksum mismatch for '%s'"),
                                         VAR_1->node_revision->created_path);
    }

  FUNC_5(VAR_1);
  return VAR_0;
}
