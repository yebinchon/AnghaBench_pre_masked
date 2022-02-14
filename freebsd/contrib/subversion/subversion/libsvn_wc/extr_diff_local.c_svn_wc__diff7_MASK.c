
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int (* dir_closed ) (int ,int ,int ,int ,TYPE_2__ const*,int ) ;int (* dir_changed ) (int ,int ,int ,int ,int ,scalar_t__,int ,TYPE_2__ const*,int ) ;} ;
typedef TYPE_2__ svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct node_state_t {int pool; struct node_state_t* parent; int baton; int right_src; int left_src; int relpath; scalar_t__ propchanges; int right_props; int left_props; int skip; } ;
struct diff_baton {char const* anchor_abspath; int ignore_ancestry; struct node_state_t* cur; int * pool; TYPE_2__ const* processor; int db; int member_0; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_15__ {scalar_t__ nelts; } ;
typedef TYPE_3__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ,int ,scalar_t__,int ,TYPE_2__ const*,int ) ;
 int FUNC_4 (int ,int ,int ,int ,TYPE_2__ const*,int ) ;
 void* FUNC_5 (char const*,int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (int **,TYPE_3__ const*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (TYPE_2__ const*,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_11 (int*,int ,char const*,int *) ;
 int FUNC_12 (scalar_t__*,int ,char const*,int,int,int,int *) ;
 int FUNC_13 (int ,char const*,int ,int,int,int,int *,int ,struct diff_baton*,int ,void*,int *) ;

svn_error_t *
FUNC_14(const char **VAR_5,
              svn_boolean_t *VAR_6,
              svn_wc_context_t *VAR_7,
              const char *VAR_8,
              svn_depth_t VAR_9,
              svn_boolean_t VAR_10,
              const apr_array_header_t *VAR_11,
              const svn_diff_tree_processor_t *VAR_12,
              svn_cancel_func_t VAR_13,
              void *VAR_14,
              apr_pool_t *VAR_15,
              apr_pool_t *VAR_16)
{
  struct diff_baton VAR_17 = { 0 };
  svn_node_kind_t VAR_18;
  svn_boolean_t VAR_19;

  FUNC_1(FUNC_6(VAR_8));
  FUNC_0(FUNC_12(&VAR_18, VAR_7->db, VAR_8,
                               VAR_0 ,
                               VAR_2 ,
                               VAR_0 ,
                               VAR_16));

  VAR_17.anchor_abspath = VAR_8;

  if (VAR_5)
    {
      svn_boolean_t VAR_20;

      FUNC_0(FUNC_11(&VAR_20,
                                   VAR_7->db, VAR_8, VAR_16));

      if (!VAR_20)
        VAR_17.anchor_abspath = FUNC_5(VAR_8, VAR_16);
    }
  else if (VAR_18 != VAR_4)
    VAR_17.anchor_abspath = FUNC_5(VAR_8, VAR_16);

  if (VAR_5)
    *VAR_5 = FUNC_2(VAR_15,
                                FUNC_7(VAR_17.anchor_abspath,
                                                         VAR_8));
  if (VAR_6)
    *VAR_6 = (VAR_18 == VAR_4);


  if (VAR_11 && VAR_11->nelts)
    {
      apr_hash_t *VAR_21;

      FUNC_0(FUNC_8(&VAR_21, VAR_11,
                                         VAR_15));
      VAR_12 = FUNC_10(
                         VAR_12, VAR_7, VAR_8,
                         VAR_21, VAR_15);
    }

  VAR_17.db = VAR_7->db;
  VAR_17.processor = VAR_12;
  VAR_17.ignore_ancestry = VAR_10;
  VAR_17.pool = VAR_16;

  if (VAR_10)
    VAR_19 = VAR_2;
  else
    VAR_19 = VAR_0;


  FUNC_0(FUNC_13(VAR_7->db, VAR_8, VAR_9,
                                       VAR_19,
                                       VAR_2 ,
                                       VAR_0 ,
                                       ((void*)0) ,
                                       VAR_3, &VAR_17,
                                       VAR_13, VAR_14,
                                       VAR_16));


  while (VAR_17.cur)
    {
      struct node_state_t *VAR_22 = VAR_17.cur;

      if (!VAR_22->skip)
        {
          if (VAR_22->propchanges)
            FUNC_0(VAR_12->dir_changed(VAR_22->relpath,
                                                VAR_22->left_src,
                                                VAR_22->right_src,
                                                VAR_22->left_props,
                                                VAR_22->right_props,
                                                VAR_22->propchanges,
                                                VAR_22->baton,
                                                VAR_12,
                                                VAR_22->pool));
          else
            FUNC_0(VAR_12->dir_closed(VAR_22->relpath,
                                               VAR_22->left_src,
                                               VAR_22->right_src,
                                               VAR_22->baton,
                                               VAR_12,
                                               VAR_22->pool));
        }
      VAR_17.cur = VAR_22->parent;
      FUNC_9(VAR_22->pool);
    }

  return VAR_1;
}
