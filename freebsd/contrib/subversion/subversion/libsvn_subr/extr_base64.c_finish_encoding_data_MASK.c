
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct encode_baton {int scratch_pool; int output; int break_lines; int linelen; int buflen; int buf; } ;
typedef scalar_t__ apr_size_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ,scalar_t__*) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1)
{
  struct encode_baton *VAR_2 = VAR_1;
  svn_stringbuf_t *VAR_3 = FUNC_4(VAR_2->scratch_pool);
  apr_size_t VAR_4;
  svn_error_t *VAR_5 = VAR_0;


  FUNC_0(VAR_3, VAR_2->buf, VAR_2->buflen, VAR_2->linelen,
                       VAR_2->break_lines);
  VAR_4 = VAR_3->len;
  if (VAR_4 != 0)
    VAR_5 = FUNC_3(VAR_2->output, VAR_3->data, &VAR_4);


  if (VAR_5 == VAR_0)
    VAR_5 = FUNC_2(VAR_2->output);
  FUNC_1(VAR_2->scratch_pool);
  return VAR_5;
}
