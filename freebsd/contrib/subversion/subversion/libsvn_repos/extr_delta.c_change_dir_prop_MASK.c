
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
struct context {TYPE_1__* editor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* change_dir_prop ) (void*,char const*,int const*,int *) ;} ;


 int * FUNC_0 (void*,char const*,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(struct context *VAR_0,
                void *VAR_1,
                const char *VAR_2,
                const svn_string_t *VAR_3,
                apr_pool_t *VAR_4)
{
  return VAR_0->editor->change_dir_prop(VAR_1, VAR_2, VAR_3, VAR_4);
}
