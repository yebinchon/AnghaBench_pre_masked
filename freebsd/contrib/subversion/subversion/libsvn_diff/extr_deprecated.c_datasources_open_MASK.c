
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_diff_datasource_e ;
struct fns_wrapper_baton {int old_baton; TYPE_1__* vtable; } ;
typedef size_t apr_size_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_2__ {int (* datasource_open ) (int ,int const) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int const) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                 apr_off_t *VAR_2,
                 apr_off_t *VAR_3,
                 const svn_diff_datasource_e *VAR_4,
                 apr_size_t VAR_5)
{
  struct fns_wrapper_baton *VAR_6 = VAR_1;
  apr_size_t VAR_7;


  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
      FUNC_0(VAR_6->vtable->datasource_open(VAR_6->old_baton, VAR_4[VAR_7]));
    }


  *VAR_2 = 0;
  *VAR_3 = 0;

  return VAR_0;
}
