
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int pool; TYPE_2__* curr_iprop; int curr_propname; } ;
typedef TYPE_1__ iprops_context_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int prop_hash; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_ra_serf__xml_estate_t *VAR_2,
              void *VAR_3,
              int VAR_4,
              const svn_ra_serf__dav_props_t *VAR_5,
              apr_pool_t *VAR_6)
{
  iprops_context_t *VAR_7 = VAR_3;

  if (VAR_4 == VAR_0)
    {
      FUNC_2(VAR_7->curr_propname);

      VAR_7->curr_iprop = FUNC_1(VAR_7->pool,
                                           sizeof(*VAR_7->curr_iprop));

      VAR_7->curr_iprop->prop_hash = FUNC_0(VAR_7->pool);
    }
  return VAR_1;
}
