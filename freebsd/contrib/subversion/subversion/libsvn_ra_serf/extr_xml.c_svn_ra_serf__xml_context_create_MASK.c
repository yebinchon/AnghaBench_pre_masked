
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_serf__xml_transition_t ;
typedef int svn_ra_serf__xml_opened_t ;
struct TYPE_4__ {int * state_pool; } ;
typedef TYPE_1__ svn_ra_serf__xml_estate_t ;
struct TYPE_5__ {TYPE_1__* current; int scratch_pool; void* baton; int cdata_cb; int closed_cb; int opened_cb; int const* ttable; } ;
typedef TYPE_2__ svn_ra_serf__xml_context_t ;
typedef int svn_ra_serf__xml_closed_t ;
typedef int svn_ra_serf__xml_cdata_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

svn_ra_serf__xml_context_t *
FUNC_2(
  const svn_ra_serf__xml_transition_t *VAR_0,
  svn_ra_serf__xml_opened_t VAR_1,
  svn_ra_serf__xml_closed_t VAR_2,
  svn_ra_serf__xml_cdata_t VAR_3,
  void *VAR_4,
  apr_pool_t *VAR_5)
{
  svn_ra_serf__xml_context_t *VAR_6;
  svn_ra_serf__xml_estate_t *VAR_7;

  VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));
  VAR_6->ttable = VAR_0;
  VAR_6->opened_cb = VAR_1;
  VAR_6->closed_cb = VAR_2;
  VAR_6->cdata_cb = VAR_3;
  VAR_6->baton = VAR_4;
  VAR_6->scratch_pool = FUNC_1(VAR_5);

  VAR_7 = FUNC_0(VAR_5, sizeof(*VAR_7));





  VAR_7->state_pool = VAR_5;

  VAR_6->current = VAR_7;

  return VAR_6;
}
