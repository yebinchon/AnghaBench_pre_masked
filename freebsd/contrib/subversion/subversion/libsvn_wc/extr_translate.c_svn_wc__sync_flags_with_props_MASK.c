
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_wc__db_lock_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (char const*,scalar_t__,scalar_t__,int *) ;
 int FUNC_3 (char const*,scalar_t__,int *) ;
 int FUNC_4 (char const*,scalar_t__,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int **,int *,int *,int *,int *,int *,scalar_t__*,scalar_t__*,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_6 (int **,int *,char const*,int *,int *) ;
 int FUNC_7 (int **,int *,char const*,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

svn_error_t *
FUNC_8(svn_boolean_t *VAR_8,
                              svn_wc__db_t *VAR_9,
                              const char *VAR_10,
                              apr_pool_t *VAR_11)
{
  svn_wc__db_status_t VAR_12;
  svn_node_kind_t VAR_13;
  svn_wc__db_lock_t *VAR_14;
  apr_hash_t *VAR_15 = ((void*)0);
  svn_boolean_t VAR_16;
  svn_boolean_t VAR_17;

  if (VAR_8)
    *VAR_8 = VAR_0;




  FUNC_0(FUNC_5(&VAR_12, &VAR_13, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), &VAR_14, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               &VAR_16, &VAR_17, ((void*)0), ((void*)0), ((void*)0),
                               VAR_9, VAR_10,
                               VAR_11, VAR_11));





  if (VAR_13 != VAR_5
      || (VAR_12 != VAR_7
          && VAR_12 != VAR_6))
    return VAR_1;

  if (VAR_17 || VAR_16)
    FUNC_0(FUNC_7(&VAR_15, VAR_9, VAR_10, VAR_11,
                                  VAR_11));
  else
    VAR_15 = ((void*)0);



  if (VAR_8)
    *VAR_8 = VAR_4;


  if (VAR_12 != VAR_7
      || VAR_15 == ((void*)0)
      || ! FUNC_1(VAR_15, VAR_3)
      || VAR_14)
    {
      FUNC_0(FUNC_4(VAR_10, VAR_0, VAR_11));
    }
  else
    {


      apr_hash_t *VAR_18;

      if (! VAR_17)
        VAR_18 = VAR_15;
      else if (VAR_16)
        FUNC_0(FUNC_6(&VAR_18, VAR_9, VAR_10,
                                                VAR_11, VAR_11));
      else
        VAR_18 = ((void*)0);

      if (VAR_18
            && FUNC_1(VAR_18, VAR_3) )


        FUNC_0(FUNC_3(VAR_10, VAR_0, VAR_11));
    }




  if (VAR_15 == ((void*)0)
      || ! FUNC_1(VAR_15, VAR_2))
    {

      FUNC_0(FUNC_2(VAR_10, VAR_0, VAR_0,
                                         VAR_11));
    }
  else
    FUNC_0(FUNC_2(VAR_10, VAR_4, VAR_0,
                                       VAR_11));


  return VAR_1;
}
