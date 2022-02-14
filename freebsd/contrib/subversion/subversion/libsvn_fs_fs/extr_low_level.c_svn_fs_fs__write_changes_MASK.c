
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_8__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_path_change2_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {scalar_t__ format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_10__ {int nelts; } ;
typedef TYPE_3__ apr_array_header_t ;
struct TYPE_11__ {char* key; int * value; } ;


 TYPE_6__ FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char const*,int *,int,int,int *) ;

svn_error_t *
FUNC_8(svn_stream_t *VAR_5,
                         svn_fs_t *VAR_6,
                         apr_hash_t *VAR_7,
                         svn_boolean_t VAR_8,
                         apr_pool_t *VAR_9)
{
  apr_pool_t *VAR_10 = FUNC_3(VAR_9);
  fs_fs_data_t *VAR_11 = VAR_6->fsap_data;
  svn_boolean_t VAR_12 =
      VAR_11->format >= VAR_0;
  svn_boolean_t VAR_13 =
      VAR_11->format >= VAR_1;
  apr_array_header_t *VAR_14;
  int VAR_15;
  VAR_14 = FUNC_5(VAR_7,
                                        VAR_4,
                                        VAR_9);


  for (VAR_15 = 0; VAR_15 < VAR_14->nelts; ++VAR_15)
    {
      svn_fs_path_change2_t *VAR_16;
      const char *VAR_17;

      FUNC_2(VAR_10);

      VAR_16 = FUNC_0(VAR_14, VAR_15, VAR_3).value;
      VAR_17 = FUNC_0(VAR_14, VAR_15, VAR_3).key;


      FUNC_1(FUNC_7(VAR_5, VAR_17, VAR_16, VAR_12,
                                 VAR_13, VAR_10));
    }

  if (VAR_8)
    FUNC_6(VAR_5, "\n");

  FUNC_4(VAR_10);

  return VAR_2;
}
