
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct string_stream_baton {scalar_t__ amt_read; TYPE_1__* str; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_1, svn_boolean_t *VAR_2)
{
  struct string_stream_baton *VAR_3 = VAR_1;

  *VAR_2 = ((VAR_3->str->len - VAR_3->amt_read) > 0);
  return VAR_0;
}
