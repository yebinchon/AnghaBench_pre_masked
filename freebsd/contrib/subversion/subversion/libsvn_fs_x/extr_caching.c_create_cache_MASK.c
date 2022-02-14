
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_memcache_t ;
typedef int svn_membuffer_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_cache__t ;
typedef int svn_cache__serialize_func_t ;
typedef int * svn_cache__error_handler_t ;
typedef int svn_cache__deserialize_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int **,int ,int ,int ,scalar_t__,scalar_t__,int ,char const*,int *) ;
 int FUNC_3 (int **,int *,int ,int ,int ,char const*,scalar_t__,int ,scalar_t__,int *,int *) ;
 int FUNC_4 (int **,int *,int ,int ,int ,char const*,int *) ;
 int FUNC_5 (int **,char const*,int *) ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_cache__t **VAR_5,
             svn_memcache_t *VAR_6,
             svn_membuffer_t *VAR_7,
             apr_int64_t VAR_8,
             apr_int64_t VAR_9,
             svn_cache__serialize_func_t VAR_10,
             svn_cache__deserialize_func_t VAR_11,
             apr_ssize_t VAR_12,
             const char *VAR_13,
             apr_uint32_t VAR_14,
             svn_boolean_t VAR_15,
             svn_fs_t *VAR_16,
             svn_boolean_t VAR_17,
             svn_boolean_t VAR_18,
             apr_pool_t *VAR_19,
             apr_pool_t *VAR_20)
{
  svn_cache__error_handler_t VAR_21 = VAR_17
                                           ? ((void*)0)
                                           : VAR_4;
  if (VAR_14 == 0)
    VAR_14 = VAR_1;

  if (VAR_18)
    {
      FUNC_0(FUNC_5(VAR_5, VAR_13, VAR_19));
    }
  else if (VAR_6)
    {
      FUNC_0(FUNC_4(VAR_5, VAR_6,
                                         VAR_10, VAR_11, VAR_12,
                                         VAR_13, VAR_19));
      VAR_21 = VAR_17
                    ? ((void*)0)
                    : VAR_3;
    }
  else if (VAR_7)
    {


      FUNC_0(FUNC_3(
                VAR_5, VAR_7, VAR_10, VAR_11,
                VAR_12, VAR_13, VAR_14, VAR_0, VAR_15,
                VAR_19, VAR_20));
    }
  else if (VAR_8)
    {
      FUNC_0(FUNC_2(
                VAR_5, VAR_10, VAR_11, VAR_12, VAR_8,
                VAR_9, VAR_0, VAR_13, VAR_19));
    }
  else
    {
      FUNC_0(FUNC_5(VAR_5, VAR_13, VAR_19));
    }

  FUNC_0(FUNC_1(*VAR_5, VAR_16, VAR_21, VAR_19));

  return VAR_2;
}
