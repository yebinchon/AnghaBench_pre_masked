
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
struct TYPE_3__ {int path; int range_end; int range_start; } ;
typedef TYPE_1__ svn_location_segment_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int *,char*,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *FUNC_1(svn_location_segment_t *VAR_0,
                                 void *VAR_1,
                                 apr_pool_t *VAR_2)
{
  svn_ra_svn_conn_t *VAR_3 = VAR_1;
  return FUNC_0(VAR_3, VAR_2, "rr(?c)",
                                 VAR_0->range_start,
                                 VAR_0->range_end,
                                 VAR_0->path);
}
