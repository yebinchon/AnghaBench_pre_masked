
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_mark_t ;
typedef int svn_error_t ;
struct copying_stream_baton {int target; int source; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2, const svn_stream_mark_t *VAR_3)
{
  struct copying_stream_baton *VAR_4 = VAR_2;


  if (VAR_3)
    {
      return FUNC_1(VAR_0,
                              ((void*)0), ((void*)0));
    }
  else
    {
      FUNC_0(FUNC_2(VAR_4->source));
      FUNC_0(FUNC_2(VAR_4->target));
    }

  return VAR_1;
}
