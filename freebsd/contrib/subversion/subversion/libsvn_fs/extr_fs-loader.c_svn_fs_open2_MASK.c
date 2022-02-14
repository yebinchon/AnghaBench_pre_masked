
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int (* set_svn_fs_open ) (int *,int * (*) (int **,char const*,int *,int *,int *)) ;int (* open_fs ) (int *,char const*,int ,int *,int ) ;} ;
typedef TYPE_1__ fs_library_vtable_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**,char const*,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char const*,int ,int *,int ) ;
 int FUNC_4 (int *,int * (*) (int **,char const*,int *,int *,int *)) ;

svn_error_t *
FUNC_5(svn_fs_t **VAR_3, const char *VAR_4, apr_hash_t *VAR_5,
             apr_pool_t *VAR_6,
             apr_pool_t *VAR_7)
{
  fs_library_vtable_t *VAR_8;

  FUNC_0(FUNC_1(&VAR_8, VAR_4, VAR_7));
  *VAR_3 = FUNC_2(VAR_5, VAR_6);
  FUNC_0(VAR_8->open_fs(*VAR_3, VAR_4, VAR_2, VAR_7,
                          VAR_1));
  FUNC_0(VAR_8->set_svn_fs_open(*VAR_3, FUNC_5));

  return VAR_0;
}
