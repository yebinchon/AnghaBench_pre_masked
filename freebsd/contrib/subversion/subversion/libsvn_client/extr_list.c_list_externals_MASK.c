
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_client_list_func2_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_9__ {int nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,char const*,TYPE_2__ const*,int ,int ,int ,int ,void*,int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__**,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(apr_hash_t *VAR_2,
               const apr_array_header_t *VAR_3,
               svn_depth_t VAR_4,
               apr_uint32_t VAR_5,
               svn_boolean_t VAR_6,
               svn_client_list_func2_t VAR_7,
               void *VAR_8,
               svn_client_ctx_t *VAR_9,
               apr_pool_t *VAR_10)
{
  apr_pool_t *VAR_11 = FUNC_7(VAR_10);
  apr_hash_index_t *VAR_12;

  for (VAR_12 = FUNC_1(VAR_10, VAR_2);
       VAR_12;
       VAR_12 = FUNC_2(VAR_12))
    {
      const char *VAR_13 = FUNC_3(VAR_12);
      svn_string_t *VAR_14 = FUNC_4(VAR_12);
      apr_array_header_t *VAR_15;

      FUNC_6(VAR_11);

      FUNC_0(FUNC_9(&VAR_15,
                                                  VAR_13,
                                                  VAR_14->data,
                                                  VAR_0, VAR_11));

      if (! VAR_15->nelts)
        continue;

      FUNC_0(FUNC_5(VAR_15, VAR_13,
                                  VAR_3, VAR_4, VAR_5,
                                  VAR_6, VAR_7, VAR_8, VAR_9,
                                  VAR_11));

    }
  FUNC_8(VAR_11);

  return VAR_1;
}
