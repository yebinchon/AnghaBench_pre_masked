
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* get_uuid ) (void*,char const**,int *) ;} ;


 TYPE_1__ VAR_0 ;
 int * FUNC_0 (void*,char const**,int *) ;

__attribute__((used)) static svn_error_t *FUNC_1(void *VAR_1,
                                    const char **VAR_2,
                                    apr_pool_t *VAR_3)
{
  return VAR_0.get_uuid(VAR_1, VAR_2, VAR_3);
}
