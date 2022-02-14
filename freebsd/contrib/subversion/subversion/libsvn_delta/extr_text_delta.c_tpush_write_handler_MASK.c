
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
struct tpush_baton {scalar_t__ source_len; scalar_t__ buf; scalar_t__ target_len; int source_offset; int whb; int (* wh ) (int *,int ) ;scalar_t__ source_done; int source; int pool; } ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (scalar_t__,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__,char const*,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_3, const char *VAR_4, apr_size_t *VAR_5)
{
  struct tpush_baton *VAR_6 = VAR_3;
  apr_size_t VAR_7, VAR_8 = *VAR_5;
  apr_pool_t *VAR_9 = FUNC_5(VAR_6->pool);
  svn_txdelta_window_t *VAR_10;

  while (VAR_8 > 0)
    {
      FUNC_4(VAR_9);


      if (VAR_6->source_len == 0 && !VAR_6->source_done)
        {
          VAR_6->source_len = VAR_0;
          FUNC_0(FUNC_7(VAR_6->source, VAR_6->buf, &VAR_6->source_len));
          if (VAR_6->source_len < VAR_0)
            VAR_6->source_done = VAR_2;
        }


      VAR_7 = VAR_0 - VAR_6->target_len;
      if (VAR_7 > VAR_8)
        VAR_7 = VAR_8;
      FUNC_2(VAR_6->buf + VAR_6->source_len + VAR_6->target_len, VAR_4, VAR_7);
      VAR_4 += VAR_7;
      VAR_8 -= VAR_7;
      VAR_6->target_len += VAR_7;


      if (VAR_6->target_len == VAR_0)
        {
          VAR_10 = FUNC_1(VAR_6->buf, VAR_6->source_len, VAR_6->target_len,
                                  VAR_6->source_offset, VAR_9);
          FUNC_0(VAR_6->wh(VAR_10, VAR_6->whb));
          VAR_6->source_offset += VAR_6->source_len;
          VAR_6->source_len = 0;
          VAR_6->target_len = 0;
        }
    }

  FUNC_6(VAR_9);
  return VAR_1;
}
