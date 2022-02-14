
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_11__ {int number; } ;
struct TYPE_12__ {TYPE_1__ value; int kind; } ;
typedef TYPE_2__ svn_opt_revision_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 TYPE_3__* FUNC_2 (char const**,int *,int *,int *,int *,char const*,TYPE_2__*,TYPE_2__*,int *,int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_boolean_t *VAR_6,
                      const char *VAR_7,
                      svn_revnum_t VAR_8,
                      svn_ra_session_t *VAR_9,
                      svn_client_ctx_t *VAR_10,
                      apr_pool_t *VAR_11)
{
  svn_error_t *VAR_12;
  svn_opt_revision_t VAR_13, VAR_14;
  const char *VAR_15;

  VAR_14.kind = VAR_4;
  VAR_13.kind = VAR_5;
  VAR_13.value.number = VAR_8;

  VAR_12 = FUNC_2(&VAR_15, ((void*)0), ((void*)0), ((void*)0),
                                    VAR_9,
                                    VAR_7, &VAR_14,
                                    &VAR_13, ((void*)0),
                                    VAR_10, VAR_11);
  if (VAR_12 &&
      ((VAR_12->apr_err == VAR_1) ||
       (VAR_12->apr_err == VAR_2)))
    {
      FUNC_3(VAR_12);
      *VAR_6 = VAR_0;
      return VAR_3;
    }
  else
    FUNC_0(VAR_12);



  *VAR_6 = (FUNC_1(VAR_7, VAR_15) == 0);

  return VAR_3;
}
