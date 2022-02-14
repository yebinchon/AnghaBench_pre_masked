
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_9__ {int mergeinfo_count; scalar_t__ kind; int noderev_id; } ;
typedef TYPE_2__ svn_fs_x__noderev_t ;
typedef int svn_error_t ;
struct TYPE_10__ {TYPE_2__* node_revision; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (TYPE_3__*,int *) ;
 int * FUNC_3 (int ,int *,char*,int ,...) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_1__* FUNC_5 (int *,int *) ;
 scalar_t__ VAR_4 ;

svn_error_t *
FUNC_6(dag_node_t *VAR_5,
                                        apr_int64_t VAR_6,
                                        apr_pool_t *VAR_7)
{
  svn_fs_x__noderev_t *VAR_8 = VAR_5->node_revision;


  if (! FUNC_4(VAR_5))
    {
      svn_string_t *VAR_9 = FUNC_5(&VAR_8->noderev_id,
                                                 VAR_7);
      return FUNC_3
        (VAR_2, ((void*)0),
         "Can't increment mergeinfo count on *immutable* node-revision %s",
         VAR_9->data);
    }

  if (VAR_6 == 0)
    return VAR_3;

  VAR_8->mergeinfo_count += VAR_6;
  if (VAR_8->mergeinfo_count < 0)
    {
      svn_string_t *VAR_10 = FUNC_5(&VAR_8->noderev_id,
                                                 VAR_7);
      return FUNC_3
        (VAR_1, ((void*)0),
         FUNC_1(VAR_7,
                      FUNC_0("Can't increment mergeinfo count on node-revision %%s "
                        "to negative value %%%s"),
                      VAR_0),
         VAR_10->data, VAR_8->mergeinfo_count);
    }
  if (VAR_8->mergeinfo_count > 1 && VAR_8->kind == VAR_4)
    {
      svn_string_t *VAR_11 = FUNC_5(&VAR_8->noderev_id,
                                                 VAR_7);
      return FUNC_3
        (VAR_1, ((void*)0),
         FUNC_1(VAR_7,
                      FUNC_0("Can't increment mergeinfo count on *file* "
                        "node-revision %%s to %%%s (> 1)"),
                      VAR_0),
         VAR_11->data, VAR_8->mergeinfo_count);
    }


  return FUNC_2(VAR_5, VAR_7);
}
