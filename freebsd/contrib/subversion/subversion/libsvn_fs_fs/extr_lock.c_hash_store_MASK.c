
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char const*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_3(apr_hash_t *VAR_1,
           const char *VAR_2,
           apr_ssize_t VAR_3,
           const char *VAR_4,
           apr_ssize_t VAR_5,
           apr_pool_t *VAR_6)
{
  if (! (VAR_2 && VAR_4))
    return;
  if (VAR_5 == VAR_0)
    VAR_5 = FUNC_1(VAR_4);
  FUNC_0(VAR_1, VAR_2, VAR_3,
               FUNC_2(VAR_4, VAR_5, VAR_6));
}
