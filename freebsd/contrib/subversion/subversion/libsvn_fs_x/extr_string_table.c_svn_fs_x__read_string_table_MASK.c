
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; void* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_packed__int_stream_t ;
typedef int svn_packed__data_root_t ;
typedef int svn_packed__byte_stream_t ;
typedef int svn_error_t ;
struct TYPE_8__ {size_t size; TYPE_3__* sub_tables; } ;
typedef TYPE_2__ string_table_t ;
struct TYPE_9__ {size_t short_string_count; int long_string_count; TYPE_1__* long_strings; int data_size; void* data; TYPE_4__* short_strings; } ;
typedef TYPE_3__ string_sub_table_t ;
struct TYPE_10__ {void* tail_length; void* tail_start; void* head_length; void* head_string; } ;
typedef TYPE_4__ string_header_t ;
typedef void* apr_uint16_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int **,int *,int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 void* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

svn_error_t *
FUNC_10(string_table_t **VAR_1,
                            svn_stream_t *VAR_2,
                            apr_pool_t *VAR_3,
                            apr_pool_t *VAR_4)
{
  apr_size_t VAR_5, VAR_6;

  string_table_t *VAR_7 = FUNC_1(VAR_3, sizeof(*VAR_7));

  svn_packed__data_root_t *VAR_8;
  svn_packed__int_stream_t *VAR_9;
  svn_packed__byte_stream_t *VAR_10;
  svn_packed__byte_stream_t *VAR_11;
  svn_packed__int_stream_t *VAR_12;

  FUNC_0(FUNC_3(&VAR_8, VAR_2, VAR_3, VAR_4));
  VAR_9 = FUNC_5(VAR_8);
  VAR_12 = FUNC_9(VAR_9);
  VAR_10 = FUNC_4(VAR_8);
  VAR_11 = FUNC_8(VAR_10);



  VAR_7->size = (apr_size_t)FUNC_7(VAR_9);
  VAR_7->sub_tables = FUNC_2(VAR_3,
                                  VAR_7->size * sizeof(*VAR_7->sub_tables));



  for (VAR_5 = 0; VAR_5 < VAR_7->size; ++VAR_5)
    {
      string_sub_table_t *VAR_13 = &VAR_7->sub_tables[VAR_5];

      VAR_13->short_string_count
        = (apr_size_t)FUNC_7(VAR_9);
      if (VAR_13->short_string_count)
        {
          VAR_13->short_strings
            = FUNC_2(VAR_3, VAR_13->short_string_count
                                    * sizeof(*VAR_13->short_strings));



          for (VAR_6 = 0; VAR_6 < VAR_13->short_string_count; ++VAR_6)
            {
              string_header_t *VAR_14 = &VAR_13->short_strings[VAR_6];

              VAR_14->head_string = (apr_uint16_t)FUNC_7(VAR_12);
              VAR_14->head_length = (apr_uint16_t)FUNC_7(VAR_12);
              VAR_14->tail_start = (apr_uint16_t)FUNC_7(VAR_12);
              VAR_14->tail_length = (apr_uint16_t)FUNC_7(VAR_12);
            }
        }

      VAR_13->data = FUNC_6(VAR_11,
                                              &VAR_13->data_size);
    }



  for (VAR_5 = 0; VAR_5 < VAR_7->size; ++VAR_5)
    {

      string_sub_table_t *VAR_15 = &VAR_7->sub_tables[VAR_5];

      VAR_15->long_string_count = FUNC_7(VAR_9);
      if (VAR_15->long_string_count)
        {
          VAR_15->long_strings
            = FUNC_2(VAR_3, VAR_15->long_string_count
                                    * sizeof(*VAR_15->long_strings));



          for (VAR_6 = 0; VAR_6 < VAR_15->long_string_count; ++VAR_6)
            {
              svn_string_t *VAR_16 = &VAR_15->long_strings[VAR_6];
              VAR_16->data = FUNC_6(VAR_10,
                                                   &VAR_16->len);
              VAR_16->len--;
            }
        }
    }



  *VAR_1 = VAR_7;

  return VAR_0;
}
