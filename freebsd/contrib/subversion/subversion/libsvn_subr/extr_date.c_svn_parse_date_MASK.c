
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_time_t ;
struct TYPE_6__ {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_gmtoff; } ;
typedef TYPE_1__ apr_time_exp_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int * FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__*,char*,char const*) ;
 int* VAR_4 ;
 int FUNC_5 (TYPE_1__*,scalar_t__*,int ,char const*,int *) ;

svn_error_t *
FUNC_6(svn_boolean_t *VAR_5, apr_time_t *VAR_6, const char *VAR_7,
               apr_time_t VAR_8, apr_pool_t *VAR_9)
{
  apr_time_exp_t VAR_10, VAR_11;
  apr_status_t VAR_12;
  svn_boolean_t VAR_13;

  *VAR_5 = VAR_1;

  VAR_12 = FUNC_2(&VAR_11, VAR_8);
  if (VAR_12 != VAR_0)
    return FUNC_3(VAR_12, FUNC_0("Can't manipulate current date"));

  if (FUNC_4(&VAR_10, &VAR_13,
                     "YYYY-M[M]-D[D]",
                     VAR_7)
      || FUNC_4(&VAR_10, &VAR_13,
                        "YYYY-M[M]-D[D]Th[h]:mm[:ss[.u[u[u[u[u[u][Z]",
                        VAR_7)
      || FUNC_4(&VAR_10, &VAR_13,
                        "YYYY-M[M]-D[D]Th[h]:mm[:ss[.u[u[u[u[u[u]+OO[:oo]",
                        VAR_7)
      || FUNC_4(&VAR_10, &VAR_13,
                        "YYYYMMDD",
                        VAR_7)
      || FUNC_4(&VAR_10, &VAR_13,
                        "YYYYMMDDThhmm[ss[.u[u[u[u[u[u][Z]",
                        VAR_7)
      || FUNC_4(&VAR_10, &VAR_13,
                        "YYYYMMDDThhmm[ss[.u[u[u[u[u[u]+OO[oo]",
                        VAR_7)
      || FUNC_4(&VAR_10, &VAR_13,
                        "YYYY-M[M]-D[D] h[h]:mm[:ss[.u[u[u[u[u[u][ +OO[oo]",
                        VAR_7)
      || FUNC_4(&VAR_10, &VAR_13,
                        "YYYY-M[M]-D[D]Th[h]:mm[:ss[.u[u[u[u[u[u]+OO[oo]",
                        VAR_7))
    {
      VAR_10.tm_year -= 1900;
      VAR_10.tm_mon -= 1;
    }
  else if (FUNC_4(&VAR_10, &VAR_13,
                          "h[h]:mm[:ss[.u[u[u[u[u[u]",
                          VAR_7))
    {
      VAR_10.tm_year = VAR_11.tm_year;
      VAR_10.tm_mon = VAR_11.tm_mon;
      VAR_10.tm_mday = VAR_11.tm_mday;
    }
  else if (!FUNC_5(&VAR_10, &VAR_13, VAR_8, VAR_7, VAR_9))
    return VAR_2;


  if (VAR_10.tm_mon < 0 || VAR_10.tm_mon > 11
      || VAR_10.tm_mday > VAR_4[VAR_10.tm_mon]
      || VAR_10.tm_mday < 1
      || VAR_10.tm_hour > 23
      || VAR_10.tm_min > 59
      || VAR_10.tm_sec > 60)
    return VAR_2;



  if (VAR_10.tm_mon == 1
      && VAR_10.tm_mday == 29
      && (VAR_10.tm_year % 4 != 0
          || (VAR_10.tm_year % 100 == 0 && VAR_10.tm_year % 400 != 100)))
    return VAR_2;

  if (VAR_13)
    {
      apr_time_t VAR_14;
      apr_time_exp_t VAR_15;
      VAR_10.tm_gmtoff = VAR_11.tm_gmtoff;
      VAR_12 = FUNC_1(&VAR_14, &VAR_10);
      if (VAR_12 != VAR_0)
        return FUNC_3(VAR_12,
                                  FUNC_0("Can't calculate requested date"));
      VAR_12 = FUNC_2(&VAR_15, VAR_14);
      if (VAR_12 != VAR_0)
        return FUNC_3(VAR_12, FUNC_0("Can't expand time"));
      VAR_10.tm_gmtoff = VAR_15.tm_gmtoff;
    }
  VAR_12 = FUNC_1(VAR_6, &VAR_10);
  if (VAR_12 != VAR_0)
    return FUNC_3(VAR_12, FUNC_0("Can't calculate requested date"));

  *VAR_5 = VAR_3;
  return VAR_2;
}
