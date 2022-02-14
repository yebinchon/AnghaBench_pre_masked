
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_spillbuf_t ;
struct spillbuf_baton {int scratch_pool; TYPE_1__* reader; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * buf; } ;


 struct spillbuf_baton* FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct spillbuf_baton*,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;

svn_stream_t *
FUNC_6(svn_spillbuf_t *VAR_2,
                          apr_pool_t *VAR_3)
{
  svn_stream_t *VAR_4;
  struct spillbuf_baton *VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_5));

  VAR_5->reader = FUNC_1(VAR_3, sizeof(*VAR_5->reader));
  VAR_5->reader->buf = VAR_2;
  VAR_5->scratch_pool = FUNC_2(VAR_3);

  VAR_4 = FUNC_3(VAR_5, VAR_3);

  FUNC_4(VAR_4, ((void*)0) ,
                       VAR_0);
  FUNC_5(VAR_4, VAR_1);

  return VAR_4;
}
