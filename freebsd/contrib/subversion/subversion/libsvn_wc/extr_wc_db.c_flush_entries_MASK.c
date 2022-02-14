
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int access_cache; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (int ,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_6 (char const*,int *) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_wc__db_wcroot_t *VAR_5,
              const char *VAR_6,
              svn_depth_t VAR_7,
              apr_pool_t *VAR_8)
{
  const char *VAR_9;

  if (FUNC_0(VAR_5->access_cache) == 0)
    return VAR_0;

  FUNC_5(VAR_5->access_cache, VAR_6);

  if (VAR_7 > VAR_1)
    {
      apr_hash_index_t *VAR_10;


      for (VAR_10 = FUNC_1(VAR_8, VAR_5->access_cache);
           VAR_10;
           VAR_10 = FUNC_2(VAR_10))
        {
          const char *VAR_11 = FUNC_3(VAR_10);

          if ((VAR_7 == VAR_2 || VAR_7 == VAR_3) &&
              FUNC_4(VAR_6, VAR_11))
            {
              FUNC_5(VAR_5->access_cache, VAR_11);
            }
          else if (VAR_7 == VAR_4 &&
                   FUNC_7(VAR_6, VAR_11))
            {
              FUNC_5(VAR_5->access_cache, VAR_11);
            }
        }
    }




  VAR_9 = FUNC_6(VAR_6, VAR_8);
  FUNC_5(VAR_5->access_cache, VAR_9);

  return VAR_0;
}
