
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_wc__db_t ;
struct TYPE_10__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct TYPE_11__ {int ignore_unversioned; int found_mod; int found_not_delete; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ modcheck_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int*,int *,char const*,int *) ;
 TYPE_1__* FUNC_3 (int *,char const*,int ,int ,int ,int ,int *,int ,TYPE_2__*,int ,void*,int *) ;

svn_error_t *
FUNC_4(svn_boolean_t *VAR_5,
                            svn_boolean_t *VAR_6,
                            svn_wc__db_t *VAR_7,
                            const char *VAR_8,
                            svn_boolean_t VAR_9,
                            svn_cancel_func_t VAR_10,
                            void *VAR_11,
                            apr_pool_t *VAR_12)
{
  modcheck_baton_t VAR_13 = { VAR_0, VAR_0, VAR_0 };
  svn_error_t *VAR_14;

  if (!VAR_6)
    {
      FUNC_0(FUNC_2(VAR_5, VAR_7, VAR_8,
                                     VAR_12));

      if (*VAR_5)
        return VAR_2;
    }

  VAR_13.ignore_unversioned = VAR_9;





  VAR_14 = FUNC_3(VAR_7, VAR_8,
                                     VAR_4,
                                     VAR_0, VAR_0, VAR_0, ((void*)0),
                                     VAR_3, &VAR_13,
                                     VAR_10, VAR_11,
                                     VAR_12);

  if (VAR_14 && VAR_14->apr_err == VAR_1)
    FUNC_1(VAR_14);
  else
    FUNC_0(VAR_14);

  *VAR_5 = VAR_13.found_mod;
  if (VAR_6)
    *VAR_6 = (VAR_13.found_mod
                              && !VAR_13.found_not_delete);

  return VAR_2;
}
