
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct context {TYPE_1__* editor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* delete_entry ) (char const*,int ,void*,int *) ;} ;


 int VAR_0 ;
 int * FUNC_0 (char const*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(struct context *VAR_1,
       void *VAR_2,
       const char *VAR_3,
       apr_pool_t *VAR_4)
{
  return VAR_1->editor->delete_entry(VAR_3, VAR_0,
                                 VAR_2, VAR_4);
}
