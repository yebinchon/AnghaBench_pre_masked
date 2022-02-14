
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char const**,int *,char const*,int const*,int *,int *) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int const**,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

svn_error_t *
FUNC_6(const char **VAR_9,
                               svn_wc__db_t *VAR_10,
                               const char *VAR_11,
                               apr_pool_t *VAR_12,
                               apr_pool_t *VAR_13)
{
  svn_wc__db_status_t VAR_14;
  svn_node_kind_t VAR_15;
  const svn_checksum_t *VAR_16;

  FUNC_0(FUNC_5(&VAR_14, &VAR_15, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        &VAR_16, ((void*)0), ((void*)0), ((void*)0),
                                        VAR_10, VAR_11,
                                        VAR_13, VAR_13));


  if (VAR_15 != VAR_4)
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Can only get the pristine contents of files; "
                               "'%s' is not a file"),
                             FUNC_2(VAR_11,
                                                    VAR_13));

  if (VAR_14 == VAR_7)


    return FUNC_3(VAR_1, ((void*)0),
                             FUNC_1("Cannot get the pristine contents of '%s' "
                               "because its delete is already committed"),
                             FUNC_2(VAR_11,
                                                    VAR_13));
  else if (VAR_14 == VAR_8
      || VAR_14 == VAR_5
      || VAR_14 == VAR_6)
    return FUNC_3(VAR_2, ((void*)0),
                             FUNC_1("Cannot get the pristine contents of '%s' "
                               "because it has an unexpected status"),
                             FUNC_2(VAR_11,
                                                    VAR_13));

  if (VAR_16 == ((void*)0))
    return FUNC_3(VAR_2, ((void*)0),
                             FUNC_1("Node '%s' has no pristine text"),
                             FUNC_2(VAR_11,
                                                    VAR_13));
  FUNC_0(FUNC_4(VAR_9, VAR_10, VAR_11,
                                       VAR_16,
                                       VAR_12, VAR_13));
  return VAR_3;
}
