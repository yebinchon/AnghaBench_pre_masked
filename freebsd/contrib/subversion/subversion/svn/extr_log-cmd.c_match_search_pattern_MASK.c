
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_membuf_t ;
struct TYPE_3__ {char const* copyfrom_path; int copyfrom_rev; } ;
typedef TYPE_1__ svn_log_changed_path2_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 char* FUNC_5 (int *,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_7(const char *VAR_2,
                     const char *VAR_3,
                     const char *VAR_4,
                     const char *VAR_5,
                     apr_hash_t *VAR_6,
                     svn_membuf_t *VAR_7,
                     apr_pool_t *VAR_8)
{

  const char *VAR_9 = FUNC_5(VAR_8, "*%s*", VAR_2);


  if (VAR_3 && FUNC_6(VAR_9, VAR_3, VAR_7))
    return VAR_1;


  if (VAR_4 && FUNC_6(VAR_9, VAR_4, VAR_7))
    return VAR_1;


  if (VAR_5 && FUNC_6(VAR_9, VAR_5, VAR_7))
    return VAR_1;

  if (VAR_6)
    {
      apr_hash_index_t *VAR_10;


      for (VAR_10 = FUNC_1(VAR_8, VAR_6);
           VAR_10;
           VAR_10 = FUNC_2(VAR_10))
        {
          const char *VAR_11 = FUNC_3(VAR_10);
          svn_log_changed_path2_t *VAR_12;

          if (FUNC_6(VAR_9, VAR_11, VAR_7))
            return VAR_1;


          VAR_12 = FUNC_4(VAR_10);
          if (VAR_12->copyfrom_path
              && FUNC_0(VAR_12->copyfrom_rev)
              && FUNC_6(VAR_9, VAR_12->copyfrom_path, VAR_7))
            return VAR_1;
        }
    }

  return VAR_0;
}
