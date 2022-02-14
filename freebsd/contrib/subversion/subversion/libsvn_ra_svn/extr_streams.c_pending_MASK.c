
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int reqevents; int * p; } ;
typedef TYPE_1__ apr_pollfd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int*,int ) ;

__attribute__((used)) static svn_boolean_t FUNC_1(apr_pollfd_t *VAR_2, apr_pool_t *VAR_3)
{
  apr_status_t VAR_4;
  int VAR_5;

  VAR_2->p = VAR_3;
  VAR_2->reqevents = VAR_0;
  VAR_4 = FUNC_0(VAR_2, 1, &VAR_5, 0);
  return (VAR_4 == VAR_1 && VAR_5);
}
