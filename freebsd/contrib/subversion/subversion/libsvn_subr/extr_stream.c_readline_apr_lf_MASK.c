
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* data; int len; scalar_t__ blocksize; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__,int ,...) ;
 int * FUNC_7 (char const**,int *,int *) ;
 int FUNC_8 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_9 (scalar_t__,int *) ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_11(apr_file_t *VAR_5,
                svn_stringbuf_t **VAR_6,
                svn_boolean_t *VAR_7,
                apr_pool_t *VAR_8)
{
  svn_stringbuf_t *VAR_9;

  VAR_9 = FUNC_9(VAR_3, VAR_8);
  while (1)
  {
    apr_status_t VAR_10;

    VAR_10 = FUNC_2(VAR_9->data + VAR_9->len,
                           (int) (VAR_9->blocksize - VAR_9->len),
                           VAR_5);
    VAR_9->len += FUNC_3(VAR_9->data + VAR_9->len);

    if (FUNC_0(VAR_10))
      {

        if (VAR_9->len > 0 && VAR_9->data[VAR_9->len - 1] == '\n')
          FUNC_8(VAR_9, 1);

        *VAR_7 = VAR_4;
        *VAR_6 = VAR_9;
        return VAR_2;
      }
    else if (VAR_10 != VAR_0)
      {
        const char *VAR_11;
        svn_error_t *VAR_12 = FUNC_7(&VAR_11, VAR_5, VAR_8);
        if (VAR_12)
          VAR_11 = ((void*)0);
        FUNC_5(VAR_12);

        if (VAR_11)
          return FUNC_6(VAR_10,
                                    FUNC_1("Can't read a line from file '%s'"),
                                    FUNC_4(VAR_11, VAR_8));
        else
          return FUNC_6(VAR_10,
                                    FUNC_1("Can't read a line from stream"));
      }


    if (VAR_9->len > 0 && VAR_9->data[VAR_9->len - 1] == '\n')
      {
        FUNC_8(VAR_9, 1);
        *VAR_7 = VAR_1;
        *VAR_6 = VAR_9;
        return VAR_2;
      }


    FUNC_10(VAR_9, VAR_9->blocksize + VAR_3);
  }
}
