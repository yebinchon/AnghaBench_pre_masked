
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void const* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_skel_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,void const**,int *,void**) ;
 TYPE_1__* FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (void const*,int ,int *) ;
 int FUNC_6 (int *,int *) ;

svn_error_t *
FUNC_7(svn_skel_t **VAR_1,
                                  apr_hash_t *VAR_2,
                                  apr_pool_t *VAR_3)
{
  svn_skel_t *VAR_4 = FUNC_4(VAR_3);
  apr_hash_index_t *VAR_5;


  if (VAR_2)
    {

      for (VAR_5 = FUNC_0(VAR_3, VAR_2); VAR_5; VAR_5 = FUNC_1(VAR_5))
        {
          const void *VAR_6;
          void *VAR_7;
          apr_ssize_t VAR_8;
          svn_fs_id_t *VAR_9;
          svn_string_t *VAR_10;
          svn_skel_t *VAR_11 = FUNC_4(VAR_3);

          FUNC_2(VAR_5, &VAR_6, &VAR_8, &VAR_7);
          VAR_9 = VAR_7;


          VAR_10 = FUNC_3(VAR_9, VAR_3);
          FUNC_6(FUNC_5(VAR_10->data, VAR_10->len,
                                               VAR_3),
                            VAR_11);


          FUNC_6(FUNC_5(VAR_6, VAR_8, VAR_3), VAR_11);


          FUNC_6(VAR_11, VAR_4);
        }
    }


  *VAR_1 = VAR_4;
  return VAR_0;
}
