
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; size_t len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int ,int *,int ,char*) ;
 int FUNC_5 (int *,char const*,char const*) ;
 int FUNC_6 (int *,TYPE_1__**,char*,scalar_t__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_stream_t *VAR_3,
                  svn_stringbuf_t *VAR_4,
                  apr_hash_t **VAR_5,
                  apr_pool_t *VAR_6)
{
  *VAR_5 = FUNC_2(VAR_6);

  while (1)
    {
      svn_stringbuf_t *VAR_7;
      const char *VAR_8, *VAR_9;
      svn_boolean_t VAR_10;
      apr_size_t VAR_11 = 0;

      if (VAR_4 != ((void*)0))
        {
          VAR_7 = VAR_4;
          VAR_4 = ((void*)0);
          VAR_10 = VAR_0;
        }

      else

        FUNC_0(FUNC_6(VAR_3, &VAR_7, "\n", &VAR_10, VAR_6));

      if (FUNC_7(VAR_7))
        break;
      else if (VAR_10)
        return FUNC_3();


      while (VAR_7->data[VAR_11] != ':')
        {
          if (VAR_7->data[VAR_11] == '\0')
            return FUNC_4(VAR_1, ((void*)0),
                                     FUNC_1("Dump stream contains a malformed "
                                       "header (with no ':') at '%.20s'"),
                                     VAR_7->data);
          VAR_11++;
        }

      VAR_7->data[VAR_11] = '\0';
      VAR_8 = VAR_7->data;


      VAR_11 += 2;
      if (VAR_11 > VAR_7->len)
        return FUNC_4(VAR_1, ((void*)0),
                                 FUNC_1("Dump stream contains a malformed "
                                   "header (with no value) at '%.20s'"),
                                 VAR_7->data);


      VAR_9 = VAR_7->data + VAR_11;


      FUNC_5(*VAR_5, VAR_8, VAR_9);
    }

  return VAR_2;
}
