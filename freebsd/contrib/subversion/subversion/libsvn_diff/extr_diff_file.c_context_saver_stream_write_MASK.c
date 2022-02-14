
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int context_size; char const** data; size_t next_slot; int total_writes; int * len; } ;
typedef TYPE_1__ context_saver_t ;
typedef int apr_size_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_1,
                           const char *VAR_2,
                           apr_size_t *VAR_3)
{
  context_saver_t *VAR_4 = VAR_1;

  if (VAR_4->context_size > 0)
    {
      VAR_4->data[VAR_4->next_slot] = VAR_2;
      VAR_4->len[VAR_4->next_slot] = *VAR_3;
      VAR_4->next_slot = (VAR_4->next_slot + 1) % VAR_4->context_size;
      VAR_4->total_writes++;
    }
  return VAR_0;
}
