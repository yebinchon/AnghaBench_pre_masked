
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_id_t ;
struct TYPE_3__ {int * id; } ;
typedef TYPE_1__ svn_fs_dirent_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const svn_fs_id_t **VAR_1,
                       dag_node_t *VAR_2,
                       const char *VAR_3,
                       apr_pool_t *VAR_4,
                       apr_pool_t *VAR_5)
{
  svn_fs_dirent_t *VAR_6;

  FUNC_0(FUNC_1(&VAR_6, VAR_2, VAR_3, VAR_4,
                                   VAR_5));
  *VAR_1 = VAR_6 ? VAR_6->id : ((void*)0);

  return VAR_0;
}
