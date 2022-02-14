
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_dirent_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_8__ {int fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__**,TYPE_2__*) ;
 int * FUNC_3 (int ,int *,int ) ;
 int * FUNC_4 (int **,int ,TYPE_1__*,char const*,int *,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_5(svn_fs_dirent_t **VAR_2,
                         dag_node_t *VAR_3,
                         const char* VAR_4,
                         apr_pool_t *VAR_5,
                         apr_pool_t *VAR_6)
{
  node_revision_t *VAR_7;
  FUNC_0(FUNC_2(&VAR_7, VAR_3));

  if (VAR_7->kind != VAR_1)
    return FUNC_3(VAR_0, ((void*)0),
                            FUNC_1("Can't get entries of non-directory"));


  return FUNC_4(VAR_2, VAR_3->fs, VAR_7, VAR_4,
                                           VAR_5, VAR_6);
}
