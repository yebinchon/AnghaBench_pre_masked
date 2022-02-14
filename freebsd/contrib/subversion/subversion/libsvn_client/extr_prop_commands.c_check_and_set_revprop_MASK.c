
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,char const*,int ) ;
 int FUNC_3 (int *,int ,char const*,int *,TYPE_1__ const*,int *) ;
 int FUNC_4 (int *,int ,char const*,TYPE_1__**,int *) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_revnum_t *VAR_2,
                      svn_ra_session_t *VAR_3,
                      const char *VAR_4,
                      const svn_string_t *VAR_5,
                      const svn_string_t *VAR_6,
                      apr_pool_t *VAR_7)
{
  if (VAR_5)
    {

      svn_string_t *VAR_8;
      FUNC_0(FUNC_4(VAR_3, *VAR_2, VAR_4, &VAR_8, VAR_7));

      if (VAR_5->data && (! VAR_8))
        {
          return FUNC_2(
                  VAR_0, ((void*)0),
                  FUNC_1("revprop '%s' in r%ld is unexpectedly absent "
                    "in repository (maybe someone else deleted it?)"),
                  VAR_4, *VAR_2);
        }
      else if (VAR_5->data
               && (! FUNC_5(VAR_5, VAR_8)))
        {
          return FUNC_2(
                  VAR_0, ((void*)0),
                  FUNC_1("revprop '%s' in r%ld has unexpected value "
                    "in repository (maybe someone else changed it?)"),
                  VAR_4, *VAR_2);
        }
      else if ((! VAR_5->data) && VAR_8)
        {
          return FUNC_2(
                  VAR_0, ((void*)0),
                  FUNC_1("revprop '%s' in r%ld is unexpectedly present "
                    "in repository (maybe someone else set it?)"),
                  VAR_4, *VAR_2);
        }
    }

  FUNC_0(FUNC_3(VAR_3, *VAR_2, VAR_4,
                                  ((void*)0), VAR_6, VAR_7));

  return VAR_1;
}
