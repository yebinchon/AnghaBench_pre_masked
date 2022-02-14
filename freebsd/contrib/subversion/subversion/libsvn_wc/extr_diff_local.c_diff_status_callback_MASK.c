
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ node_status; scalar_t__ text_status; scalar_t__ prop_status; scalar_t__ kind; char const* moved_from_abspath; int copied; int versioned; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
struct node_state_t {int * baton; int * propchanges; int pool; int left_props; int right_props; scalar_t__ skip_children; struct node_state_t* parent; int right_src; int left_src; int relpath; int skip; int local_abspath; } ;
struct diff_baton {int cancel_baton; int cancel_func; struct node_state_t* cur; TYPE_2__* processor; int anchor_abspath; int * db; int ignore_ancestry; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_11__ {int (* dir_closed ) (int ,int ,int ,int *,TYPE_2__*,int ) ;int (* dir_changed ) (int ,int ,int ,int ,int ,int *,int *,TYPE_2__*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct diff_baton*,char const*,scalar_t__,int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *,int *,TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int ,int *,TYPE_2__*,int ) ;
 int VAR_4 ;
 char const* FUNC_4 (char const*,int *) ;
 int FUNC_5 (int ,char const*) ;
 char* FUNC_6 (int ,char const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int **,int ,int ,int ) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_10 (int *,int *,char const*,int ,int *) ;
 int FUNC_11 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_12 (int *,int *,char const*,int ,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (int *,char const*,char const*,int ,int ,TYPE_2__*,int *,int ,int ,int *) ;
 int FUNC_14 (int *,char const*,char const*,int ,TYPE_2__*,int *,int *) ;
 int FUNC_15 (int *,char const*,char const*,int ,TYPE_2__*,int *,scalar_t__,int ,int ,int *) ;
 int FUNC_16 (int *,char const*,char const*,int ,char const*,TYPE_2__*,int *,scalar_t__,int ,int ,int *) ;
 int FUNC_17 (int *,char const*,char const*,char const*,TYPE_2__*,int *,scalar_t__,int ,int ,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static svn_error_t *
FUNC_18(void *VAR_13,
                     const char *VAR_14,
                     const svn_wc_status3_t *VAR_15,
                     apr_pool_t *VAR_16)
{
  struct diff_baton *VAR_17 = VAR_13;
  svn_wc__db_t *VAR_18 = VAR_17->db;

  if (! VAR_15->versioned)
    return VAR_2;

  if (VAR_15->node_status == VAR_10
      && VAR_15->text_status == VAR_11
      && VAR_15->prop_status == VAR_11)
    {

      return VAR_2;
    }


  if (VAR_15->node_status == VAR_12 && !VAR_15->copied)
    return VAR_2;


  while (VAR_17->cur
         && !FUNC_5(VAR_17->cur->local_abspath, VAR_14))
    {
      struct node_state_t *VAR_19 = VAR_17->cur;

      if (!VAR_19->skip)
        {
          if (VAR_19->propchanges)
            FUNC_0(VAR_17->processor->dir_changed(VAR_19->relpath,
                                               VAR_19->left_src,
                                               VAR_19->right_src,
                                               VAR_19->left_props,
                                               VAR_19->right_props,
                                               VAR_19->propchanges,
                                               VAR_19->baton,
                                               VAR_17->processor,
                                               VAR_19->pool));
          else
            FUNC_0(VAR_17->processor->dir_closed(VAR_19->relpath,
                                              VAR_19->left_src,
                                              VAR_19->right_src,
                                              VAR_19->baton,
                                              VAR_17->processor,
                                              VAR_19->pool));
        }
      VAR_17->cur = VAR_19->parent;
      FUNC_7(VAR_19->pool);
    }
  FUNC_0(FUNC_1(VAR_17, FUNC_4(VAR_14, VAR_16),
                       VAR_0, VAR_16));

  if (VAR_17->cur && VAR_17->cur->skip_children)
    return VAR_2;






  {
    svn_boolean_t VAR_20;
    svn_boolean_t VAR_21;
    svn_wc__db_status_t VAR_22;
    svn_boolean_t VAR_23;
    svn_node_kind_t VAR_24;
    svn_node_kind_t VAR_25 = VAR_15->kind;
    svn_depth_t VAR_26 = VAR_4;

    const char *VAR_27 = VAR_14;
    const char *VAR_28 = FUNC_6(VAR_17->anchor_abspath,
                                                         VAR_14);


    VAR_20 = VAR_0;
    VAR_21 = VAR_0;



    FUNC_0(FUNC_11(&VAR_22, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 &VAR_23, ((void*)0), ((void*)0),
                                 VAR_17->db, VAR_14,
                                 VAR_16, VAR_16));
    if (!VAR_23)
      {
        VAR_21 = VAR_3;
      }
    else if (VAR_22 == VAR_9
             || VAR_22 == VAR_8)
      {

        VAR_24 = VAR_25;
      }
    else if (VAR_22 == VAR_7)
      {
        svn_wc__db_status_t VAR_29;
        VAR_20 = VAR_3;
        FUNC_0(FUNC_9(&VAR_29, &VAR_24, ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0),
                                         VAR_17->db, VAR_14,
                                         VAR_16, VAR_16));

        if (VAR_29 != VAR_9
            && VAR_29 != VAR_8)
          return VAR_2;
      }
    else
      {

        svn_wc__db_status_t VAR_30;

        FUNC_0(FUNC_9(&VAR_30, &VAR_24, ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0),
                                         VAR_17->db, VAR_14,
                                         VAR_16, VAR_16));

        if (VAR_30 != VAR_9
            && VAR_30 != VAR_8)
          VAR_21 = VAR_3;
        else if (VAR_24 != VAR_25 || !VAR_17->ignore_ancestry)
          {
            VAR_20 = VAR_3;
            VAR_21 = VAR_3;
          }
      }

    if (VAR_20)
      {

        if (VAR_24 == VAR_6)
          FUNC_0(FUNC_14(VAR_18, VAR_27,
                                              VAR_28,
                                              VAR_1,
                                              VAR_17->processor,
                                              VAR_17->cur ? VAR_17->cur->baton : ((void*)0),
                                              VAR_16));
        else if (VAR_24 == VAR_5)
          FUNC_0(FUNC_13(VAR_18, VAR_27,
                                             VAR_28,
                                             VAR_1,
                                             VAR_26,
                                             VAR_17->processor,
                                             VAR_17->cur ? VAR_17->cur->baton : ((void*)0),
                                             VAR_17->cancel_func,
                                             VAR_17->cancel_baton,
                                             VAR_16));
      }
    else if (!VAR_21)
      {

        if (VAR_25 == VAR_6)
          {
            FUNC_0(FUNC_15(VAR_18, VAR_27,
                                                   VAR_28,
                                                   VAR_1,
                                                   VAR_17->processor,
                                                   VAR_17->cur
                                                        ? VAR_17->cur->baton
                                                        : ((void*)0),
                                                   VAR_0,
                                                   VAR_17->cancel_func,
                                                   VAR_17->cancel_baton,
                                                   VAR_16));
          }
        else if (VAR_25 == VAR_5)
          {
            FUNC_0(FUNC_1(VAR_17, VAR_14, VAR_0, VAR_16));

            if (VAR_15->prop_status != VAR_11
                && VAR_15->prop_status != VAR_12)
              {
                apr_array_header_t *VAR_31;
                FUNC_0(FUNC_10(&VAR_17->cur->left_props,
                                                  VAR_17->db, VAR_14,
                                                  VAR_17->cur->pool,
                                                  VAR_16));
                FUNC_0(FUNC_12(&VAR_17->cur->right_props,
                                              VAR_17->db, VAR_14,
                                              VAR_17->cur->pool,
                                              VAR_16));

                FUNC_0(FUNC_8(&VAR_31,
                                       VAR_17->cur->right_props,
                                       VAR_17->cur->left_props,
                                       VAR_17->cur->pool));

                VAR_17->cur->propchanges = VAR_31;
              }
          }
      }

    if (VAR_21 && (VAR_22 != VAR_7))
      {

        const char *VAR_32 = ((void*)0);

        if (VAR_15->moved_from_abspath)
          {
            VAR_32 = FUNC_6(
                                          VAR_17->anchor_abspath,
                                          VAR_15->moved_from_abspath);
          }

        if (VAR_25 == VAR_6)
          FUNC_0(FUNC_17(VAR_18, VAR_27,
                                               VAR_28,
                                               VAR_32,
                                               VAR_17->processor,
                                               VAR_17->cur ? VAR_17->cur->baton : ((void*)0),
                                               VAR_0,
                                               VAR_17->cancel_func,
                                               VAR_17->cancel_baton,
                                               VAR_16));
        else if (VAR_25 == VAR_5)
          FUNC_0(FUNC_16(VAR_18, VAR_27,
                                              VAR_28, VAR_26,
                                              VAR_32,
                                              VAR_17->processor,
                                              VAR_17->cur ? VAR_17->cur->baton : ((void*)0),
                                              VAR_0,
                                              VAR_17->cancel_func,
                                              VAR_17->cancel_baton,
                                              VAR_16));
      }

    if (VAR_25 == VAR_5 && (VAR_21 || VAR_20))
      FUNC_0(FUNC_1(VAR_17, VAR_14, VAR_3 , VAR_16));
  }

  return VAR_2;
}
