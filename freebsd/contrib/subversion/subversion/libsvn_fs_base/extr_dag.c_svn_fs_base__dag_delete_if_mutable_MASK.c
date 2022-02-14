
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
struct TYPE_6__ {int * id; } ;
typedef TYPE_1__ svn_fs_dirent_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,void**) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 int * FUNC_5 (int **,TYPE_2__*,int *,int *) ;
 int * FUNC_6 (TYPE_2__**,int *,int const*,int *,int *) ;
 int * FUNC_7 (int *,int const*,char const*,int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

svn_error_t *
FUNC_11(svn_fs_t *VAR_2,
                                   const svn_fs_id_t *VAR_3,
                                   const char *VAR_4,
                                   trail_t *VAR_5,
                                   apr_pool_t *VAR_6)
{
  dag_node_t *VAR_7;


  FUNC_0(FUNC_6(&VAR_7, VAR_2, VAR_3, VAR_5, VAR_6));


  if (! FUNC_4(VAR_7, VAR_4))
    return VAR_0;


  if (VAR_7->kind == VAR_1)
    {
      apr_hash_t *VAR_8;
      apr_hash_index_t *VAR_9;


      FUNC_0(FUNC_5(&VAR_8, VAR_7, VAR_5, VAR_6));
      if (VAR_8)
        {
          apr_pool_t *VAR_10 = FUNC_9(VAR_6);
          for (VAR_9 = FUNC_1(VAR_6, VAR_8);
               VAR_9;
               VAR_9 = FUNC_2(VAR_9))
            {
              void *VAR_11;
              svn_fs_dirent_t *VAR_12;

              FUNC_8(VAR_10);
              FUNC_3(VAR_9, ((void*)0), ((void*)0), &VAR_11);
              VAR_12 = VAR_11;
              FUNC_0(FUNC_11(VAR_2, VAR_12->id,
                                                         VAR_4, VAR_5,
                                                         VAR_10));
            }
          FUNC_10(VAR_10);
        }
    }



  return FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
