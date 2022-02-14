
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * FUNC_0 (char*,int *) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int *,int *) ;
 TYPE_1__* FUNC_5 (int *,int *) ;
 int FUNC_6 (int **,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(serf_bucket_t **VAR_1,
                     void *VAR_2,
                     serf_bucket_alloc_t *VAR_3,
                     apr_pool_t *VAR_4 ,
                     apr_pool_t *VAR_5)
{
  apr_hash_t *VAR_6 = VAR_2;
  svn_skel_t *VAR_7;
  svn_stringbuf_t *VAR_8;

  VAR_7 = FUNC_2(VAR_4);
  if (VAR_6)
    {
      svn_skel_t *VAR_9;

      FUNC_1(FUNC_6(&VAR_9, VAR_6, VAR_4));
      FUNC_3(VAR_9, VAR_7);
      FUNC_4("create-txn-with-props", VAR_7, VAR_4);
      VAR_8 = FUNC_5(VAR_7, VAR_4);
      *VAR_1 = FUNC_0(VAR_8->data, VAR_3);
    }
  else
    {
      *VAR_1 = FUNC_0("( create-txn )", VAR_3);
    }

  return VAR_0;
}
