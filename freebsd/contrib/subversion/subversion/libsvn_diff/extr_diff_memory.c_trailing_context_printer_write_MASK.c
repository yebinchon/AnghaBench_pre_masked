
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct trailing_context_printer {scalar_t__ lines_to_print; TYPE_1__* mob; } ;
typedef int apr_size_t ;
struct TYPE_2__ {int real_output_stream; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
                               const char *VAR_2,
                               apr_size_t *VAR_3)
{
  struct trailing_context_printer *VAR_4 = VAR_1;
  FUNC_1(VAR_4->lines_to_print > 0);
  FUNC_0(FUNC_3(VAR_4->mob->real_output_stream, VAR_2, VAR_3));
  VAR_4->lines_to_print--;
  if (VAR_4->lines_to_print == 0)
    FUNC_2(VAR_4->mob);
  return VAR_0;
}
