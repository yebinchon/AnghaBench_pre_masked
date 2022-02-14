
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int apr_time_t ;
struct TYPE_4__ {int tm_gmtoff; int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef TYPE_1__ apr_time_exp_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int,int ,scalar_t__,scalar_t__,int ,int ,int ,int ,int,int) ;
 scalar_t__ FUNC_4 (char*,int*,int,int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const**,char*,int *) ;

const char *
FUNC_8(apr_time_t VAR_3, apr_pool_t *VAR_4)
{
  apr_time_exp_t VAR_5;
  apr_size_t VAR_6, VAR_7;
  apr_status_t VAR_8;
  char *VAR_9, *VAR_10, VAR_11[VAR_2];


  VAR_8 = FUNC_5(&VAR_5, VAR_3);
  if (VAR_8)
    return ((void*)0);


  VAR_9 = FUNC_2(VAR_4, VAR_2);


  VAR_6 = FUNC_3(VAR_9,
                     VAR_2,
                     VAR_0,
                     VAR_5.tm_year + 1900,
                     VAR_5.tm_mon + 1,
                     VAR_5.tm_mday,
                     VAR_5.tm_hour,
                     VAR_5.tm_min,
                     VAR_5.tm_sec,
                     VAR_5.tm_gmtoff / (60 * 60),
                     (FUNC_0(VAR_5.tm_gmtoff) / 60) % 60);


  if (VAR_6 >= VAR_2)
    return VAR_9;


  VAR_10 = VAR_9 + VAR_6;


  VAR_8 = FUNC_4(VAR_11,
                     &VAR_7,
                     VAR_2 - VAR_6,
                     VAR_1,
                     &VAR_5);


  if (VAR_8 || VAR_7 == 0)
    *VAR_10 = '\0';
  else
    {
      const char *VAR_12;
      svn_error_t *VAR_13;

      VAR_13 = FUNC_7(&VAR_12, VAR_11, VAR_4);
      if (VAR_13)
        {
          *VAR_10 = '\0';
          FUNC_6(VAR_13);
        }
      else
        FUNC_1(VAR_10, VAR_12, VAR_2 - VAR_6);
    }

  return VAR_9;
}
