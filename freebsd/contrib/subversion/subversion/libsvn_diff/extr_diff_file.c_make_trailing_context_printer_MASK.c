
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_3__ {int * output_stream; int pool; int context_size; } ;
typedef TYPE_1__ svn_diff3__file_output_baton_t ;
struct trailing_context_printer {TYPE_1__* fob; int lines_to_print; } ;


 struct trailing_context_printer* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,struct trailing_context_printer*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(svn_diff3__file_output_baton_t *VAR_1)
{
  struct trailing_context_printer *VAR_2;
  svn_stream_t *VAR_3;

  FUNC_1(VAR_1->pool);

  VAR_2 = FUNC_0(VAR_1->pool, sizeof(*VAR_2));
  VAR_2->lines_to_print = VAR_1->context_size;
  VAR_2->fob = VAR_1;
  VAR_3 = FUNC_2(VAR_1->pool);
  FUNC_3(VAR_3, VAR_2);
  FUNC_4(VAR_3, VAR_0);
  VAR_1->output_stream = VAR_3;
}
