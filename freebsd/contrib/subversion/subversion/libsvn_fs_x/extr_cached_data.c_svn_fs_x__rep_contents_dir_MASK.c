
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_7__ {scalar_t__ txn_filesize; TYPE_2__* entries; } ;
typedef TYPE_1__ svn_fs_x__dir_data_t ;
typedef int svn_fs_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef int svn_cache__t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_3 (scalar_t__*,int *,int *,int *) ;
 int * FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (void**,scalar_t__*,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,TYPE_1__*,int *) ;

svn_error_t *
FUNC_8(apr_array_header_t **VAR_1,
                           svn_fs_t *VAR_2,
                           svn_fs_x__noderev_t *VAR_3,
                           apr_pool_t *VAR_4,
                           apr_pool_t *VAR_5)
{
  svn_fs_x__id_t VAR_6;
  svn_fs_x__dir_data_t *VAR_7;


  svn_cache__t *VAR_8 = FUNC_4(VAR_2, &VAR_6, VAR_3);
  svn_boolean_t VAR_9;

  FUNC_0(FUNC_5((void **)&VAR_7, &VAR_9, VAR_8, &VAR_6, VAR_4));
  if (VAR_9)
    {


      svn_filesize_t VAR_10;
      FUNC_0(FUNC_3(&VAR_10, VAR_2, VAR_3, VAR_5));

      if (VAR_10 == VAR_7->txn_filesize)
        {

          *VAR_1 = VAR_7->entries;
          return VAR_0;
        }
    }


  VAR_7 = FUNC_1(VAR_5, sizeof(*VAR_7));
  FUNC_0(FUNC_2(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5));
  *VAR_1 = VAR_7->entries;






  if (FUNC_6(VAR_8, 100 * VAR_7->entries->nelts))
    FUNC_0(FUNC_7(VAR_8, &VAR_6, VAR_7, VAR_5));

  return VAR_0;
}
