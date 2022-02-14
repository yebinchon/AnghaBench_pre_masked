
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_9__ {scalar_t__ txn_filesize; TYPE_3__* entries; } ;
typedef TYPE_1__ svn_fs_fs__dir_data_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef int svn_cache__t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_10__ {int member_0; } ;
typedef TYPE_2__ pair_cache_key_t ;
typedef int node_revision_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int nelts; } ;
typedef TYPE_3__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_3 (scalar_t__*,int *,int *,int *) ;
 int * FUNC_4 (int *,void const**,TYPE_2__*,int *,int *) ;
 int FUNC_5 (void**,scalar_t__*,int *,void const*,int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,void const*,TYPE_1__*,int *) ;

svn_error_t *
FUNC_8(apr_array_header_t **VAR_1,
                            svn_fs_t *VAR_2,
                            node_revision_t *VAR_3,
                            apr_pool_t *VAR_4,
                            apr_pool_t *VAR_5)
{
  pair_cache_key_t VAR_6 = { 0 };
  const void *VAR_7;
  svn_fs_fs__dir_data_t *VAR_8;


  svn_cache__t *VAR_9 = FUNC_4(VAR_2, &VAR_7, &VAR_6, VAR_3,
                                         VAR_5);
  if (VAR_9)
    {
      svn_boolean_t VAR_10;

      FUNC_0(FUNC_5((void **)&VAR_8, &VAR_10, VAR_9, VAR_7,
                             VAR_4));
      if (VAR_10)
        {


          svn_filesize_t VAR_11;
          FUNC_0(FUNC_3(&VAR_11, VAR_2, VAR_3, VAR_5));

          if (VAR_11 == VAR_8->txn_filesize)
            {

              *VAR_1 = VAR_8->entries;
              return VAR_0;
            }
        }
    }


  VAR_8 = FUNC_1(VAR_5, sizeof(*VAR_8));
  FUNC_0(FUNC_2(VAR_8, VAR_2, VAR_3, VAR_4, VAR_5));
  *VAR_1 = VAR_8->entries;






  if (VAR_9 && FUNC_6(VAR_9, 150 * VAR_8->entries->nelts))
    FUNC_0(FUNC_7(VAR_9, VAR_7, VAR_8, VAR_5));

  return VAR_0;
}
