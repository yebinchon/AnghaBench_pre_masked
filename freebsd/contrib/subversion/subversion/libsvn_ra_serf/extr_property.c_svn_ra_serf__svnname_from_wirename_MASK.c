
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 char const* VAR_8 ;
 char const* VAR_9 ;
 char const* VAR_10 ;
 char const* VAR_11 ;
 int VAR_12 ;
 char const* FUNC_0 (int *,char const*,char const*,int ) ;
 char const* FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

const char *
FUNC_3(const char *VAR_13,
                                   const char *VAR_14,
                                   apr_pool_t *VAR_15)
{
  if (*VAR_13 == '\0' || FUNC_2(VAR_13, VAR_0) == 0)
    return FUNC_1(VAR_15, VAR_14);

  if (FUNC_2(VAR_13, VAR_2) == 0)
    return FUNC_0(VAR_15, VAR_10, VAR_14, VAR_12);

  if (FUNC_2(VAR_13, VAR_10) == 0)
    return FUNC_0(VAR_15, VAR_10, VAR_14, VAR_12);

  if (FUNC_2(VAR_14, VAR_4) == 0)
    return VAR_6;

  if (FUNC_2(VAR_14, VAR_3) == 0)
    return VAR_5;

  if (FUNC_2(VAR_14, "creator-displayname") == 0)
    return VAR_7;

  if (FUNC_2(VAR_14, "repository-uuid") == 0)
    return VAR_9;

  if (FUNC_2(VAR_14, "lock-token") == 0)
    return VAR_8;

  if (FUNC_2(VAR_14, "checked-in") == 0)
    return VAR_11;

  if (FUNC_2(VAR_13, "DAV:") == 0 || FUNC_2(VAR_13, VAR_1) == 0)
    {


      return ((void*)0);
    }


  return FUNC_0(VAR_15, VAR_13, VAR_14, VAR_12);
}
