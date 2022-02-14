
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pending_error; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_status_t ;
struct TYPE_6__ {int apr_err; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static apr_status_t
FUNC_1(svn_ra_serf__session_t *VAR_1,
           svn_error_t *VAR_2)
{
  if (VAR_2 || VAR_1->pending_error)
    {
      VAR_1->pending_error = FUNC_0(
                                  VAR_1->pending_error,
                                  VAR_2);
      return VAR_1->pending_error->apr_err;
    }

  return VAR_0;
}
