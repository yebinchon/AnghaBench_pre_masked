
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_fs_x__change_t ;
typedef int (* svn_fs_x__change_receiver_t ) (void*,int *,int *) ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

svn_error_t *
FUNC_5(svn_stream_t *VAR_1,
                                     svn_fs_x__change_receiver_t
                                       VAR_2,
                                     void *VAR_3,
                                     apr_pool_t *VAR_4)
{
  svn_fs_x__change_t *VAR_5;
  apr_pool_t *VAR_6;

  VAR_6 = FUNC_3(VAR_4);
  do
    {
      FUNC_2(VAR_6);

      FUNC_0(FUNC_1(&VAR_5, VAR_1, VAR_6, VAR_6));
      if (VAR_5)
        FUNC_0(VAR_2(VAR_3, VAR_5, VAR_6));
    }
  while (VAR_5);
  FUNC_4(VAR_6);

  return VAR_0;
}
