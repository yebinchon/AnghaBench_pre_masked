
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct fs_freeze_baton_t {int fs; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_2,
                apr_pool_t *VAR_3)
{
  struct fs_freeze_baton_t *VAR_4 = VAR_2;
  FUNC_0(FUNC_1(VAR_4->fs, VAR_1, VAR_2, VAR_3));

  return VAR_0;
}
