
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_14__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_13__ {TYPE_3__* (* get_inherited_props ) (TYPE_2__*,int **,char const*,int ,int *,int *) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int **,char const*,int ,int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,char const*,int ,int **,int *,int *) ;
 int FUNC_5 (char const*) ;

svn_error_t *
FUNC_6(svn_ra_session_t *VAR_2,
                           apr_array_header_t **VAR_3,
                           const char *VAR_4,
                           svn_revnum_t VAR_5,
                           apr_pool_t *VAR_6,
                           apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8;

  FUNC_1(FUNC_5(VAR_4));

  VAR_8 = VAR_2->vtable->get_inherited_props(VAR_2, VAR_3, VAR_4,
                                             VAR_5, VAR_6,
                                             VAR_7);

  if (VAR_8 && VAR_8->apr_err == VAR_0)
    {
      FUNC_3(VAR_8);


      FUNC_0(FUNC_4(VAR_2, VAR_4, VAR_5, VAR_3,
                                               VAR_6, VAR_7));
    }
  else
    FUNC_0(VAR_8);

  return VAR_1;
}
