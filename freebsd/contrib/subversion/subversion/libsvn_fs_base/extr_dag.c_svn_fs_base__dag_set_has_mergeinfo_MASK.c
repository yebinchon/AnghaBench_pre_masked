
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_9__ {int mergeinfo_count; scalar_t__ has_mergeinfo; } ;
typedef TYPE_2__ node_revision_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,char const*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (TYPE_2__**,int *,int const*,TYPE_1__*,int *) ;
 int FUNC_8 (int *,int const*,TYPE_2__*,TYPE_1__*,int *) ;

svn_error_t *
FUNC_9(dag_node_t *VAR_3,
                                   svn_boolean_t VAR_4,
                                   svn_boolean_t *VAR_5,
                                   const char *VAR_6,
                                   trail_t *VAR_7,
                                   apr_pool_t *VAR_8)
{
  node_revision_t *VAR_9;
  svn_fs_t *VAR_10 = FUNC_4(VAR_3);
  const svn_fs_id_t *VAR_11 = FUNC_5(VAR_3);

  FUNC_0(FUNC_6
          (VAR_7->fs, "mergeinfo", VAR_1));

  if (! FUNC_3(VAR_3, VAR_6))
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_1("Attempted merge tracking info change on "
                               "immutable node"));

  FUNC_0(FUNC_7(&VAR_9, VAR_10, VAR_11, VAR_7, VAR_8));
  *VAR_5 = VAR_9->has_mergeinfo;


  if ((! VAR_4) != (! *VAR_5))
    {

      VAR_9->has_mergeinfo = VAR_4;


      if (VAR_4)
        VAR_9->mergeinfo_count++;
      else
        VAR_9->mergeinfo_count--;

      FUNC_0(FUNC_8(VAR_10, VAR_11, VAR_9, VAR_7, VAR_8));
    }
  return VAR_2;
}
