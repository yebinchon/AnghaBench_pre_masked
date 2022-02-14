
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
struct TYPE_7__ {int dir_data; int state_pool; int config; } ;
typedef TYPE_2__ svn_wc__db_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_int32_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_5 ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int **,int *,int *,char const*,char const*,char const*,int ,char const*,int ,scalar_t__,int ,int ,int ,int *) ;
 int FUNC_7 (int ,int *,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;
 int FUNC_10 (int ,char const*,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__**,int ,int *,int ,int ,int ,int ,int *) ;

svn_error_t *
FUNC_12(svn_wc__db_t *VAR_10,
                const char *VAR_11,
                const char *VAR_12,
                const char *VAR_13,
                const char *VAR_14,
                svn_revnum_t VAR_15,
                svn_depth_t VAR_16,
                apr_pool_t *VAR_17)
{
  svn_sqlite__db_t *VAR_18;
  apr_int64_t VAR_19;
  apr_int64_t VAR_20;
  svn_wc__db_wcroot_t *VAR_21;
  svn_boolean_t VAR_22 = VAR_0;
  apr_int32_t VAR_23 = 0;
  apr_hash_index_t *VAR_24;

  FUNC_1(FUNC_8(VAR_11));
  FUNC_1(VAR_12 != ((void*)0));
  FUNC_1(VAR_16 == VAR_6
                 || VAR_16 == VAR_7
                 || VAR_16 == VAR_8
                 || VAR_16 == VAR_9);



  FUNC_0(FUNC_7(VAR_10->config, &VAR_22,
                              VAR_4,
                              VAR_3,
                              VAR_0));


  FUNC_0(FUNC_6(&VAR_18, &VAR_19, &VAR_20, VAR_11, VAR_13,
                    VAR_14, VAR_2,
                    VAR_12, VAR_15, VAR_16, VAR_22,
                    VAR_23,
                    VAR_10->state_pool, VAR_17));


  FUNC_0(FUNC_11(&VAR_21,
                        FUNC_5(VAR_10->state_pool, VAR_11),
                        VAR_18, VAR_20, VAR_1,
                        VAR_0 ,
                        VAR_10->state_pool, VAR_17));
  for (VAR_24 = FUNC_2(VAR_17, VAR_10->dir_data);
       VAR_24;
       VAR_24 = FUNC_3(VAR_24))
    {
      const char *VAR_25 = FUNC_4(VAR_24);
      if (FUNC_9(VAR_21->abspath, VAR_25))
        FUNC_10(VAR_10->dir_data, VAR_25, ((void*)0));
    }


  FUNC_10(VAR_10->dir_data, VAR_21->abspath, VAR_21);

  return VAR_5;
}
