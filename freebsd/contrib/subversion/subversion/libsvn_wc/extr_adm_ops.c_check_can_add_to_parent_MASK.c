
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *,int *,int *,int *,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int * FUNC_6 (scalar_t__*,scalar_t__*,int *,int *,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_7 (int *,int *,int *,char const**,char const**,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char **VAR_10,
                        const char **VAR_11,
                        svn_wc__db_t *VAR_12,
                        const char *VAR_13,
                        apr_pool_t *VAR_14,
                        apr_pool_t *VAR_15)
{
  const char *VAR_16 = FUNC_2(VAR_13, VAR_15);
  svn_wc__db_status_t VAR_17;
  svn_node_kind_t VAR_18;
  svn_error_t *VAR_19;

  FUNC_0(FUNC_8(VAR_12, VAR_16, VAR_15));

  VAR_19 = FUNC_6(&VAR_17, &VAR_18, ((void*)0),
                             ((void*)0), VAR_10, VAR_11, ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0),
                             VAR_12, VAR_16, VAR_14, VAR_15);

  if (VAR_19
      || VAR_17 == VAR_8
      || VAR_17 == VAR_7
      || VAR_17 == VAR_9)
    {
      return
        FUNC_4(VAR_0, VAR_19,
                          FUNC_1("Can't find parent directory's node while"
                            " trying to add '%s'"),
                          FUNC_3(VAR_13,
                                                 VAR_15));
    }
  else if (VAR_17 == VAR_6)
    {
      return
        FUNC_4(VAR_2, ((void*)0),
                          FUNC_1("Can't add '%s' to a parent directory"
                            " scheduled for deletion"),
                          FUNC_3(VAR_13,
                                                 VAR_15));
    }
  else if (VAR_18 != VAR_4)
    return FUNC_4(VAR_1, ((void*)0),
                             FUNC_1("Can't schedule an addition of '%s'"
                               " below a not-directory node"),
                             FUNC_3(VAR_13,
                                                    VAR_15));


  if ((VAR_10 && ! *VAR_10)
      || (VAR_11 && ! *VAR_11))
    {
      if (VAR_17 == VAR_5)
        FUNC_0(FUNC_7(((void*)0), ((void*)0), ((void*)0),
                                         VAR_10, VAR_11, ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0),
                                         VAR_12, VAR_16,
                                         VAR_14, VAR_15));
      else
        FUNC_0(FUNC_5(((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         VAR_10, VAR_11, ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0),
                                         VAR_12, VAR_16,
                                         VAR_14, VAR_15));
    }

  return VAR_3;
}
