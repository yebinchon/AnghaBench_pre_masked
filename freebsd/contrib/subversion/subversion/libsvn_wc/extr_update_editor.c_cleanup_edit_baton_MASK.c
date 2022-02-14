
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct edit_baton {int wcroot_abspath; int db; int pool; } ;
typedef int apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int ,int *,int *,int *) ;

__attribute__((used)) static apr_status_t
FUNC_3(void *VAR_1)
{
  struct edit_baton *VAR_2 = VAR_1;
  svn_error_t *VAR_3;
  apr_pool_t *VAR_4 = FUNC_0(VAR_2->pool);

  VAR_3 = FUNC_2(VAR_2->db, VAR_2->wcroot_abspath,
                       ((void*)0) , ((void*)0) ,
                       VAR_4);

  if (VAR_3)
    {
      apr_status_t VAR_5 = VAR_3->apr_err;
      FUNC_1(VAR_3);
      return VAR_5;
    }
  return VAR_0;
}
