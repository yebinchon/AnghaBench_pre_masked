
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int sock; } ;
typedef TYPE_1__ sock_baton_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;
typedef int apr_interval_time_t ;


 int FUNC_0 (scalar_t__) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 scalar_t__ FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int) ;
 int * FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_1, char *VAR_2, apr_size_t *VAR_3)
{
  sock_baton_t *VAR_4 = VAR_1;
  apr_status_t VAR_5;
  apr_interval_time_t VAR_6;

  VAR_5 = FUNC_3(VAR_4->sock, &VAR_6);
  if (VAR_5)
    return FUNC_5(VAR_5, FUNC_1("Can't get socket timeout"));







  FUNC_4(VAR_4->sock, -1);
  VAR_5 = FUNC_2(VAR_4->sock, VAR_2, VAR_3);
  FUNC_4(VAR_4->sock, VAR_6);

  if (VAR_5 && !FUNC_0(VAR_5))
    return FUNC_5(VAR_5, FUNC_1("Can't read from connection"));
  return VAR_0;
}
