
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int mergeinfo_count; scalar_t__ kind; int id; } ;
typedef TYPE_2__ node_revision_t ;
struct TYPE_12__ {int fs; int id; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_2__**,TYPE_3__*) ;
 int * FUNC_4 (int ,int *,char*,int ,...) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_1__* FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int ,TYPE_2__*,int ,int *) ;
 scalar_t__ VAR_5 ;

svn_error_t *
FUNC_8(dag_node_t *VAR_6,
                                         apr_int64_t VAR_7,
                                         apr_pool_t *VAR_8)
{
  node_revision_t *VAR_9;


  if (! FUNC_5(VAR_6))
    {
      svn_string_t *VAR_10 = FUNC_6(VAR_6->id, VAR_8);
      return FUNC_4
        (VAR_3, ((void*)0),
         "Can't increment mergeinfo count on *immutable* node-revision %s",
         VAR_10->data);
    }

  if (VAR_7 == 0)
    return VAR_4;


  FUNC_0(FUNC_3(&VAR_9, VAR_6));

  VAR_9->mergeinfo_count += VAR_7;
  if (VAR_9->mergeinfo_count < 0)
    {
      svn_string_t *VAR_11 = FUNC_6(VAR_6->id, VAR_8);
      return FUNC_4
        (VAR_2, ((void*)0),
         FUNC_2(VAR_8,
                      FUNC_1("Can't increment mergeinfo count on node-revision %%s "
                        "to negative value %%%s"),
                      VAR_0),
         VAR_11->data, VAR_9->mergeinfo_count);
    }
  if (VAR_9->mergeinfo_count > 1 && VAR_9->kind == VAR_5)
    {
      svn_string_t *VAR_12 = FUNC_6(VAR_6->id, VAR_8);
      return FUNC_4
        (VAR_2, ((void*)0),
         FUNC_2(VAR_8,
                      FUNC_1("Can't increment mergeinfo count on *file* "
                        "node-revision %%s to %%%s (> 1)"),
                      VAR_0),
         VAR_12->data, VAR_9->mergeinfo_count);
    }


  return FUNC_7(VAR_6->fs, VAR_9->id,
                                      VAR_9, VAR_1, VAR_8);
}
