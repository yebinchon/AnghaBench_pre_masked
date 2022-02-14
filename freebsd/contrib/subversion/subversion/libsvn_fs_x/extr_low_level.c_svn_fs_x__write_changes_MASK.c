
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_x__change_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int nelts; } ;
typedef TYPE_1__ apr_array_header_t ;
struct TYPE_6__ {int * value; } ;


 TYPE_3__ FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int *,int *) ;

svn_error_t *
FUNC_8(svn_stream_t *VAR_3,
                        svn_fs_t *VAR_4,
                        apr_hash_t *VAR_5,
                        svn_boolean_t VAR_6,
                        apr_pool_t *VAR_7)
{
  apr_pool_t *VAR_8 = FUNC_3(VAR_7);
  apr_array_header_t *VAR_9;
  int VAR_10;
  VAR_9 = FUNC_5(VAR_5,
                                        VAR_2,
                                        VAR_7);


  for (VAR_10 = 0; VAR_10 < VAR_9->nelts; ++VAR_10)
    {
      svn_fs_x__change_t *VAR_11;

      FUNC_2(VAR_8);
      VAR_11 = FUNC_0(VAR_9, VAR_10, VAR_1).value;


      FUNC_1(FUNC_7(VAR_3, VAR_11, VAR_8));
    }

  if (VAR_6)
    FUNC_6(VAR_3, "\n");

  FUNC_4(VAR_8);

  return VAR_0;
}
