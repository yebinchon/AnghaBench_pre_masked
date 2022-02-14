
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*,size_t,char const*) ;
 int * FUNC_3 (int ,int *,int ,char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__**,char*,scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(apr_hash_t **VAR_2,
                  svn_stream_t *VAR_3,
                  apr_pool_t *VAR_4)
{
  *VAR_2 = FUNC_4(VAR_4);

  while (1)
    {
      svn_stringbuf_t *VAR_5;
      const char *VAR_6, *VAR_7;
      apr_size_t VAR_8 = 0;
      apr_size_t VAR_9;
      svn_boolean_t VAR_10;

      FUNC_0(FUNC_5(VAR_3, &VAR_5, "\n", &VAR_10,
                                  VAR_4));

      if (VAR_10 || VAR_5->len == 0)
        break;

      while (VAR_5->data[VAR_8] != ':')
        {
          if (VAR_5->data[VAR_8] == '\0')
            return FUNC_3(VAR_0, ((void*)0),
                                     FUNC_1("Found malformed header '%s' in "
                                       "revision file"),
                                     VAR_5->data);
          VAR_8++;
        }


      VAR_5->data[VAR_8] = '\0';
      VAR_6 = VAR_5->data;
      VAR_9 = VAR_8;


      if (VAR_8 + 2 > VAR_5->len)
        {

          VAR_5->data[VAR_8] = ':';
          return FUNC_3(VAR_0, ((void*)0),
                                   FUNC_1("Found malformed header '%s' in "
                                     "revision file"),
                                   VAR_5->data);
        }


      VAR_8 += 2;

      VAR_7 = VAR_5->data + VAR_8;



      FUNC_2(*VAR_2, VAR_6, VAR_9, VAR_7);
    }

  return VAR_1;
}
