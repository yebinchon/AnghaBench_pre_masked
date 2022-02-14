
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct stringbuf_stream_baton {int amt_read; TYPE_1__* str; } ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_2__ {char* data; int len; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char const*) ;
 int * FUNC_2 (char const*,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_3,
                           svn_stringbuf_t **VAR_4,
                           const char *VAR_5,
                           svn_boolean_t *VAR_6,
                           apr_pool_t *VAR_7)
{
  struct stringbuf_stream_baton *VAR_8 = VAR_3;
  const char *VAR_9 = VAR_8->str->data + VAR_8->amt_read;
  const char *VAR_10;

  VAR_10 = FUNC_1(VAR_9, VAR_5);
  if (VAR_10)
    {
      apr_size_t VAR_11 = FUNC_0(VAR_5);

      *VAR_6 = VAR_0;
      *VAR_4 = FUNC_2(VAR_9, VAR_10 - VAR_9, VAR_7);
      VAR_8->amt_read += (VAR_10 - VAR_9 + VAR_11);
    }
  else
    {
      *VAR_6 = VAR_2;
      *VAR_4 = FUNC_2(VAR_9, VAR_8->str->len - VAR_8->amt_read,
                                         VAR_7);
      VAR_8->amt_read = VAR_8->str->len;
    }

  return VAR_1;
}
