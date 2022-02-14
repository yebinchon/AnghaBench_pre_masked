
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct copying_stream_baton {int target; int source; } ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int * FUNC_2 (int ,char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0, char *VAR_1, apr_size_t *VAR_2)
{
  struct copying_stream_baton *VAR_3 = VAR_0;

  FUNC_0(FUNC_1(VAR_3->source, VAR_1, VAR_2));

  return FUNC_2(VAR_3->target, VAR_1, VAR_2);
}
