
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_5__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_6__ {int size; TYPE_3__* sub_tables; } ;
typedef TYPE_2__ string_table_t ;
struct TYPE_7__ {int data_size; int short_string_count; int long_string_count; TYPE_1__* long_strings; int short_strings; int data; } ;
typedef TYPE_3__ string_sub_table_t ;
typedef int string_header_t ;
typedef size_t apr_size_t ;


 int FUNC_0 (int *,void const* const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void const* const*,int) ;

void
FUNC_3(svn_temp_serializer__context_t *VAR_0,
                                 string_table_t **VAR_1)
{
  apr_size_t VAR_2, VAR_3;
  string_table_t *VAR_4 = *VAR_1;
  if (VAR_4 == ((void*)0))
    return;


  FUNC_2(VAR_0,
                            (const void * const *)VAR_1,
                            sizeof(*VAR_4));


  FUNC_2(VAR_0,
                            (const void * const *)&VAR_4->sub_tables,
                            sizeof(*VAR_4->sub_tables) *
                            VAR_4->size);


  for (VAR_2 = 0; VAR_2 < VAR_4->size; ++VAR_2)
    {
      string_sub_table_t *VAR_5 = &VAR_4->sub_tables[VAR_2];
      FUNC_0(VAR_0,
                                    (const void * const *)&VAR_5->data,
                                    VAR_5->data_size);
      FUNC_0(VAR_0,
                    (const void * const *)&VAR_5->short_strings,
                    VAR_5->short_string_count * sizeof(string_header_t));


      FUNC_2(VAR_0,
                    (const void * const *)&VAR_5->long_strings,
                    VAR_5->long_string_count * sizeof(svn_string_t));


      for (VAR_3 = 0; VAR_3 < VAR_5->long_string_count; ++VAR_3)
        {
          svn_string_t *VAR_6 = &VAR_5->long_strings[VAR_3];
          FUNC_0(VAR_0,
                                        (const void * const *)&VAR_6->data,
                                        VAR_6->len + 1);
        }

      FUNC_1(VAR_0);
    }


  FUNC_1(VAR_0);
  FUNC_1(VAR_0);
}
