
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; scalar_t__ len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct base85_baton_t {scalar_t__ buf_size; scalar_t__ buf_pos; scalar_t__ next_pos; scalar_t__ end_pos; scalar_t__ buffer; scalar_t__ done; int file; int * iterpool; } ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int,char*,scalar_t__,int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (scalar_t__*,int ,int *) ;
 int FUNC_6 (int ,TYPE_1__**,int *,scalar_t__*,int ,int *,int *) ;
 int FUNC_7 (int ,int ,scalar_t__*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_5, char *VAR_6, apr_size_t *VAR_7)
{
  struct base85_baton_t *VAR_8 = VAR_5;
  apr_pool_t *VAR_9 = VAR_8->iterpool;
  apr_size_t VAR_10 = *VAR_7;
  char *VAR_11 = VAR_6;

  FUNC_8(VAR_9);

  if (VAR_8->done)
    {
      *VAR_7 = 0;
      return VAR_3;
    }

  while (VAR_10 && (VAR_8->buf_size > VAR_8->buf_pos
                       || VAR_8->next_pos < VAR_8->end_pos))
    {
      svn_stringbuf_t *VAR_12;
      svn_boolean_t VAR_13;

      apr_size_t VAR_14 = VAR_8->buf_size - VAR_8->buf_pos;
      if (VAR_14)
        {
          apr_size_t VAR_15 = (VAR_10 < VAR_14) ? VAR_10 : VAR_14;

          FUNC_2(VAR_11, VAR_8->buffer + VAR_8->buf_pos, VAR_15);
          VAR_11 += VAR_15;
          VAR_10 -= VAR_15;
          VAR_8->buf_pos += VAR_15;

          if (!VAR_10)
            return VAR_3;
        }

      if (VAR_8->next_pos >= VAR_8->end_pos)
        break;
      FUNC_0(FUNC_7(VAR_8->file, VAR_0, &VAR_8->next_pos,
                               VAR_9));
      FUNC_0(FUNC_6(VAR_8->file, &VAR_12, ((void*)0), &VAR_13,
                                   VAR_1, VAR_9, VAR_9));
      if (VAR_13)
        VAR_8->next_pos = VAR_8->end_pos;
      else
        {
          FUNC_0(FUNC_5(&VAR_8->next_pos, VAR_8->file,
                                         VAR_9));
        }

      if (VAR_12->len && VAR_12->data[0] >= 'A' && VAR_12->data[0] <= 'Z')
        VAR_8->buf_size = VAR_12->data[0] - 'A' + 1;
      else if (VAR_12->len && VAR_12->data[0] >= 'a' && VAR_12->data[0] <= 'z')
        VAR_8->buf_size = VAR_12->data[0] - 'a' + 26 + 1;
      else
        return FUNC_4(VAR_2, ((void*)0),
                                FUNC_1("Unexpected data in base85 section"));

      if (VAR_8->buf_size < 52)
        VAR_8->next_pos = VAR_8->end_pos;

      FUNC_0(FUNC_3(VAR_8->buffer, VAR_8->buf_size,
                                           VAR_12->data + 1, VAR_12->len - 1,
                                           VAR_9));
      VAR_8->buf_pos = 0;
    }

  *VAR_7 -= VAR_10;
  VAR_8->done = VAR_4;

  return VAR_3;
}
