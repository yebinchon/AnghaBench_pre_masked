
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int blocksize; int len; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,char*,scalar_t__*) ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;

svn_error_t *
FUNC_5(svn_stringbuf_t **VAR_3,
                          svn_stream_t *VAR_4,
                          apr_size_t VAR_5,
                          apr_pool_t *VAR_6)
{

  svn_stringbuf_t *VAR_7
    = FUNC_3(FUNC_0(VAR_5 + 1, 64),
                                  VAR_6);

  while(VAR_2)
    {
      apr_size_t VAR_8 = VAR_7->blocksize - 1 - VAR_7->len;
      apr_size_t VAR_9 = VAR_8;

      FUNC_1(FUNC_2(VAR_4, VAR_7->data + VAR_7->len, &VAR_9));
      VAR_7->len += VAR_9;

      if (VAR_9 < VAR_8)
        break;

      if (VAR_7->blocksize - VAR_7->len < 64)
        FUNC_4(VAR_7, VAR_7->blocksize * 2);
    }

  VAR_7->data[VAR_7->len] = '\0';
  *VAR_3 = VAR_7;

  return VAR_1;
}
