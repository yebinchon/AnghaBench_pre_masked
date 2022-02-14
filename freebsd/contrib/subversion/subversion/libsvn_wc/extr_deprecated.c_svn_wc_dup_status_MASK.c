
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ entry; } ;
typedef TYPE_1__ svn_wc_status_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;

svn_wc_status_t *
FUNC_2(const svn_wc_status_t *VAR_0,
                  apr_pool_t *VAR_1)
{
  svn_wc_status_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));


  *VAR_2 = *VAR_0;


  if (VAR_0->entry)
    VAR_2->entry = FUNC_1(VAR_0->entry, VAR_1);


  return VAR_2;
}
