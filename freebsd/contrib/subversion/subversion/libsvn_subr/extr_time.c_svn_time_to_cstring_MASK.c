
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_time_t ;
struct TYPE_3__ {int tm_usec; int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef TYPE_1__ apr_time_exp_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char const* FUNC_0 (int *,int ,scalar_t__,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

const char *
FUNC_2(apr_time_t VAR_1, apr_pool_t *VAR_2)
{
  apr_time_exp_t VAR_3;
  FUNC_1(&VAR_3, VAR_1);




  return FUNC_0(VAR_2,
                      VAR_0,
                      VAR_3.tm_year + 1900,
                      VAR_3.tm_mon + 1,
                      VAR_3.tm_mday,
                      VAR_3.tm_hour,
                      VAR_3.tm_min,
                      VAR_3.tm_sec,
                      VAR_3.tm_usec);
}
