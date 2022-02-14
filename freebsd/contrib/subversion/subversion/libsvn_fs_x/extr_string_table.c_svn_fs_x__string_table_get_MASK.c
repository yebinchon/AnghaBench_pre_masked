
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t size; TYPE_3__* sub_tables; } ;
typedef TYPE_2__ string_table_t ;
struct TYPE_10__ {size_t long_string_count; size_t short_string_count; TYPE_4__* short_strings; TYPE_1__* long_strings; } ;
typedef TYPE_3__ string_sub_table_t ;
struct TYPE_11__ {size_t head_length; size_t tail_length; } ;
typedef TYPE_4__ string_header_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {size_t len; char* data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 char* FUNC_0 (int *,size_t) ;
 char const* FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (char*,size_t,TYPE_3__*,TYPE_4__*) ;

const char*
FUNC_3(const string_table_t *VAR_4,
                           apr_size_t VAR_5,
                           apr_size_t *VAR_6,
                           apr_pool_t *VAR_7)
{
  apr_size_t VAR_8 = VAR_5 >> VAR_3;
  apr_size_t VAR_9 = VAR_5 & VAR_2;

  if (VAR_8 < VAR_4->size)
    {
      string_sub_table_t *VAR_10 = &VAR_4->sub_tables[VAR_8];
      if (VAR_5 & VAR_0)
        {
          if (VAR_9 < VAR_10->long_string_count)
            {
              if (VAR_6)
                *VAR_6 = VAR_10->long_strings[VAR_9].len;

              return FUNC_1(VAR_7,
                                    VAR_10->long_strings[VAR_9].data,
                                    VAR_10->long_strings[VAR_9].len);
            }
        }
      else
        {
          if (VAR_9 < VAR_10->short_string_count)
            {
              string_header_t *VAR_11 = VAR_10->short_strings + VAR_9;
              apr_size_t VAR_12 = VAR_11->head_length + VAR_11->tail_length;
              char *VAR_13 = FUNC_0(VAR_7, VAR_12 + VAR_1);

              if (VAR_6)
                *VAR_6 = VAR_12;
              FUNC_2(VAR_13, VAR_12, VAR_10, VAR_11);

              return VAR_13;
            }
        }
    }

  return FUNC_1(VAR_7, "", 0);
}
