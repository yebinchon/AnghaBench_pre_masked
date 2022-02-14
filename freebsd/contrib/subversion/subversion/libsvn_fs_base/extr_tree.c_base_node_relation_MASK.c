
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_node_relation_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int const**,TYPE_1__*,char const*,int *) ;
 int FUNC_2 (int const*,int const*) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_node_relation_t *VAR_2,
                   svn_fs_root_t *VAR_3, const char *VAR_4,
                   svn_fs_root_t *VAR_5, const char *VAR_6,
                   apr_pool_t *VAR_7)
{
  const svn_fs_id_t *VAR_8, *VAR_9;


  if (VAR_3->fs != VAR_5->fs)
    {
      *VAR_2 = VAR_1;
      return VAR_0;
    }


  FUNC_0(FUNC_1(&VAR_8, VAR_3, VAR_4, VAR_7));
  FUNC_0(FUNC_1(&VAR_9, VAR_5, VAR_6, VAR_7));

  *VAR_2 = FUNC_2(VAR_8, VAR_9);

  return VAR_0;
}
