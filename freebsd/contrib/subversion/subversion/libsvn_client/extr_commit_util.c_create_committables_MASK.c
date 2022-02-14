
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* by_path; void* by_repository; } ;
typedef TYPE_1__ svn_client__committables_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(svn_client__committables_t **VAR_0,
                    apr_pool_t *VAR_1)
{
  *VAR_0 = FUNC_1(VAR_1, sizeof(**VAR_0));

  (*VAR_0)->by_repository = FUNC_0(VAR_1);
  (*VAR_0)->by_path = FUNC_0(VAR_1);
}
