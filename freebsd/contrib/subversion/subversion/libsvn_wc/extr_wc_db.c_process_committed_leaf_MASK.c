
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char const*,int ,int ,int ,char const*,int const*,int *,int,int,int *,int *) ;
 int FUNC_4 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int *) ;
 int VAR_3 ;
 int FUNC_6 (int ,char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 scalar_t__ VAR_4 ;
 char* FUNC_8 (char const*,int *) ;
 int FUNC_9 (int *,int *,int *,int *,int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (scalar_t__*,TYPE_1__*,char const*,int ,int *) ;
 int FUNC_11 (int **,int *,int ,scalar_t__,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_wc__db_t *VAR_10,
                       svn_wc__db_wcroot_t *VAR_11,
                       const char *VAR_12,
                       svn_boolean_t VAR_13,
                       svn_wc__db_status_t VAR_14,
                       svn_node_kind_t VAR_15,
                       svn_boolean_t VAR_16,
                       const svn_checksum_t *VAR_17,
                       svn_revnum_t VAR_18,
                       apr_time_t VAR_19,
                       const char *VAR_20,
                       apr_hash_t *VAR_21,
                       svn_boolean_t VAR_22,
                       svn_boolean_t VAR_23,
                       const svn_checksum_t *VAR_24,
                       apr_pool_t *VAR_25)
{
  svn_revnum_t VAR_26 = VAR_18;
  svn_skel_t *VAR_27 = ((void*)0);

  {
    const char *VAR_28;
    svn_boolean_t VAR_29;

    if (VAR_15 == VAR_4)
      VAR_28 = VAR_12;
    else
      VAR_28 = FUNC_8(VAR_12, VAR_25);

    FUNC_0(FUNC_10(&VAR_29, VAR_11,
                                                 VAR_28, VAR_0,
                                                 VAR_25));

    if (!VAR_29)
      return FUNC_7(VAR_1, ((void*)0),
                             FUNC_2("No write-lock in '%s'"),
                             FUNC_5(VAR_11, VAR_12,
                                                    VAR_25));

    FUNC_0(FUNC_4(VAR_11, VAR_28, VAR_3,
                          VAR_25));
  }

  if (VAR_14 == VAR_9)
    {






      return VAR_2;
    }

  FUNC_1(VAR_14 == VAR_8
                 || VAR_14 == VAR_7
                 || VAR_14 == VAR_5
                 || VAR_14 == VAR_6);

  if (VAR_15 != VAR_4
      && VAR_14 != VAR_6)
    {



      if (VAR_24 == ((void*)0))
        {


          FUNC_1(VAR_17 != ((void*)0));

          VAR_24 = VAR_17;


          if (VAR_13 && !VAR_16)
            {







              FUNC_0(FUNC_9(
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           &VAR_26,
                                           &VAR_19,
                                           &VAR_20, ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0),
                                           VAR_11, VAR_12,
                                           VAR_25, VAR_25));
            }
        }

      FUNC_0(FUNC_11(&VAR_27,
                                           VAR_10, FUNC_6(VAR_11->abspath,
                                                               VAR_12,
                                                               VAR_25),
                                           VAR_16,
                                           VAR_25, VAR_25));
    }


  FUNC_0(FUNC_3(VAR_11, VAR_12,
                      VAR_18, VAR_26,
                      VAR_19, VAR_20,
                      VAR_24,
                      VAR_21,
                      !VAR_23,
                      !VAR_22,
                      VAR_27,
                      VAR_25));

  return VAR_2;
}
