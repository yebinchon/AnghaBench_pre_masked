
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
struct baton_tee {int * out2; int * out1; } ;
typedef int apr_pool_t ;


 struct baton_tee* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int * FUNC_1 (struct baton_tee*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;

svn_stream_t *
FUNC_4(svn_stream_t *VAR_2,
               svn_stream_t *VAR_3,
               apr_pool_t *VAR_4)
{
  struct baton_tee *VAR_5;
  svn_stream_t *VAR_6;

  if (VAR_2 == ((void*)0))
    return VAR_3;

  if (VAR_3 == ((void*)0))
    return VAR_2;

  VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  VAR_5->out1 = VAR_2;
  VAR_5->out2 = VAR_3;
  VAR_6 = FUNC_1(VAR_5, VAR_4);
  FUNC_3(VAR_6, VAR_1);
  FUNC_2(VAR_6, VAR_0);

  return VAR_6;
}
