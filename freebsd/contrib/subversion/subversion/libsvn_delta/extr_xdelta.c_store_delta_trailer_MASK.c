
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta__ops_baton_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*,char const*,scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__,scalar_t__,char const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(svn_txdelta__ops_baton_t *VAR_2,
                    const char *VAR_3,
                    apr_size_t VAR_4,
                    const char *VAR_5,
                    apr_size_t VAR_6,
                    apr_size_t VAR_7,
                    apr_pool_t *VAR_8)
{
  apr_size_t VAR_9;
  apr_size_t VAR_10 = VAR_4 > (VAR_6 - VAR_7) ? VAR_6 - VAR_7 : VAR_4;
  if (VAR_10 == 0)
    return;

  VAR_9 = FUNC_0(VAR_3 + VAR_4, VAR_5 + VAR_6,
                                                VAR_10);
  if (VAR_9 <= 4)
    VAR_9 = 0;

  if (VAR_6 - VAR_7 > VAR_9)
    FUNC_1(VAR_2, VAR_0,
                           VAR_7, VAR_6 - VAR_7 - VAR_9, VAR_5 + VAR_7, VAR_8);
  if (VAR_9)
    FUNC_1(VAR_2, VAR_1,
                           VAR_4 - VAR_9, VAR_9, ((void*)0), VAR_8);
}
