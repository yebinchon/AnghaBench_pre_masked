
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct edit_baton {TYPE_1__* wrapped_editor; int db; int anchor_abspath; } ;
struct dir_baton {scalar_t__ ambient_depth; int wrapped_baton; scalar_t__ ambiently_excluded; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* delete_entry ) (char const*,int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int *,int ,char const*,int *) ;
 int * FUNC_2 (char const*,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 char* FUNC_3 (int ,char const*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_6,
             svn_revnum_t VAR_7,
             void *VAR_8,
             apr_pool_t *VAR_9)
{
  struct dir_baton *VAR_10 = VAR_8;
  struct edit_baton *VAR_11 = VAR_10->edit_baton;

  if (VAR_10->ambiently_excluded)
    return VAR_0;

  if (VAR_10->ambient_depth < VAR_1)
    {



      svn_node_kind_t VAR_12;
      svn_wc__db_status_t VAR_13;
      const char *VAR_14;

      VAR_14 = FUNC_3(VAR_11->anchor_abspath, VAR_6, VAR_9);

      FUNC_0(FUNC_1(&VAR_13, &VAR_12, ((void*)0),
                                VAR_11->db, VAR_14, VAR_9));

      if (VAR_12 == VAR_2
          || VAR_13 == VAR_4
          || VAR_13 == VAR_3
          || VAR_13 == VAR_5)
        return VAR_0;
    }

  return VAR_11->wrapped_editor->delete_entry(VAR_6, VAR_7,
                                          VAR_10->wrapped_baton, VAR_9);
}
