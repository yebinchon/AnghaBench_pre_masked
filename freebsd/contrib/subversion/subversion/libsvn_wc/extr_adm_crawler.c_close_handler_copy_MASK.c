
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct copying_stream_baton {int source; int target; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_0)
{
  struct copying_stream_baton *VAR_1 = VAR_0;

  FUNC_0(FUNC_1(VAR_1->target));
  return FUNC_1(VAR_1->source);
}
