
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int **,int *,int *,char const*,int const*,int *,int *) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int const**,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

svn_error_t *
FUNC_6(svn_stream_t **VAR_11,
                              svn_filesize_t *VAR_12,
                              svn_wc__db_t *VAR_13,
                              const char *VAR_14,
                              apr_pool_t *VAR_15,
                              apr_pool_t *VAR_16)
{
  svn_wc__db_status_t VAR_17;
  svn_node_kind_t VAR_18;
  const svn_checksum_t *VAR_19;

  if (VAR_12)
    *VAR_12 = VAR_3;

  FUNC_0(FUNC_5(&VAR_17, &VAR_18, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        &VAR_19, ((void*)0), ((void*)0), ((void*)0),
                                        VAR_13, VAR_14,
                                        VAR_16, VAR_16));


  if (VAR_18 != VAR_5)
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Can only get the pristine contents of files; "
                               "'%s' is not a file"),
                             FUNC_2(VAR_14,
                                                    VAR_16));

  if (VAR_17 == VAR_6 && !VAR_19)
    {

      *VAR_11 = ((void*)0);
      return VAR_4;
    }
  else if (VAR_17 == VAR_9)


    return FUNC_3(VAR_1, ((void*)0),
                             FUNC_1("Cannot get the pristine contents of '%s' "
                               "because its delete is already committed"),
                             FUNC_2(VAR_14,
                                                    VAR_16));
  else if (VAR_17 == VAR_10
      || VAR_17 == VAR_7
      || VAR_17 == VAR_8)
    return FUNC_3(VAR_2, ((void*)0),
                             FUNC_1("Cannot get the pristine contents of '%s' "
                               "because it has an unexpected status"),
                             FUNC_2(VAR_14,
                                                    VAR_16));
  if (VAR_19)
    FUNC_0(FUNC_4(VAR_11, VAR_12, VAR_13, VAR_14,
                                     VAR_19,
                                     VAR_15, VAR_16));
  else
    *VAR_11 = ((void*)0);

  return VAR_4;
}
