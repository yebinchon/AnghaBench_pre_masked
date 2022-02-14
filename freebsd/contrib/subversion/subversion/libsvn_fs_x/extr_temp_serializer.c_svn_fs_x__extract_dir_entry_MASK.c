
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int out_of_date; scalar_t__ txn_filesize; int hint; int name; } ;
typedef TYPE_1__ svn_fs_x__ede_baton_t ;
struct TYPE_11__ {int name; } ;
typedef TYPE_2__ svn_fs_x__dirent_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_12__ {scalar_t__ txn_filesize; int count; int lengths; int entries; } ;
typedef TYPE_3__ dir_data_t ;
typedef size_t apr_uint32_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *,TYPE_2__ const*,size_t) ;
 size_t FUNC_1 (TYPE_2__**,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const* const*,int ,int) ;
 void* FUNC_3 (TYPE_2__ const* const*,void const* const*) ;
 int FUNC_4 (TYPE_2__*,void**) ;

svn_error_t *
FUNC_5(void **VAR_2,
                            const void *VAR_3,
                            apr_size_t VAR_4,
                            void *VAR_5,
                            apr_pool_t *VAR_6)
{
  const dir_data_t *VAR_7 = VAR_3;
  svn_fs_x__ede_baton_t *VAR_8 = VAR_5;
  svn_boolean_t VAR_9;
  apr_size_t VAR_10;


  const svn_fs_x__dirent_t * const *VAR_11 =
    FUNC_3(VAR_3, (const void *const *)&VAR_7->entries);


  const apr_uint32_t *VAR_12 =
    FUNC_3(VAR_3, (const void *const *)&VAR_7->lengths);



  VAR_8->out_of_date = VAR_7->txn_filesize != VAR_8->txn_filesize;



  *VAR_2 = ((void*)0);
  if (VAR_7->count == 0)
    return VAR_0;



  if ( VAR_8->hint < VAR_7->count - 1
      && FUNC_2(VAR_11, VAR_8->name, VAR_8->hint + 1))
    {

      VAR_10 = VAR_8->hint + 1;
      VAR_9 = VAR_1;
    }
  else
    {

      VAR_10 = FUNC_1((svn_fs_x__dirent_t **)VAR_11, VAR_8->name,
                       VAR_7->count, &VAR_9);
    }


  if (VAR_9)
    VAR_8->hint = VAR_10;



  if (VAR_9 && !VAR_8->out_of_date)
    {
      const svn_fs_x__dirent_t *VAR_13 =
          FUNC_3(VAR_11, (const void *const *)&VAR_11[VAR_10]);






      apr_size_t VAR_14 = VAR_12[VAR_10];


      svn_fs_x__dirent_t *VAR_15 = FUNC_0(VAR_6, VAR_13, VAR_14);

      FUNC_4(VAR_15, (void **)&VAR_15->name);
      *(svn_fs_x__dirent_t **)VAR_2 = VAR_15;
    }

  return VAR_0;
}
