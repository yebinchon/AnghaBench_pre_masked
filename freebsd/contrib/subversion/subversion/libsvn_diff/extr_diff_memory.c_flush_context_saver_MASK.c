
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int context_size; int next_slot; size_t* len; scalar_t__* data; } ;
typedef TYPE_1__ context_saver_t ;
typedef size_t apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,scalar_t__,size_t*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(context_saver_t *VAR_1,
                    svn_stream_t *VAR_2)
{
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1->context_size; VAR_3++)
    {
      apr_size_t VAR_4 = (VAR_3 + VAR_1->next_slot) % VAR_1->context_size;
      if (VAR_1->data[VAR_4])
        {
          apr_size_t VAR_5 = VAR_1->len[VAR_4];
          FUNC_0(FUNC_1(VAR_2, VAR_1->data[VAR_4], &VAR_5));
        }
    }
  return VAR_0;
}
