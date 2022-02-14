
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct decode_baton {int output; int buflen; int buf; int pool; } ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,scalar_t__,int ,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,scalar_t__*) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1, const char *VAR_2, apr_size_t *VAR_3)
{
  struct decode_baton *VAR_4 = VAR_1;
  apr_pool_t *VAR_5;
  svn_stringbuf_t *VAR_6;
  apr_size_t VAR_7;
  svn_error_t *VAR_8 = VAR_0;


  VAR_5 = FUNC_1(VAR_4->pool);
  VAR_6 = FUNC_4(VAR_5);
  FUNC_0(VAR_6, VAR_2, *VAR_3, VAR_4->buf, &VAR_4->buflen);


  VAR_7 = VAR_6->len;
  if (VAR_7 != 0)
    VAR_8 = FUNC_3(VAR_4->output, VAR_6->data, &VAR_7);
  FUNC_2(VAR_5);
  return VAR_8;
}
