
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_cache__t ;
typedef scalar_t__ svn_cache__error_handler_t ;
struct dump_cache_baton_t {int * cache; int * pool; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct dump_cache_baton_t* FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct dump_cache_baton_t*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,scalar_t__,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_cache__t *VAR_3,
               svn_fs_t *VAR_4,
               svn_cache__error_handler_t VAR_5,
               apr_pool_t *VAR_6)
{
  if (VAR_3 != ((void*)0))
    {
      if (VAR_5)
        FUNC_0(FUNC_3(VAR_3,
                                             VAR_5,
                                             VAR_4,
                                             VAR_6));

    }

  return VAR_0;
}
