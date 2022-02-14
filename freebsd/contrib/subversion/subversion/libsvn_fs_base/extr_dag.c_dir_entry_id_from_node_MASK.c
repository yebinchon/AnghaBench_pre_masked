
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_id_t ;
struct TYPE_3__ {int * id; } ;
typedef TYPE_1__ svn_fs_dirent_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,int *,int *) ;
 TYPE_1__* FUNC_2 (int *,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_fs_id_t **VAR_1,
                       dag_node_t *VAR_2,
                       const char *VAR_3,
                       trail_t *VAR_4,
                       apr_pool_t *VAR_5)
{
  apr_hash_t *VAR_6;
  svn_fs_dirent_t *VAR_7;

  FUNC_0(FUNC_1(&VAR_6, VAR_2, VAR_4, VAR_5));
  if (VAR_6)
    VAR_7 = FUNC_2(VAR_6, VAR_3);
  else
    VAR_7 = ((void*)0);

  *VAR_1 = VAR_7 ? VAR_7->id : ((void*)0);
  return VAR_0;
}
