
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_7__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra__replay_revstart_ev2_callback_t ;
typedef int svn_ra__replay_revfinish_ev2_callback_t ;
typedef int svn_ra__provide_props_cb_t ;
typedef int svn_ra__provide_base_cb_t ;
typedef int svn_ra__get_copysrc_kind_cb_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int (* replay_range_ev2 ) (TYPE_2__*,int ,int ,int ,int ,int ,int ,void*,int *) ;} ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ,int ,int ,void*,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int ,int ,int ,void*,int ,int ,void*,int *) ;

svn_error_t *
FUNC_3(svn_ra_session_t *VAR_0,
                         svn_revnum_t VAR_1,
                         svn_revnum_t VAR_2,
                         svn_revnum_t VAR_3,
                         svn_boolean_t VAR_4,
                         svn_ra__replay_revstart_ev2_callback_t VAR_5,
                         svn_ra__replay_revfinish_ev2_callback_t VAR_6,
                         void *VAR_7,
                         svn_ra__provide_base_cb_t VAR_8,
                         svn_ra__provide_props_cb_t VAR_9,
                         svn_ra__get_copysrc_kind_cb_t VAR_10,
                         void *VAR_11,
                         apr_pool_t *VAR_12)
{
  if (VAR_0->vtable->replay_range_ev2 == ((void*)0))
    {





      return FUNC_1(FUNC_2(
                                VAR_0,
                                VAR_1,
                                VAR_2,
                                VAR_3,
                                VAR_4,
                                VAR_5,
                                VAR_6,
                                VAR_7,
                                VAR_8,
                                VAR_9,
                                VAR_11,
                                VAR_12));
    }

  return FUNC_1(VAR_0->vtable->replay_range_ev2(
                            VAR_0, VAR_1, VAR_2,
                            VAR_3, VAR_4, VAR_5,
                            VAR_6, VAR_7, VAR_12));
}
