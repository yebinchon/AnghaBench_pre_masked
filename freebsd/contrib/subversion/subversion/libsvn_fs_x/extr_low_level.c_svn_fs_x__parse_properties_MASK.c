
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef scalar_t__ apr_byte_t ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (char const*) ;
 scalar_t__* FUNC_5 (int*,scalar_t__ const*,scalar_t__ const*) ;
 int * FUNC_6 (int ,int *,char*) ;

svn_error_t *
FUNC_7(apr_hash_t **VAR_2,
                           const svn_string_t *VAR_3,
                           apr_pool_t *VAR_4)
{
  const apr_byte_t *VAR_5 = (const apr_byte_t *)VAR_3->data;
  const apr_byte_t *VAR_6 = VAR_5 + VAR_3->len;
  apr_uint64_t VAR_7;

  *VAR_2 = FUNC_1(VAR_4);


  VAR_5 = FUNC_5(&VAR_7, VAR_5, VAR_6);






  while (VAR_5 < VAR_6)
    {
      apr_uint64_t VAR_8;
      svn_string_t *VAR_9;

      const char *VAR_10 = (const char *)VAR_5;



      apr_size_t VAR_11 = FUNC_4(VAR_10);
      VAR_5 += VAR_11 + 1;
      if (VAR_10[VAR_11])
        return FUNC_6(VAR_0, ((void*)0),
                                 "Property name not NUL terminated");

      if (VAR_5 >= VAR_6)
        return FUNC_6(VAR_0, ((void*)0),
                                 "Property value missing");
      VAR_5 = FUNC_5(&VAR_8, VAR_5, VAR_6);
      if (VAR_8 >= (VAR_6 - VAR_5))
        return FUNC_6(VAR_0, ((void*)0),
                                 "Property value too long");

      VAR_9 = FUNC_3(VAR_4, sizeof(*VAR_9));
      VAR_9->data = (const char *)VAR_5;
      VAR_9->len = (apr_size_t)VAR_8;
      if (VAR_5[VAR_9->len])
        return FUNC_6(VAR_0, ((void*)0),
                                 "Property value not NUL terminated");

      VAR_5 += VAR_9->len + 1;

      FUNC_2(*VAR_2, VAR_10, VAR_11, VAR_9);
    }


  if ((apr_uint64_t)FUNC_0(*VAR_2) != VAR_7)
    return FUNC_6(VAR_0, ((void*)0),
                             "Property count mismatch");

  return VAR_1;
}
