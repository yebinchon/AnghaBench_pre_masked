
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
struct TYPE_6__ {char const* propname; } ;
struct TYPE_7__ {TYPE_1__ prop; } ;
struct TYPE_8__ {int (* do_resolve_func ) (TYPE_3__*,int *,int *,int *) ;TYPE_2__ type_data; } ;
typedef TYPE_3__ svn_client_conflict_option_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,int *,int *,int *) ;

svn_error_t *
FUNC_3(svn_client_conflict_t *VAR_1,
                                 const char *VAR_2,
                                 svn_client_conflict_option_t *VAR_3,
                                 svn_client_ctx_t *VAR_4,
                                 apr_pool_t *VAR_5)
{
  FUNC_0(FUNC_1(VAR_1, VAR_5));
  VAR_3->type_data.prop.propname = VAR_2;
  FUNC_0(VAR_3->do_resolve_func(VAR_3, VAR_1, VAR_4, VAR_5));

  return VAR_0;
}
