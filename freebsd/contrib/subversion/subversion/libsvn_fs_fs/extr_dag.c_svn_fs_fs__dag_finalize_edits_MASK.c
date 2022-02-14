
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_11__ {int kind; } ;
typedef TYPE_1__ svn_checksum_t ;
struct TYPE_12__ {int created_path; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__ const*,TYPE_1__*,int *,int ,int ) ;
 int FUNC_4 (TYPE_1__**,TYPE_2__*,int ,int *) ;

svn_error_t *
FUNC_5(dag_node_t *VAR_1,
                              const svn_checksum_t *VAR_2,
                              apr_pool_t *VAR_3)
{
  if (VAR_2)
    {
      svn_checksum_t *VAR_4;

      FUNC_0(FUNC_4(&VAR_4, VAR_1,
                                           VAR_2->kind, VAR_3));
      if (!FUNC_2(VAR_2, VAR_4))
        return FUNC_3(VAR_2, VAR_4, VAR_3,
                                         FUNC_1("Checksum mismatch for '%s'"),
                                         VAR_1->created_path);
    }

  return VAR_0;
}
