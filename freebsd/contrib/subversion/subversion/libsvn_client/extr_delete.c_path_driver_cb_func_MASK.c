
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int * (* delete_entry ) (char const*,int ,void*,int *) ;} ;
typedef TYPE_1__ svn_delta_editor_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (char const*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void **VAR_1,
                    void *VAR_2,
                    void *VAR_3,
                    const char *VAR_4,
                    apr_pool_t *VAR_5)
{
  const svn_delta_editor_t *VAR_6 = VAR_3;
  *VAR_1 = ((void*)0);
  return VAR_6->delete_entry(VAR_4, VAR_0, VAR_2, VAR_5);
}
