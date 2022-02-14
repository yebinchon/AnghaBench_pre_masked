
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
struct copying_stream_baton {int * target; int * source; } ;
typedef int apr_pool_t ;


 struct copying_stream_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (struct copying_stream_baton*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static svn_stream_t *
FUNC_6(svn_stream_t *VAR_3,
               svn_stream_t *VAR_4,
               apr_pool_t *VAR_5)
{
  struct copying_stream_baton *VAR_6;
  svn_stream_t *VAR_7;

  VAR_6 = FUNC_0(VAR_5, sizeof (*VAR_6));
  VAR_6->source = VAR_3;
  VAR_6->target = VAR_4;

  VAR_7 = FUNC_1(VAR_6, VAR_5);
  FUNC_3(VAR_7, ((void*)0) ,
                       VAR_1);
  FUNC_2(VAR_7, VAR_0);

  if (FUNC_5(VAR_3) && FUNC_5(VAR_4))
    {
      FUNC_4(VAR_7, VAR_2);
    }

  return VAR_7;
}
