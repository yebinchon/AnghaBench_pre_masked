
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_12__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_11__ {TYPE_3__* (* get_locations ) (TYPE_2__*,int **,char const*,int ,int const*,int *) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int **,char const*,int ,int const*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int **,char const*,int ,int const*,int *) ;
 int FUNC_5 (char const*) ;

svn_error_t *FUNC_6(svn_ra_session_t *VAR_1,
                                  apr_hash_t **VAR_2,
                                  const char *VAR_3,
                                  svn_revnum_t VAR_4,
                                  const apr_array_header_t *VAR_5,
                                  apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7;

  FUNC_0(FUNC_1(VAR_4));
  FUNC_0(FUNC_5(VAR_3));
  VAR_7 = VAR_1->vtable->get_locations(VAR_1, VAR_2, VAR_3,
                                       VAR_4, VAR_5, VAR_6);
  if (VAR_7 && (VAR_7->apr_err == VAR_0))
    {
      FUNC_3(VAR_7);


      VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3,
                                       VAR_4, VAR_5,
                                       VAR_6);
    }
  return VAR_7;
}
