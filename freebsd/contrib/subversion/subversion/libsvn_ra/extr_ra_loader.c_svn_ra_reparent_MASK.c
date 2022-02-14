
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int * (* reparent ) (TYPE_2__*,char const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_2__*,char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*,char const*) ;
 int FUNC_4 (TYPE_2__*,char const**,int *) ;
 int FUNC_5 (char const*,char const*) ;

svn_error_t *FUNC_6(svn_ra_session_t *VAR_1,
                             const char *VAR_2,
                             apr_pool_t *VAR_3)
{
  const char *VAR_4;



  FUNC_0(FUNC_4(VAR_1, &VAR_4, VAR_3));
  if (! FUNC_5(VAR_4, VAR_2))
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("'%s' isn't in the same repository as '%s'"),
                             VAR_2, VAR_4);

  return VAR_1->vtable->reparent(VAR_1, VAR_2, VAR_3);
}
