
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_13__ {TYPE_7__* entries; } ;
typedef TYPE_1__ svn_fs_fs__dir_data_t ;
struct TYPE_14__ {int kind; int id; int name; } ;
typedef TYPE_2__ svn_fs_dirent_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef int svn_cache__t ;
typedef int svn_boolean_t ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_3__ pair_cache_key_t ;
typedef int node_revision_t ;
struct TYPE_16__ {char const* name; scalar_t__ out_of_date; int txn_filesize; } ;
typedef TYPE_4__ extract_dir_entry_baton_t ;
typedef int apr_pool_t ;
struct TYPE_17__ {int nelts; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int * FUNC_5 (int *,void const**,TYPE_3__*,int *,int *) ;
 int FUNC_6 (void**,int *,int *,void const*,int ,TYPE_4__*,int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,void const*,TYPE_1__*,int *) ;
 int VAR_2 ;
 TYPE_2__* FUNC_9 (TYPE_7__*,char const*,int *) ;
 int FUNC_10 (int ,int *) ;

svn_error_t *
FUNC_11(svn_fs_dirent_t **VAR_3,
                                  svn_fs_t *VAR_4,
                                  node_revision_t *VAR_5,
                                  const char *VAR_6,
                                  apr_pool_t *VAR_7,
                                  apr_pool_t *VAR_8)
{
  extract_dir_entry_baton_t VAR_9;
  svn_boolean_t VAR_10 = VAR_0;


  pair_cache_key_t VAR_11 = { 0 };
  const void *VAR_12;
  svn_cache__t *VAR_13 = FUNC_5(VAR_4, &VAR_12, &VAR_11, VAR_5,
                                         VAR_8);
  if (VAR_13)
    {
      svn_filesize_t VAR_14;
      FUNC_0(FUNC_4(&VAR_14, VAR_4, VAR_5, VAR_8));


      VAR_9.txn_filesize = VAR_14;
      VAR_9.name = VAR_6;
      FUNC_0(FUNC_6((void **)VAR_3,
                                     &VAR_10,
                                     VAR_13,
                                     VAR_12,
                                     VAR_2,
                                     &VAR_9,
                                     VAR_7));
    }


  if (! VAR_10 || VAR_9.out_of_date)
    {
      svn_fs_dirent_t *VAR_15;
      svn_fs_dirent_t *VAR_16 = ((void*)0);
      svn_fs_fs__dir_data_t VAR_17;


      FUNC_0(FUNC_3(&VAR_17, VAR_4, VAR_5, VAR_8,
                               VAR_8));






      if (VAR_13 && FUNC_7(VAR_13, 150 * VAR_17.entries->nelts))
        FUNC_0(FUNC_8(VAR_13, VAR_12, &VAR_17, VAR_8));


      VAR_15 = FUNC_9(VAR_17.entries, VAR_6, ((void*)0));
      if (VAR_15)
        {
          VAR_16 = FUNC_1(VAR_7, sizeof(*VAR_16));
          VAR_16->name = FUNC_2(VAR_7, VAR_15->name);
          VAR_16->id = FUNC_10(VAR_15->id, VAR_7);
          VAR_16->kind = VAR_15->kind;
        }

      *VAR_3 = VAR_16;
    }

  return VAR_1;
}
