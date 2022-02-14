
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ path; } ;
typedef TYPE_1__ svn_location_segment_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;

svn_location_segment_t *
FUNC_2(const svn_location_segment_t *VAR_0,
                         apr_pool_t *VAR_1)
{
  svn_location_segment_t *VAR_2 =
    FUNC_0(VAR_1, sizeof(*VAR_2));

  *VAR_2 = *VAR_0;
  if (VAR_0->path)
    VAR_2->path = FUNC_1(VAR_1, VAR_0->path);
  return VAR_2;
}
