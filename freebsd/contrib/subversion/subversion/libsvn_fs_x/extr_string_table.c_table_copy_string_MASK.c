
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; TYPE_2__* short_strings; } ;
typedef TYPE_1__ string_sub_table_t ;
struct TYPE_6__ {size_t head_length; int tail_start; size_t head_string; } ;
typedef TYPE_2__ string_header_t ;
typedef int const apr_uint64_t ;
typedef size_t apr_size_t ;


 int FUNC_0 (int) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_2(char *VAR_1,
                  apr_size_t VAR_2,
                  const string_sub_table_t *VAR_3,
                  string_header_t *VAR_4)
{
  VAR_1[VAR_2] = '\0';
  do
    {
      FUNC_0(VAR_4->head_length <= VAR_2);
        {
          FUNC_1(VAR_1 + VAR_4->head_length,
                 VAR_3->data + VAR_4->tail_start,
                 VAR_2 - VAR_4->head_length);
          VAR_2 = VAR_4->head_length;

        }

      VAR_4 = &VAR_3->short_strings[VAR_4->head_string];
    }
  while (VAR_2);
}
