
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
 int FUNC_0 (TYPE_1__*,char const*,scalar_t__,int ,int *,int *,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,scalar_t__*) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1, const char *VAR_2, apr_size_t *VAR_3)
{
  struct encode_baton *VAR_4 = VAR_1;
  svn_stringbuf_t *VAR_5 = FUNC_3(VAR_4->scratch_pool);
  apr_size_t VAR_6;
  svn_error_t *VAR_7 = VAR_0;


  FUNC_0(VAR_5, VAR_2, *VAR_3, VAR_4->buf, &VAR_4->buflen, &VAR_4->linelen,
               VAR_4->break_lines);
  VAR_6 = VAR_5->len;
  if (VAR_6 != 0)
    VAR_7 = FUNC_2(VAR_4->output, VAR_5->data, &VAR_6);
  FUNC_1(VAR_4->scratch_pool);
  return VAR_7;
}
