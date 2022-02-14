
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_t ;
struct TYPE_4__ {char* path; } ;
typedef TYPE_1__ apr_uri_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,TYPE_1__*) ;
 char* FUNC_1 (int *,TYPE_1__*,int ) ;
 char* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 char const* FUNC_5 (char const*,int *) ;
 scalar_t__ FUNC_6 (char const*,int *) ;

__attribute__((used)) static const char *
FUNC_7(serf_bucket_t *VAR_1,
                      const char *VAR_2,
                      apr_pool_t *VAR_3,
                      apr_pool_t *VAR_4)
{
  serf_bucket_t *VAR_5;
  const char *VAR_6;

  VAR_5 = FUNC_3(VAR_1);
  VAR_6 = FUNC_2(VAR_5, "Location");
  if (VAR_6 == ((void*)0))
    return ((void*)0);







  if (*VAR_6 == '/')
    {
      apr_uri_t VAR_7;
      apr_status_t VAR_8;

      VAR_8 = FUNC_0(VAR_4, VAR_2, &VAR_7);

      if (VAR_8 != VAR_0)
        return ((void*)0);


      VAR_7.path = (char*)FUNC_6(VAR_6, VAR_4);


      VAR_6 = FUNC_1(VAR_4, &VAR_7, 0);


    }
  else if (!FUNC_4(VAR_6))
    {
      return ((void*)0);
    }

  return FUNC_5(VAR_6, VAR_3);
}
