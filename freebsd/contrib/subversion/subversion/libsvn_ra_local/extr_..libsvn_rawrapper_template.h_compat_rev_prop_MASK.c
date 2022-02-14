
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* rev_prop ) (void*,int ,char const*,int **,int *) ;} ;


 TYPE_1__ VAR_0 ;
 int * FUNC_0 (void*,int ,char const*,int **,int *) ;

__attribute__((used)) static svn_error_t *FUNC_1(void *VAR_1,
                                    svn_revnum_t VAR_2,
                                    const char *VAR_3,
                                    svn_string_t **VAR_4,
                                    apr_pool_t *VAR_5)
{
  return VAR_0.rev_prop(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
