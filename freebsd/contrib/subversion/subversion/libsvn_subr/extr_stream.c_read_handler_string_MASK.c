
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct string_stream_baton {scalar_t__ amt_read; TYPE_1__* str; } ;
typedef scalar_t__ apr_size_t ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ data; } ;


 int * VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1, char *VAR_2, apr_size_t *VAR_3)
{
  struct string_stream_baton *VAR_4 = VAR_1;
  apr_size_t VAR_5 = VAR_4->str->len - VAR_4->amt_read;

  *VAR_3 = (*VAR_3 > VAR_5) ? VAR_5 : *VAR_3;
  FUNC_0(VAR_2, VAR_4->str->data + VAR_4->amt_read, *VAR_3);
  VAR_4->amt_read += *VAR_3;
  return VAR_0;
}
