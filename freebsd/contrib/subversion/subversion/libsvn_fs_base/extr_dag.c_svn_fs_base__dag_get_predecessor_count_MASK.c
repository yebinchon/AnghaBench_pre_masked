
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int predecessor_count; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_6__ {int id; int fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,int ,int ,int *,int *) ;

svn_error_t *
FUNC_2(int *VAR_1,
                                       dag_node_t *VAR_2,
                                       trail_t *VAR_3,
                                       apr_pool_t *VAR_4)
{
  node_revision_t *VAR_5;

  FUNC_0(FUNC_1(&VAR_5, VAR_2->fs, VAR_2->id,
                                        VAR_3, VAR_4));
  *VAR_1 = VAR_5->predecessor_count;
  return VAR_0;
}
