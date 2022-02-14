
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct reporter_3in2_baton {int reporter3_baton; TYPE_1__* reporter3; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* delete_path ) (int ,char const*,int *) ;} ;


 int * FUNC_0 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
            const char *VAR_1,
            apr_pool_t *VAR_2)
{
  struct reporter_3in2_baton *VAR_3 = VAR_0;
  return VAR_3->reporter3->delete_path(VAR_3->reporter3_baton, VAR_1, VAR_2);
}
