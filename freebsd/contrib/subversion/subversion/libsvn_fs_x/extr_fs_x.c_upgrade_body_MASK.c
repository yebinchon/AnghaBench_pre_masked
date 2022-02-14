
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fs; } ;
typedef TYPE_1__ upgrade_baton_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int*,int*,char const*,int *) ;
 char* FUNC_2 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2,
             apr_pool_t *VAR_3)
{
  upgrade_baton_t *VAR_4 = VAR_2;
  svn_fs_t *VAR_5 = VAR_4->fs;
  int VAR_6, VAR_7;
  const char *VAR_8 = FUNC_2(VAR_5, VAR_3);


  FUNC_0(FUNC_1(&VAR_6, &VAR_7, VAR_8,
                      VAR_3));


  if (VAR_6 == VAR_0)
    return VAR_1;


  return VAR_1;
}
