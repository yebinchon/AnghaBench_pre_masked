
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_wc__internal_status_t ;
typedef int svn_wc__db_t ;
typedef int svn_io_dirent2_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct svn_wc__db_info_t {scalar_t__ kind; scalar_t__ status; scalar_t__ conflicted; } ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (int **,int *,char const*,char const*,char const*,char const*,struct svn_wc__db_info_t const*,int const*,scalar_t__,scalar_t__,scalar_t__,int *,int *,int *) ;
 TYPE_1__* FUNC_3 (int **,int *,char const*,int const*,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_4 (int const**,int *,char const*,int *,int *) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int const**,char const*,scalar_t__,scalar_t__,int *,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (int *,int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const* const,int *,int *) ;
 int FUNC_13 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_14 (int *,int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const* const,int *,int *) ;
 TYPE_1__* FUNC_15 (struct svn_wc__db_info_t const**,int *,char const*,int,int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_wc__internal_status_t **VAR_7,
                svn_wc__db_t *VAR_8,
                const char *VAR_9,
                svn_boolean_t VAR_10,
                apr_pool_t *VAR_11,
                apr_pool_t *VAR_12)
{
  const svn_io_dirent2_t *VAR_13 = ((void*)0);
  const char *VAR_14;
  const char *VAR_15;
  const char *VAR_16;
  const struct svn_wc__db_info_t *VAR_17;
  svn_boolean_t VAR_18 = VAR_0;
  svn_error_t *VAR_19;

  FUNC_1(FUNC_7(VAR_9));

  VAR_19 = FUNC_15(&VAR_17, VAR_8, VAR_9,
                                    !VAR_10,
                                    VAR_12, VAR_12);

  if (VAR_19)
    {
      if (VAR_19->apr_err != VAR_1)
        return FUNC_10(VAR_19);

      FUNC_9(VAR_19);
      VAR_17 = ((void*)0);

      if (VAR_10)
        FUNC_0(FUNC_11(&VAR_13, VAR_9, VAR_0, VAR_2,
                                    VAR_12, VAR_12));
    }
  else if (VAR_10)
    FUNC_0(FUNC_4(&VAR_13, VAR_8, VAR_9,
                                          VAR_12, VAR_12));

  if (!VAR_17
      || VAR_17->kind == VAR_3
      || VAR_17->status == VAR_5
      || VAR_17->status == VAR_6
      || VAR_17->status == VAR_4)
    return FUNC_10(FUNC_3(VAR_7,
                                                VAR_8, VAR_9,
                                                VAR_13,
                                                VAR_17 ? VAR_17->conflicted : VAR_0,
                                                VAR_0 ,
                                                VAR_11, VAR_12));

  if (FUNC_8(VAR_9, FUNC_5(VAR_9)))
    VAR_18 = VAR_2;
  else
    FUNC_0(FUNC_13(&VAR_18, VAR_8, VAR_9, VAR_12));



  if (!VAR_18)
    {
      const char *const VAR_20 = FUNC_6(VAR_9,
                                                            VAR_12);
      if (VAR_10)
        FUNC_0(FUNC_14(((void*)0), ((void*)0), ((void*)0),
                                     &VAR_14,
                                     &VAR_15,
                                     &VAR_16,
                                     ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                     ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                     ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                     VAR_8, VAR_20,
                                     VAR_11, VAR_12));
      else
        FUNC_0(FUNC_12(((void*)0), ((void*)0), ((void*)0),
                                         &VAR_14,
                                         &VAR_15,
                                         &VAR_16,
                                         ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         VAR_8, VAR_20,
                                         VAR_11, VAR_12));
    }
  else
    {
      VAR_15 = ((void*)0);
      VAR_14 = ((void*)0);
      VAR_16 = ((void*)0);
    }

  return FUNC_10(FUNC_2(VAR_7, VAR_8, VAR_9,
                                         VAR_15,
                                         VAR_14,
                                         VAR_16,
                                         VAR_17,
                                         VAR_13,
                                         VAR_2 ,
                                         VAR_0, VAR_10,
                                         ((void*)0) ,
                                         VAR_11, VAR_12));
}
