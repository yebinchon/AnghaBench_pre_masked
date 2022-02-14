
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_fs_id_t ;
struct TYPE_10__ {int id; int name; } ;
typedef TYPE_1__ svn_fs_dirent_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_11__ {int out_of_date; scalar_t__ txn_filesize; int name; } ;
typedef TYPE_2__ extract_dir_entry_baton_t ;
struct TYPE_12__ {scalar_t__ txn_filesize; int count; int lengths; int entries; } ;
typedef TYPE_3__ dir_data_t ;
typedef size_t apr_uint32_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__ const*,size_t) ;
 size_t FUNC_1 (TYPE_1__**,int ,int ,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,int **) ;
 void* FUNC_3 (TYPE_1__ const* const*,void const* const*) ;
 int FUNC_4 (TYPE_1__*,void**) ;

svn_error_t *
FUNC_5(void **VAR_1,
                             const void *VAR_2,
                             apr_size_t VAR_3,
                             void *VAR_4,
                             apr_pool_t *VAR_5)
{
  const dir_data_t *VAR_6 = VAR_2;
  extract_dir_entry_baton_t *VAR_7 = VAR_4;
  svn_boolean_t VAR_8;


  const svn_fs_dirent_t * const *VAR_9 =
    FUNC_3(VAR_2, (const void *const *)&VAR_6->entries);


  const apr_uint32_t *VAR_10 =
    FUNC_3(VAR_2, (const void *const *)&VAR_6->lengths);


  apr_size_t VAR_11 = FUNC_1((svn_fs_dirent_t **)VAR_9,
                              VAR_7->name,
                              VAR_6->count,
                              &VAR_8);



  VAR_7->out_of_date
    = VAR_6->txn_filesize != VAR_7->txn_filesize;

  *VAR_1 = ((void*)0);
  if (VAR_8 && !VAR_7->out_of_date)
    {
      const svn_fs_dirent_t *VAR_12 =
          FUNC_3(VAR_9, (const void *const *)&VAR_9[VAR_11]);






      apr_size_t VAR_13 = VAR_10[VAR_11];


      svn_fs_dirent_t *VAR_14 = FUNC_0(VAR_5, VAR_12, VAR_13);

      FUNC_4(VAR_14, (void **)&VAR_14->name);
      FUNC_2(VAR_14, (svn_fs_id_t **)&VAR_14->id);
      *(svn_fs_dirent_t **)VAR_1 = VAR_14;
    }

  return VAR_0;
}
