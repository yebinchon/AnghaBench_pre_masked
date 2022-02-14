
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
struct decode_baton {int * pool; scalar_t__ buflen; int * output; } ;
typedef int apr_pool_t ;


 struct decode_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (struct decode_baton*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

svn_stream_t *
FUNC_5(svn_stream_t *VAR_2, apr_pool_t *VAR_3)
{
  apr_pool_t *VAR_4 = FUNC_1(VAR_3);
  struct decode_baton *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  svn_stream_t *VAR_6;

  VAR_5->output = VAR_2;
  VAR_5->buflen = 0;
  VAR_5->pool = VAR_4;
  VAR_6 = FUNC_2(VAR_5, VAR_3);
  FUNC_4(VAR_6, VAR_0);
  FUNC_3(VAR_6, VAR_1);
  return VAR_6;
}
