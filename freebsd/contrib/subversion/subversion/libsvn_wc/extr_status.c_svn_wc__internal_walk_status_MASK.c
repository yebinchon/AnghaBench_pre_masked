
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_wc_status_func4_t ;
typedef int svn_wc__db_t ;
typedef int svn_io_dirent2_t ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct walk_status_baton {char const* target_abspath; int externals; int * repos_locks; int * repos_root; int check_working_copy; int ignore_text_mods; int * db; } ;
struct svn_wc__db_info_t {scalar_t__ status; scalar_t__ has_descendants; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct walk_status_baton*,char const*,struct svn_wc__db_info_t const*,int const*,int const*,int ,int ,void*,int ,void*,int *) ;
 TYPE_1__* FUNC_4 (struct walk_status_baton*,char const*,int ,int *,int *,int *,struct svn_wc__db_info_t const*,int const*,int const*,int ,int ,int ,int ,void*,int ,void*,int *) ;
 TYPE_1__* FUNC_5 (int const**,int *,char const*,int *,int *) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (scalar_t__,int *,int ,int ) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int const**,char const*,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_11 (int *,int *,char const*,int *,int *) ;
 TYPE_1__* FUNC_12 (struct svn_wc__db_info_t const**,int *,char const*,int ,int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_13 (int **,int *,int *) ;

svn_error_t *
FUNC_14(svn_wc__db_t *VAR_7,
                             const char *VAR_8,
                             svn_depth_t VAR_9,
                             svn_boolean_t VAR_10,
                             svn_boolean_t VAR_11,
                             svn_boolean_t VAR_12,
                             const apr_array_header_t *VAR_13,
                             svn_wc_status_func4_t VAR_14,
                             void *VAR_15,
                             svn_cancel_func_t VAR_16,
                             void *VAR_17,
                             apr_pool_t *VAR_18)
{
  struct walk_status_baton VAR_19;
  const svn_io_dirent2_t *VAR_20;
  const struct svn_wc__db_info_t *VAR_21;
  svn_error_t *VAR_22;

  VAR_19.db = VAR_7;
  VAR_19.target_abspath = VAR_8;
  VAR_19.ignore_text_mods = VAR_12;
  VAR_19.check_working_copy = VAR_3;
  VAR_19.repos_root = ((void*)0);
  VAR_19.repos_locks = ((void*)0);



  if (!VAR_13)
    {
      apr_array_header_t *VAR_23;

      FUNC_0(FUNC_13(&VAR_23, ((void*)0), VAR_18));
      VAR_13 = VAR_23;
    }

  VAR_22 = FUNC_12(&VAR_21, VAR_7, VAR_8,
                                    VAR_0 ,
                                    VAR_18, VAR_18);

  if (VAR_22)
    {
      if (VAR_22->apr_err == VAR_1)
        {
          FUNC_7(VAR_22);
          VAR_21 = ((void*)0);
        }
      else
        return FUNC_9(VAR_22);

      VAR_19.externals = FUNC_2(VAR_18);

      FUNC_0(FUNC_10(&VAR_20, VAR_8, VAR_0, VAR_3,
                                  VAR_18, VAR_18));
    }
  else
    {
      FUNC_0(FUNC_11(&VAR_19.externals,
                                                 VAR_7, VAR_8,
                                                 VAR_18, VAR_18));

      FUNC_0(FUNC_5(&VAR_20, VAR_7, VAR_8,
                                            VAR_18, VAR_18));
    }

  if (VAR_21
      && VAR_21->has_descendants
      && VAR_21->status != VAR_5
      && VAR_21->status != VAR_4
      && VAR_21->status != VAR_6)
    {
      FUNC_0(FUNC_4(&VAR_19,
                             VAR_8,
                             VAR_0 ,
                             ((void*)0), ((void*)0), ((void*)0),
                             VAR_21,
                             VAR_20,
                             VAR_13,
                             VAR_9,
                             VAR_10,
                             VAR_11,
                             VAR_14, VAR_15,
                             VAR_16, VAR_17,
                             VAR_18));
    }
  else
    {



      VAR_22 = FUNC_3(&VAR_19,
                             VAR_8,
                             VAR_21,
                             VAR_20,
                             VAR_13,
                             VAR_10,
                             VAR_14, VAR_15,
                             VAR_16, VAR_17,
                             VAR_18);

      if (!VAR_21 && VAR_22 && VAR_22->apr_err == VAR_1)
        {


          FUNC_7(VAR_22);
          return FUNC_8(VAR_1, ((void*)0),
                                   FUNC_1("The node '%s' was not found."),
                                   FUNC_6(VAR_8,
                                                          VAR_18));
        }
      FUNC_0(VAR_22);
    }

  return VAR_2;
}
