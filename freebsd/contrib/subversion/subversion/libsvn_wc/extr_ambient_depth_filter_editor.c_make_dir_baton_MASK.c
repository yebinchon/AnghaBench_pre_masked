
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct edit_baton {int db; int anchor_abspath; } ;
struct dir_baton {scalar_t__ ambient_depth; struct edit_baton* edit_baton; void* ambiently_excluded; int abspath; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int *,int ,int ,int *) ;
 struct dir_baton* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,char const*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_6(struct dir_baton **VAR_8,
               const char *VAR_9,
               struct edit_baton *VAR_10,
               struct dir_baton *VAR_11,
               svn_boolean_t VAR_12,
               apr_pool_t *VAR_13)
{
  struct dir_baton *VAR_14;

  FUNC_1(VAR_9 || (! VAR_11));

  if (VAR_11 && VAR_11->ambiently_excluded)
    {


      *VAR_8 = VAR_11;
      return VAR_0;
    }


  VAR_14 = FUNC_3(VAR_13, sizeof(*VAR_14));

  if (VAR_9)
    VAR_14->abspath = FUNC_5(VAR_10->anchor_abspath, VAR_9, VAR_13);
  else
    VAR_14->abspath = FUNC_4(VAR_13, VAR_10->anchor_abspath);




  if (VAR_11 && VAR_11->ambient_depth != VAR_4)
    {
      svn_boolean_t VAR_15;
      svn_wc__db_status_t VAR_16;
      svn_node_kind_t VAR_17;
      svn_boolean_t VAR_18 = VAR_1;

      if (!VAR_12)
        {
          FUNC_0(FUNC_2(&VAR_16, &VAR_17, ((void*)0),
                                    VAR_10->db, VAR_14->abspath, VAR_13));
        }
      else
        {
          VAR_16 = VAR_7;
          VAR_17 = VAR_5;
        }

      VAR_18 = (VAR_17 != VAR_5);

      if (VAR_11->ambient_depth == VAR_2
          || VAR_11->ambient_depth == VAR_3)
        {





          VAR_15 = !VAR_18;
        }
      else
        {


          VAR_15 = VAR_18 && (VAR_16 == VAR_6);
        }
      if (VAR_15)
        {
          VAR_14->ambiently_excluded = VAR_1;
          *VAR_8 = VAR_14;
          return VAR_0;
        }
    }

  VAR_14->edit_baton = VAR_10;


  VAR_14->ambient_depth = VAR_4;

  *VAR_8 = VAR_14;
  return VAR_0;
}
