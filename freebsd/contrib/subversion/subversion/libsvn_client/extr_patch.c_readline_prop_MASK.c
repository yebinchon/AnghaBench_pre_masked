
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {int offset; TYPE_1__* value; } ;
typedef TYPE_3__ prop_read_baton_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int len; char const* data; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char const) ;
 TYPE_2__* FUNC_1 (int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_3, svn_stringbuf_t **VAR_4, const char **VAR_5,
              svn_boolean_t *VAR_6, apr_pool_t *VAR_7,
              apr_pool_t *VAR_8)
{
  prop_read_baton_t *VAR_9 = VAR_3;
  svn_stringbuf_t *VAR_10 = ((void*)0);
  const char *VAR_11;
  svn_boolean_t VAR_12;

  if ((apr_uint64_t)VAR_9->offset >= (apr_uint64_t)VAR_9->value->len)
    {
      *VAR_5 = ((void*)0);
      *VAR_6 = VAR_2;
      *VAR_4 = ((void*)0);
      return VAR_1;
    }



  *VAR_5 = ((void*)0);
  VAR_12 = VAR_0;
  do
    {
      VAR_11 = VAR_9->value->data + VAR_9->offset;
      VAR_9->offset++;

      if (*VAR_11 == '\0')
        {
          VAR_12 = VAR_2;
          break;
        }
      else if (*VAR_11 == '\n')
        {
          *VAR_5 = "\n";
        }
      else if (*VAR_11 == '\r')
        {
          *VAR_5 = "\r";
          if (*(VAR_11 + 1) == '\n')
            {
              *VAR_5 = "\r\n";
              VAR_9->offset++;
            }
        }
      else
        {
          if (VAR_10 == ((void*)0))
            VAR_10 = FUNC_1(80, VAR_7);
          FUNC_0(VAR_10, *VAR_11);
        }

      if (*VAR_5)
        break;
    }
  while (VAR_11 < VAR_9->value->data + VAR_9->value->len);

  if (VAR_6)
    *VAR_6 = VAR_12 && !(VAR_10 && VAR_10->len > 0);
  *VAR_4 = VAR_10;

  return VAR_1;
}
