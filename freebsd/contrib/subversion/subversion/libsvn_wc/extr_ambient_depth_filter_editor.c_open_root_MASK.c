
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct edit_baton {int wrapped_edit_baton; TYPE_1__* wrapped_editor; int anchor_abspath; int db; int * target; } ;
struct dir_baton {int wrapped_baton; int ambient_depth; scalar_t__ ambiently_excluded; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* open_root ) (int ,int ,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int *,int ,int ,int *) ;
 int FUNC_2 (struct dir_baton**,int *,struct edit_baton*,int *,int ,int *) ;
 int * FUNC_3 (int ,int ,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_6,
          svn_revnum_t VAR_7,
          apr_pool_t *VAR_8,
          void **VAR_9)
{
  struct edit_baton *VAR_10 = VAR_6;
  struct dir_baton *VAR_11;

  FUNC_0(FUNC_2(&VAR_11, ((void*)0), VAR_10, ((void*)0), VAR_0, VAR_8));
  *VAR_9 = VAR_11;

  if (VAR_11->ambiently_excluded)
    return VAR_1;

  if (! *VAR_10->target)
    {

      svn_node_kind_t VAR_12;
      svn_wc__db_status_t VAR_13;
      svn_depth_t VAR_14;


      FUNC_0(FUNC_1(&VAR_13, &VAR_12, &VAR_14,
                                VAR_10->db, VAR_10->anchor_abspath,
                                VAR_8));

      if (VAR_12 != VAR_2
          && VAR_13 != VAR_4
          && VAR_13 != VAR_3
          && VAR_13 != VAR_5)
        {
          VAR_11->ambient_depth = VAR_14;
        }
    }

  return VAR_10->wrapped_editor->open_root(VAR_10->wrapped_edit_baton, VAR_7,
                                       VAR_8, &VAR_11->wrapped_baton);
}
