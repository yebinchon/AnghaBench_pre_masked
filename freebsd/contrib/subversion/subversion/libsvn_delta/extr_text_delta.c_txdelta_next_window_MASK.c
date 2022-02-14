
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
struct txdelta_baton {int more_source; scalar_t__ buf; scalar_t__ pos; int * context; int more; int result_pool; int checksum; int target; int source; } ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int * FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_txdelta_window_t **VAR_3,
                    void *VAR_4,
                    apr_pool_t *VAR_5)
{
  struct txdelta_baton *VAR_6 = VAR_4;
  apr_size_t VAR_7 = VAR_1;
  apr_size_t VAR_8 = VAR_1;


  if (VAR_6->more_source)
    {
      FUNC_0(FUNC_4(VAR_6->source, VAR_6->buf, &VAR_7));
      VAR_6->more_source = (VAR_7 == VAR_1);
    }
  else
    VAR_7 = 0;


  FUNC_0(FUNC_4(VAR_6->target, VAR_6->buf + VAR_7, &VAR_8));
  VAR_6->pos += VAR_7;

  if (VAR_8 == 0)
    {

      if (VAR_6->context != ((void*)0))
        FUNC_0(FUNC_2(&VAR_6->checksum, VAR_6->context, VAR_6->result_pool));

      *VAR_3 = ((void*)0);
      VAR_6->more = VAR_0;
      return VAR_2;
    }
  else if (VAR_6->context != ((void*)0))
    FUNC_0(FUNC_3(VAR_6->context, VAR_6->buf + VAR_7, VAR_8));

  *VAR_3 = FUNC_1(VAR_6->buf, VAR_7, VAR_8,
                           VAR_6->pos - VAR_7, VAR_5);


  return VAR_2;
}
