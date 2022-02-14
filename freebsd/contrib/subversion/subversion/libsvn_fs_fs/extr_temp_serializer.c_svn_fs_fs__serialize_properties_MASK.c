
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_5__ {size_t len; void* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_string_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int count; char** keys; int * values; } ;
typedef TYPE_2__ properties_data_t ;
typedef int properties ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char***,int) ;
 int FUNC_7 (int *,int **,int) ;
 TYPE_1__* FUNC_8 (int *) ;
 int * FUNC_9 (TYPE_2__*,int,int,int *) ;

svn_error_t *
FUNC_10(void **VAR_1,
                                apr_size_t *VAR_2,
                                void *VAR_3,
                                apr_pool_t *VAR_4)
{
  apr_hash_t *VAR_5 = VAR_3;
  properties_data_t VAR_6;
  svn_temp_serializer__context_t *VAR_7;
  apr_hash_index_t *VAR_8;
  svn_stringbuf_t *VAR_9;
  apr_size_t VAR_10;


  VAR_6.count = FUNC_0(VAR_5);
  VAR_6.keys = FUNC_5(VAR_4, sizeof(const char*) * (VAR_6.count + 1));
  VAR_6.values = FUNC_5(VAR_4, sizeof(const svn_string_t *) * VAR_6.count);


  for (VAR_8 = FUNC_1(VAR_4, VAR_5), VAR_10=0; VAR_8; VAR_8 = FUNC_2(VAR_8), ++VAR_10)
    {
      VAR_6.keys[VAR_10] = FUNC_3(VAR_8);
      VAR_6.values[VAR_10] = FUNC_4(VAR_8);
    }


  VAR_7 = FUNC_9(&VAR_6,
                                      sizeof(VAR_6),
                                      VAR_6.count * 100,
                                      VAR_4);

  VAR_6.keys[VAR_10] = "";
  FUNC_6(VAR_7, &VAR_6.keys, VAR_6.count + 1);
  FUNC_7(VAR_7, &VAR_6.values, VAR_6.count);


  VAR_9 = FUNC_8(VAR_7);

  *VAR_1 = VAR_9->data;
  *VAR_2 = VAR_9->len;

  return VAR_0;
}
