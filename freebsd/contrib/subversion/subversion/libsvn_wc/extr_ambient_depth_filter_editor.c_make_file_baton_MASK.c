
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct file_baton {struct edit_baton* edit_baton; void* ambiently_excluded; } ;
struct edit_baton {int db; int anchor_abspath; } ;
struct dir_baton {scalar_t__ ambient_depth; struct edit_baton* edit_baton; scalar_t__ ambiently_excluded; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int * VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int *,int ,char const*,int *) ;
 struct file_baton* FUNC_3 (int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_4 (int ,char const*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_5(struct file_baton **VAR_8,
                struct dir_baton *VAR_9,
                const char *VAR_10,
                svn_boolean_t VAR_11,
                apr_pool_t *VAR_12)
{
  struct file_baton *VAR_13 = FUNC_3(VAR_12, sizeof(*VAR_13));
  struct edit_baton *VAR_14 = VAR_9->edit_baton;
  svn_wc__db_status_t VAR_15;
  svn_node_kind_t VAR_16;
  const char *VAR_17;

  FUNC_1(VAR_10);

  if (VAR_9->ambiently_excluded)
    {
      VAR_13->ambiently_excluded = VAR_1;
      *VAR_8 = VAR_13;
      return VAR_0;
    }

  VAR_17 = FUNC_4(VAR_14->anchor_abspath, VAR_10, VAR_12);

  if (!VAR_11)
    {
      FUNC_0(FUNC_2(&VAR_15, &VAR_16, ((void*)0),
                                VAR_14->db, VAR_17, VAR_12));
    }
  else
    {
      VAR_15 = VAR_6;
      VAR_16 = VAR_4;
    }

  if (VAR_9->ambient_depth == VAR_2)
    {





      if (VAR_15 == VAR_6
          || VAR_15 == VAR_7
          || VAR_15 == VAR_5
          || VAR_16 == VAR_4)
        {
          VAR_13->ambiently_excluded = VAR_1;
          *VAR_8 = VAR_13;
          return VAR_0;
        }
    }



  if (VAR_9->ambient_depth != VAR_3
      && VAR_15 == VAR_5)
    {
      VAR_13->ambiently_excluded = VAR_1;
      *VAR_8 = VAR_13;
      return VAR_0;
    }

  VAR_13->edit_baton = VAR_9->edit_baton;

  *VAR_8 = VAR_13;
  return VAR_0;
}
