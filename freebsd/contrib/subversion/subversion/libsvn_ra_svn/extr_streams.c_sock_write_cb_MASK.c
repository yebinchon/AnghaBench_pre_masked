
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


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 int * FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1, const char *VAR_2, apr_size_t *VAR_3)
{
  sock_baton_t *VAR_4 = VAR_1;
  apr_status_t VAR_5 = FUNC_1(VAR_4->sock, VAR_2, VAR_3);
  if (VAR_5)
    return FUNC_2(VAR_5, FUNC_0("Can't write to connection"));
  return VAR_0;
}
