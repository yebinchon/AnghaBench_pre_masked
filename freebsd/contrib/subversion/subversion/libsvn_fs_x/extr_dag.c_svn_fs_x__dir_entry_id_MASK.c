
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_8__ {int id; } ;
typedef TYPE_2__ svn_fs_x__dirent_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int hint; int fs; TYPE_1__* node_revision; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int ,int *,char*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__**,int ,TYPE_1__*,char const*,int *,int *,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char const*) ;

svn_error_t *
FUNC_7(svn_fs_x__id_t *VAR_4,
                       dag_node_t *VAR_5,
                       const char *VAR_6,
                       apr_pool_t *VAR_7)
{
  svn_fs_x__dirent_t *VAR_8;
  svn_fs_x__noderev_t *VAR_9 = VAR_5->node_revision;

  if (VAR_9->kind != VAR_3)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Can't get entries of non-directory"));


  if (! FUNC_6(VAR_6))
    return FUNC_3
      (VAR_1, ((void*)0),
       "Attempted to open node with an illegal name '%s'", VAR_6);


  FUNC_0(FUNC_5(&VAR_8, VAR_5->fs, VAR_9,
                                           VAR_6, &VAR_5->hint,
                                           VAR_7, VAR_7));
  if (VAR_8)
    *VAR_4 = VAR_8->id;
  else
    FUNC_4(VAR_4);

  return VAR_2;
}
