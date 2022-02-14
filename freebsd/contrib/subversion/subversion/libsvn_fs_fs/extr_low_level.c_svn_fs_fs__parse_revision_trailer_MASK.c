
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_off_t ;
typedef scalar_t__ apr_int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,char const*) ;
 int * FUNC_3 (int ,int *,int ,int ) ;

svn_error_t *
FUNC_4(apr_off_t *VAR_2,
                                  apr_off_t *VAR_3,
                                  svn_stringbuf_t *VAR_4,
                                  svn_revnum_t VAR_5)
{
  int VAR_6, VAR_7;
  const char *VAR_8;



  VAR_7 = (int) VAR_4->len;


  if (VAR_4->len == 0 || VAR_4->data[VAR_4->len - 1] != '\n')
    {
      return FUNC_3(VAR_0, ((void*)0),
                               FUNC_1("Revision file (r%ld) lacks trailing newline"),
                               VAR_5);
    }


  for (VAR_6 = VAR_7 - 2; VAR_6 >= 0; VAR_6--)
    {
      if (VAR_4->data[VAR_6] == '\n')
        break;
    }

  if (VAR_6 < 0)
    {
      return FUNC_3(VAR_0, ((void*)0),
                               FUNC_1("Final line in revision file (r%ld) longer "
                                 "than 64 characters"),
                               VAR_5);
    }

  VAR_6++;
  VAR_8 = &VAR_4->data[VAR_6];


  for ( ; VAR_6 < (VAR_7 - 2) ; VAR_6++)
    if (VAR_4->data[VAR_6] == ' ')
      break;

  if (VAR_6 == (VAR_7 - 2))
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Final line in revision file r%ld missing space"),
                             VAR_5);

  if (VAR_2)
    {
      apr_int64_t VAR_9;

      VAR_4->data[VAR_6] = '\0';
      FUNC_0(FUNC_2(&VAR_9, VAR_8));
      *VAR_2 = (apr_off_t)VAR_9;
    }

  VAR_6++;
  VAR_8 = &VAR_4->data[VAR_6];


  for ( ; VAR_6 < VAR_7; VAR_6++)
    if (VAR_4->data[VAR_6] == '\n')
      break;

  if (VAR_3)
    {
      apr_int64_t VAR_10;

      VAR_4->data[VAR_6] = '\0';
      FUNC_0(FUNC_2(&VAR_10, VAR_8));
      *VAR_3 = (apr_off_t)VAR_10;
    }

  return VAR_1;
}
