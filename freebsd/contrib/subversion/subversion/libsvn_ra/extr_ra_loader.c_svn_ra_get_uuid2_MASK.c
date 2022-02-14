
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* get_uuid ) (TYPE_2__*,char const**,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (TYPE_2__*,char const**,int *) ;

svn_error_t *FUNC_3(svn_ra_session_t *VAR_1,
                              const char **VAR_2,
                              apr_pool_t *VAR_3)
{
  FUNC_0(VAR_1->vtable->get_uuid(VAR_1, VAR_2, VAR_3));
  *VAR_2 = *VAR_2 ? FUNC_1(VAR_3, *VAR_2) : ((void*)0);
  return VAR_0;
}
