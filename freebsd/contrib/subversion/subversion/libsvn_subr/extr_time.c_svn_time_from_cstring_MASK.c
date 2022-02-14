
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int apr_time_t ;
struct TYPE_3__ {void* tm_mon; void* tm_wday; scalar_t__ tm_yday; void* tm_year; scalar_t__ tm_gmtoff; scalar_t__ tm_isdst; void* tm_usec; void* tm_sec; void* tm_min; void* tm_hour; void* tm_mday; } ;
typedef TYPE_1__ apr_time_exp_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef void* apr_int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 void* FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char const*,int ,char*,void**,char*,void**,void**,void**,void**,void**,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (char const*,char const**) ;
 int * FUNC_4 (int ,int *,int *) ;

svn_error_t *
FUNC_5(apr_time_t *VAR_6, const char *VAR_7, apr_pool_t *VAR_8)
{
  apr_time_exp_t VAR_9;
  apr_status_t VAR_10;
  char VAR_11[4], VAR_12[4];
  const char *VAR_13;




  VAR_9.tm_year = (apr_int32_t) FUNC_3(VAR_7, &VAR_13);
  if (*VAR_13++ != '-') goto fail;
  VAR_9.tm_mon = (apr_int32_t) FUNC_3(VAR_13, &VAR_13);
  if (*VAR_13++ != '-') goto fail;
  VAR_9.tm_mday = (apr_int32_t) FUNC_3(VAR_13, &VAR_13);
  if (*VAR_13++ != 'T') goto fail;
  VAR_9.tm_hour = (apr_int32_t) FUNC_3(VAR_13, &VAR_13);
  if (*VAR_13++ != ':') goto fail;
  VAR_9.tm_min = (apr_int32_t) FUNC_3(VAR_13, &VAR_13);
  if (*VAR_13++ != ':') goto fail;
  VAR_9.tm_sec = (apr_int32_t) FUNC_3(VAR_13, &VAR_13);
  if (*VAR_13++ != '.') goto fail;
  VAR_9.tm_usec = (apr_int32_t) FUNC_3(VAR_13, &VAR_13);
  if (*VAR_13++ != 'Z') goto fail;

  VAR_9.tm_year -= 1900;
  VAR_9.tm_mon -= 1;
  VAR_9.tm_wday = 0;
  VAR_9.tm_yday = 0;
  VAR_9.tm_isdst = 0;
  VAR_9.tm_gmtoff = 0;

  VAR_10 = FUNC_0(VAR_6, &VAR_9);
  if (VAR_10 == VAR_0)
    return VAR_3;

  return FUNC_4(VAR_2, ((void*)0), ((void*)0));

 fail:



  if (FUNC_2(VAR_7,
             VAR_1,
             VAR_11,
             &VAR_9.tm_mday,
             VAR_12,
             &VAR_9.tm_year,
             &VAR_9.tm_hour,
             &VAR_9.tm_min,
             &VAR_9.tm_sec,
             &VAR_9.tm_usec,
             &VAR_9.tm_yday,
             &VAR_9.tm_isdst,
             &VAR_9.tm_gmtoff) == 11)
    {
      VAR_9.tm_year -= 1900;
      VAR_9.tm_yday -= 1;


      VAR_9.tm_wday = FUNC_1(VAR_11, 7, VAR_4);
      VAR_9.tm_mon = FUNC_1(VAR_12, 12, VAR_5);

      VAR_10 = FUNC_0(VAR_6, &VAR_9);
      if (VAR_10 != VAR_0)
        return FUNC_4(VAR_2, ((void*)0), ((void*)0));

      return VAR_3;
    }

  else
    return FUNC_4(VAR_2, ((void*)0), ((void*)0));
}
