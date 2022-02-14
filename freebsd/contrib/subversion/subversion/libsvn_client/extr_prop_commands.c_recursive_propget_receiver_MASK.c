
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct recursive_propget_receiver_baton {int pool; int props; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_1,
                           const char *VAR_2,
                           apr_hash_t *VAR_3,
                           apr_pool_t *VAR_4)
{
  struct recursive_propget_receiver_baton *VAR_5 = VAR_1;

  if (FUNC_0(VAR_3))
    {
      apr_hash_index_t *VAR_6 = FUNC_1(VAR_4, VAR_3);
      FUNC_4(VAR_5->props, FUNC_3(VAR_5->pool, VAR_2),
                    FUNC_5(FUNC_2(VAR_6), VAR_5->pool));
    }

  return VAR_0;
}
