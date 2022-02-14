
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_packed__int_stream_t ;
typedef int svn_packed__data_root_t ;
typedef int svn_packed__byte_stream_t ;
typedef int svn_error_t ;
struct TYPE_7__ {size_t size; TYPE_3__* sub_tables; } ;
typedef TYPE_2__ string_table_t ;
struct TYPE_8__ {size_t short_string_count; size_t long_string_count; TYPE_1__* long_strings; TYPE_4__* short_strings; scalar_t__ data_size; int data; } ;
typedef TYPE_3__ string_sub_table_t ;
struct TYPE_9__ {size_t head_string; size_t head_length; size_t tail_start; size_t tail_length; } ;
typedef TYPE_4__ string_header_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {scalar_t__ len; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *,size_t) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;

svn_error_t *
FUNC_8(svn_stream_t *VAR_3,
                             const string_table_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  apr_size_t VAR_6, VAR_7;

  svn_packed__data_root_t *VAR_8 = FUNC_6(VAR_5);

  svn_packed__int_stream_t *VAR_9
    = FUNC_4(VAR_8, VAR_0, VAR_0);
  svn_packed__int_stream_t *VAR_10
    = FUNC_4(VAR_8, VAR_0, VAR_0);
  svn_packed__byte_stream_t *VAR_11
    = FUNC_3(VAR_8);
  svn_packed__byte_stream_t *VAR_12
    = FUNC_3(VAR_8);

  FUNC_5(VAR_10, VAR_2, VAR_0);
  FUNC_5(VAR_10, VAR_0, VAR_0);
  FUNC_5(VAR_10, VAR_2, VAR_0);
  FUNC_5(VAR_10, VAR_0, VAR_0);



  FUNC_2(VAR_9, VAR_4->size);



  for (VAR_6 = 0; VAR_6 < VAR_4->size; ++VAR_6)
    FUNC_2(VAR_9,
                         VAR_4->sub_tables[VAR_6].short_string_count);

  for (VAR_6 = 0; VAR_6 < VAR_4->size; ++VAR_6)
    FUNC_2(VAR_9,
                         VAR_4->sub_tables[VAR_6].long_string_count);



  for (VAR_6 = 0; VAR_6 < VAR_4->size; ++VAR_6)
    {
      string_sub_table_t *VAR_13 = &VAR_4->sub_tables[VAR_6];
      FUNC_1(VAR_12,
                            VAR_13->data,
                            VAR_13->data_size);

      for (VAR_7 = 0; VAR_7 < VAR_13->short_string_count; ++VAR_7)
        {
          string_header_t *VAR_14 = &VAR_13->short_strings[VAR_7];

          FUNC_2(VAR_10, VAR_14->head_string);
          FUNC_2(VAR_10, VAR_14->head_length);
          FUNC_2(VAR_10, VAR_14->tail_start);
          FUNC_2(VAR_10, VAR_14->tail_length);
        }

      for (VAR_7 = 0; VAR_7 < VAR_13->long_string_count; ++VAR_7)
        FUNC_1(VAR_11,
                              VAR_13->long_strings[VAR_7].data,
                              VAR_13->long_strings[VAR_7].len + 1);
    }



  FUNC_0(FUNC_7(VAR_3, VAR_8, VAR_5));

  return VAR_1;
}
