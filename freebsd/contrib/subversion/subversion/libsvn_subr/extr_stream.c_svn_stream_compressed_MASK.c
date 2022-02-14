
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svn_stream_t {int dummy; } ;
typedef struct svn_stream_t svn_stream_t ;
struct zbaton {int read_flush; int * read_buffer; int * pool; struct svn_stream_t* substream; int * out; int in; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 struct zbaton* FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct svn_stream_t* FUNC_2 (struct zbaton*,int *) ;
 int FUNC_3 (struct svn_stream_t*,int ) ;
 int FUNC_4 (struct svn_stream_t*,int *,int ) ;
 int FUNC_5 (struct svn_stream_t*,int ) ;
 int VAR_3 ;

svn_stream_t *
FUNC_6(svn_stream_t *VAR_4, apr_pool_t *VAR_5)
{
  struct svn_stream_t *VAR_6;
  struct zbaton *VAR_7;

  FUNC_1(VAR_4 != ((void*)0));

  VAR_7 = FUNC_0(VAR_5, sizeof(*VAR_7));
  VAR_7->in = *(VAR_7->out = ((void*)0));
  VAR_7->substream = VAR_4;
  VAR_7->pool = VAR_5;
  VAR_7->read_buffer = ((void*)0);
  VAR_7->read_flush = VAR_0;

  VAR_6 = FUNC_2(VAR_7, VAR_5);
  FUNC_4(VAR_6, ((void*)0) ,
                       VAR_2);
  FUNC_5(VAR_6, VAR_3);
  FUNC_3(VAR_6, VAR_1);

  return VAR_6;
}
