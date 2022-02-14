
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int * markers; int output_stream; } ;
typedef TYPE_1__ merge_output_baton_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(merge_output_baton_t *VAR_0, int VAR_1)
{
  FUNC_0(FUNC_2(VAR_0->output_stream, VAR_0->markers[VAR_1]));
  return FUNC_1(VAR_0);
}
