
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
struct TYPE_2__ {void* collect_paths; void* collect_revprops; } ;
typedef TYPE_1__ log_context_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 void* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_ra_serf__xml_estate_t *VAR_2,
           void *VAR_3,
           int VAR_4,
           const svn_ra_serf__dav_props_t *VAR_5,
           apr_pool_t *VAR_6)
{
  log_context_t *VAR_7 = VAR_3;

  if (VAR_4 == VAR_0)
    {
      apr_pool_t *VAR_8 = FUNC_1(VAR_2);

      VAR_7->collect_revprops = FUNC_0(VAR_8);
      VAR_7->collect_paths = FUNC_0(VAR_8);
    }

  return VAR_1;
}
