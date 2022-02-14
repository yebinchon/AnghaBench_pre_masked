
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
struct TYPE_5__ {TYPE_1__* editor; } ;
typedef TYPE_2__ report_baton_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int (* change_dir_prop ) (void*,char const*,int const*,int *) ;} ;


 int FUNC_0 (void*,char const*,int const*,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(report_baton_t *VAR_0, void *VAR_1, const char *VAR_2,
                const svn_string_t *VAR_3, apr_pool_t *VAR_4)
{
  return FUNC_1(VAR_0->editor->change_dir_prop(VAR_1, VAR_2, VAR_3,
                                                    VAR_4));
}
