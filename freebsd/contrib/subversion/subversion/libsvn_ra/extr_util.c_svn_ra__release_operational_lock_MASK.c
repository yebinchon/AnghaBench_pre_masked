
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_ra_session_t ;
struct TYPE_18__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*,int ,int ) ;
 TYPE_2__* FUNC_4 (int *,int ,char const*,TYPE_1__ const**,int *,int *) ;
 TYPE_2__* FUNC_5 (int *,scalar_t__*,int ,int *) ;
 TYPE_2__* FUNC_6 (int *,int ,char const*,TYPE_1__**,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__ const*) ;

svn_error_t *
FUNC_8(svn_ra_session_t *VAR_2,
                                 const char *VAR_3,
                                 const svn_string_t *VAR_4,
                                 apr_pool_t *VAR_5)
{
  svn_string_t *VAR_6;
  svn_boolean_t VAR_7;

  FUNC_0(FUNC_5(VAR_2, &VAR_7,
                                VAR_1,
                                VAR_5));
  FUNC_0(FUNC_6(VAR_2, 0, VAR_3,
                          &VAR_6, VAR_5));
  if (VAR_6 && FUNC_7(VAR_6, VAR_4))
    {
      svn_error_t *VAR_8;

      VAR_8 = FUNC_4(VAR_2, 0, VAR_3,
                                    VAR_7 ? &VAR_4 : ((void*)0), ((void*)0),
                                    VAR_5);
      if (FUNC_2(VAR_8))
        {
          return FUNC_3(VAR_8->apr_err, VAR_8,
                                   FUNC_1("Lock was stolen by '%s'; unable to "
                                     "remove it"), VAR_6->data);
        }
      else
        FUNC_0(VAR_8);
    }

  return VAR_0;
}
