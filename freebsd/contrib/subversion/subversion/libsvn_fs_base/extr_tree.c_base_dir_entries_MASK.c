
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_4__ {int * fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
struct TYPE_5__ {int kind; int id; } ;
typedef TYPE_2__ svn_fs_dirent_t ;
typedef int svn_error_t ;
struct node_kind_args {char const* path; int kind; int id; TYPE_1__* root; int ** table_p; } ;
struct dir_entries_args {char const* path; int kind; int id; TYPE_1__* root; int ** table_p; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,void**) ;
 int FUNC_4 (int *,int ,struct node_kind_args*,int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_hash_t **VAR_4,
                 svn_fs_root_t *VAR_5,
                 const char *VAR_6,
                 apr_pool_t *VAR_7)
{
  struct dir_entries_args VAR_8;
  apr_pool_t *VAR_9;
  apr_hash_t *VAR_10;
  svn_fs_t *VAR_11 = VAR_5->fs;
  apr_hash_index_t *VAR_12;

  VAR_8.table_p = &VAR_10;
  VAR_8.root = VAR_5;
  VAR_8.path = VAR_6;
  FUNC_0(FUNC_4(VAR_5->fs, VAR_2, &VAR_8,
                                 VAR_0, VAR_7));

  VAR_9 = FUNC_6(VAR_7);


  for (VAR_12 = FUNC_1(VAR_7, VAR_10); VAR_12; VAR_12 = FUNC_2(VAR_12))
    {
      svn_fs_dirent_t *VAR_13;
      struct node_kind_args VAR_14;
      void *VAR_15;

      FUNC_5(VAR_9);



      FUNC_3(VAR_12, ((void*)0), ((void*)0), &VAR_15);
      VAR_13 = VAR_15;
      VAR_14.id = VAR_13->id;




      FUNC_0(FUNC_4(VAR_11, VAR_3, &VAR_14,
                                     VAR_0, VAR_9));
      VAR_13->kind = VAR_14.kind;
    }

  FUNC_7(VAR_9);

  *VAR_4 = VAR_10;
  return VAR_1;
}
