
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_reporter_t ;
typedef int svn_ra_reporter3_t ;
struct compat_report_baton {void* baton; int const* reporter; } ;
typedef int apr_pool_t ;


 struct compat_report_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const svn_ra_reporter_t **VAR_1,
                                 void **VAR_2,
                                 const svn_ra_reporter3_t *VAR_3,
                                 void *VAR_4,
                                 apr_pool_t *VAR_5)
{
  struct compat_report_baton *VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));
  VAR_6->reporter = VAR_3;
  VAR_6->baton = VAR_4;

  *VAR_1 = &VAR_0;
  *VAR_2 = VAR_6;
}
