
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_7__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int * (* change_rev_prop ) (TYPE_2__*,int ,char const*,int const* const*,int const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (TYPE_2__*,int ,char const*,int const* const*,int const*,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int *) ;

svn_error_t *FUNC_7(svn_ra_session_t *VAR_2,
                                     svn_revnum_t VAR_3,
                                     const char *VAR_4,
                                     const svn_string_t *const *VAR_5,
                                     const svn_string_t *VAR_6,
                                     apr_pool_t *VAR_7)
{
  FUNC_1(FUNC_2(VAR_3));



  if (VAR_5)
    {
      svn_boolean_t VAR_8;

      FUNC_0(FUNC_6(VAR_2, &VAR_8,
                                    VAR_1,
                                    VAR_7));

      if (!VAR_8)


        return FUNC_5(VAR_0, ((void*)0),
                                 FUNC_3("Specifying 'old_value_p' is not allowed when "
                                   "the '%s' capability is not advertised, and "
                                   "could indicate a bug in your client"),
                                   VAR_1);
    }

  return VAR_2->vtable->change_rev_prop(VAR_2, VAR_3, VAR_4,
                                          VAR_5, VAR_6, VAR_7);
}
