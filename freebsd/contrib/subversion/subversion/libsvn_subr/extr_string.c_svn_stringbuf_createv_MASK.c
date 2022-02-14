
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {char* data; int * pool; void* blocksize; void* len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef void* apr_size_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,char const*,int ) ;
 void* FUNC_2 (char*) ;

svn_stringbuf_t *
FUNC_3(apr_pool_t *VAR_0, const char *VAR_1, va_list VAR_2)
{
  char *VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
  apr_size_t VAR_4 = FUNC_2(VAR_3);
  svn_stringbuf_t *VAR_5;

  VAR_5 = FUNC_0(VAR_0, sizeof(*VAR_5));
  VAR_5->data = VAR_3;
  VAR_5->len = VAR_4;
  VAR_5->blocksize = VAR_4 + 1;
  VAR_5->pool = VAR_0;

  return VAR_5;
}
