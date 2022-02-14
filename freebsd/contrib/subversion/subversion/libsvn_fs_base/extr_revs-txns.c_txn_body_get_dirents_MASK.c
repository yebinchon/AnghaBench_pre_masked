
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct get_dirents_args {int ** dirents; int txn_id; int id; } ;
typedef int dag_node_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int **,int *,TYPE_1__*,int ) ;
 int FUNC_3 (int **,int ,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_2, trail_t *VAR_3)
{
  struct get_dirents_args *VAR_4 = VAR_2;
  dag_node_t *VAR_5;


  FUNC_0(FUNC_3(&VAR_5, VAR_3->fs, VAR_4->id,
                                    VAR_3, VAR_3->pool));


  if (! FUNC_1(VAR_5, VAR_4->txn_id))
    return VAR_0;


  *(VAR_4->dirents) = ((void*)0);
  if (FUNC_4(VAR_5) != VAR_1)
    return VAR_0;


  return FUNC_2(VAR_4->dirents, VAR_5,
                                      VAR_3, VAR_3->pool);
}
