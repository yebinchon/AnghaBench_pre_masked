
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int ptrdiff_t ;
typedef int apr_time_t ;
struct TYPE_12__ {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; scalar_t__ tm_usec; int tm_wday; int tm_yday; int member_0; } ;
typedef TYPE_2__ apr_time_exp_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 char* FUNC_0 (int *,char const*,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_2 (unsigned char const**,unsigned char const*,int *,int) ;
 int FUNC_3 (char*,char*,int*,int*,int*,int*,int*,int*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_6 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(apr_time_t *VAR_3,
              const unsigned char **VAR_4,
              const unsigned char *VAR_5,
              apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7;
  apr_status_t VAR_8;
  int VAR_9;
  ptrdiff_t VAR_10;
  char *VAR_11;
  apr_time_exp_t VAR_12 = { 0 };
  char VAR_13;

  VAR_7 = FUNC_2(VAR_4, VAR_5, &VAR_10, 128);
  if (VAR_7 && VAR_7->apr_err == VAR_0)
    {
      FUNC_4(VAR_7);
      VAR_7 = FUNC_2(VAR_4, VAR_5, &VAR_10, 129);
      VAR_9 = 129;
    }
  else
    {
      VAR_9 = 128;
    }
  if (VAR_7)
    return FUNC_5(VAR_1, VAR_7, ((void*)0));

  VAR_11 = FUNC_0(VAR_6, (const char *) *VAR_4, VAR_10);
  switch (VAR_9)
    {
    case 128:
      if (FUNC_3(VAR_11, "%2d%2d%2d%2d%2d%2d%c",
                 &VAR_12.tm_year, &VAR_12.tm_mon, &VAR_12.tm_mday,
                 &VAR_12.tm_hour, &VAR_12.tm_min, &VAR_12.tm_sec, &VAR_13) < 6)
        return FUNC_5(VAR_1, ((void*)0), ((void*)0));






      VAR_12.tm_year += 100 * (VAR_12.tm_year < 50);
      break;

    case 129:
      if (FUNC_3(VAR_11, "%4d%2d%2d%2d%2d%2d%c",
                 &VAR_12.tm_year, &VAR_12.tm_mon, &VAR_12.tm_mday,
                 &VAR_12.tm_hour, &VAR_12.tm_min, &VAR_12.tm_sec, &VAR_13) < 6)
        return FUNC_5(VAR_1, ((void*)0), ((void*)0));



      VAR_12.tm_year -= 1900;
      break;

    default:


      return FUNC_5(VAR_1, ((void*)0), ((void*)0));
      break;
    }





  if (VAR_13 != 'Z')
    return FUNC_5(VAR_1, ((void*)0), ((void*)0));


  VAR_12.tm_mon -= 1;


  if (VAR_12.tm_usec < 0 ||
      VAR_12.tm_sec < 0 || VAR_12.tm_sec > 61 ||
      VAR_12.tm_min < 0 || VAR_12.tm_min > 59 ||
      VAR_12.tm_hour < 0 || VAR_12.tm_hour > 23 ||
      VAR_12.tm_mday < 1 || VAR_12.tm_mday > 31 ||
      VAR_12.tm_mon < 0 || VAR_12.tm_mon > 11 ||
      VAR_12.tm_year < 0 ||
      VAR_12.tm_wday < 0 || VAR_12.tm_wday > 6 ||
      VAR_12.tm_yday < 0 || VAR_12.tm_yday > 365)
    return FUNC_5(VAR_1, ((void*)0), ((void*)0));

  VAR_8 = FUNC_1(VAR_3, &VAR_12);
  if (VAR_8)
    return FUNC_6(VAR_8, ((void*)0));

  *VAR_4 += VAR_10;

  return VAR_2;
}
