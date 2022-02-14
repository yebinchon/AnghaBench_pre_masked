
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char const**,char const*,int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,char const*,int *) ;
 int FUNC_5 (int **,int *,int *,int *) ;
 int FUNC_6 (scalar_t__*,int *,char const*,int ,int ,int ,int *) ;
 int FUNC_7 (int *,char const*,int ,char const*,int ,int ,void*,int ,void*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,char const*,int ,int,int ,void*,int ) ;
 int FUNC_10 (int *) ;

svn_error_t *
FUNC_11(const char *VAR_3,
            svn_wc_adm_access_t *VAR_4,
            svn_depth_t VAR_5,
            const char *VAR_6,
            svn_revnum_t VAR_7,
            svn_cancel_func_t VAR_8,
            void *VAR_9,
            svn_wc_notify_func2_t VAR_10,
            void *VAR_11,
            apr_pool_t *VAR_12)
{
  svn_wc_context_t *VAR_13;
  svn_wc__db_t *VAR_14 = FUNC_3(VAR_4);
  const char *VAR_15;

  FUNC_0(FUNC_5(&VAR_13, ((void*)0), VAR_14, VAR_12));
  FUNC_0(FUNC_1(&VAR_15, VAR_3, VAR_12));

  FUNC_0(FUNC_7(VAR_13, VAR_15,
                      VAR_5, VAR_6,
                      VAR_7,
                      VAR_8, VAR_9,
                      VAR_10, VAR_11, VAR_12));


  if (FUNC_4(VAR_14, VAR_15, VAR_12) == ((void*)0))
    {
      svn_node_kind_t VAR_16;

      FUNC_0(FUNC_6(&VAR_16, VAR_14, VAR_15,
                                   VAR_0 ,
                                   VAR_1 ,
                                   VAR_0 , VAR_12));
      if (VAR_16 == VAR_2)
        {
          svn_wc_adm_access_t *VAR_17;



          FUNC_0(FUNC_9(&VAR_17, VAR_4, VAR_3, VAR_1,
                                   VAR_6 ? -1 : 0,
                                   VAR_8, VAR_9,
                                   FUNC_8(VAR_4)));
        }
    }

  return FUNC_2(FUNC_10(VAR_13));
}
