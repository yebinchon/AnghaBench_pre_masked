
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
typedef int svn_fs_dirent_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_5__ {int * new_entry; int name; int txn_filesize; } ;
typedef TYPE_1__ replace_baton_t ;
typedef int lengths ;
typedef int entries ;
struct TYPE_6__ {int operations; int count; scalar_t__ over_provision; int lengths; int len; int entries; int txn_filesize; } ;
typedef TYPE_2__ dir_data_t ;
typedef int * apr_uint32_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int **,int ,int,scalar_t__*) ;
 int FUNC_2 (int **,int **,int) ;
 int FUNC_3 (int *,void**,size_t*,int ) ;
 int FUNC_4 (int *,int **,int **) ;
 int * FUNC_5 (void**,size_t*,void*,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,void const* const*) ;
 int * FUNC_7 (TYPE_2__*,int **,int ,size_t,int *) ;

svn_error_t *
FUNC_8(void **VAR_2,
                             apr_size_t *VAR_3,
                             void *VAR_4,
                             apr_pool_t *VAR_5)
{
  replace_baton_t *VAR_6 = (replace_baton_t *)VAR_4;
  dir_data_t *VAR_7 = (dir_data_t *)*VAR_2;
  svn_boolean_t VAR_8;
  svn_fs_dirent_t **VAR_9;
  apr_uint32_t *VAR_10;
  apr_uint32_t VAR_11;
  apr_size_t VAR_12;

  svn_temp_serializer__context_t *VAR_13;





  VAR_7->txn_filesize = VAR_6->txn_filesize;




  if (VAR_7->operations > 2 + VAR_7->count / 4)
    return FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);


  VAR_9 = (svn_fs_dirent_t **)
    FUNC_6(VAR_7,
                               (const void *const *)&VAR_7->entries);


  VAR_10 = (apr_uint32_t *)
    FUNC_6(VAR_7,
                               (const void *const *)&VAR_7->lengths);


  VAR_12 = FUNC_1(VAR_9, VAR_6->name, VAR_7->count, &VAR_8);


  if (VAR_6->new_entry == ((void*)0))
    {
      if (VAR_8)
        {

          FUNC_2(&VAR_9[VAR_12],
                  &VAR_9[VAR_12 + 1],
                  sizeof(VAR_9[VAR_12]) * (VAR_7->count - VAR_12));
          FUNC_2(&VAR_10[VAR_12],
                  &VAR_10[VAR_12 + 1],
                  sizeof(VAR_10[VAR_12]) * (VAR_7->count - VAR_12));

          VAR_7->count--;
          VAR_7->over_provision++;
          VAR_7->operations++;
        }

      return VAR_0;
    }


  if (!VAR_8)
    {



      if (VAR_7->over_provision == 0)
        return FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);


      FUNC_2(&VAR_9[VAR_12 + 1],
              &VAR_9[VAR_12],
              sizeof(VAR_9[VAR_12]) * (VAR_7->count - VAR_12));
      FUNC_2(&VAR_10[VAR_12 + 1],
              &VAR_10[VAR_12],
              sizeof(VAR_10[VAR_12]) * (VAR_7->count - VAR_12));

      VAR_7->count++;
      VAR_7->over_provision--;
      VAR_7->operations++;
    }


  VAR_9[VAR_12] = VAR_6->new_entry;
  VAR_13 = FUNC_7(VAR_7,
                                             VAR_9,
                                             VAR_7->len,
                                             *VAR_3,
                                             VAR_5);
  FUNC_4(VAR_13, &VAR_9[VAR_12], &VAR_11);


  FUNC_0(FUNC_3(VAR_13, VAR_2, VAR_3, VAR_1));





  VAR_7 = (dir_data_t *)*VAR_2;
  VAR_10 = (apr_uint32_t *)
    FUNC_6(VAR_7,
                               (const void *const *)&VAR_7->lengths);
  VAR_10[VAR_12] = VAR_11;

  return VAR_0;
}
