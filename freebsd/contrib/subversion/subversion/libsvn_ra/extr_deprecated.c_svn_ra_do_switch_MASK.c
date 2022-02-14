
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_reporter2_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
struct reporter_3in2_baton {int reporter3_baton; int reporter3; } ;
typedef int apr_pool_t ;
struct TYPE_5__ {int * (* do_switch ) (TYPE_2__*,int *,int *,int ,char const*,int ,char const*,int ,int ,int const*,void*,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 struct reporter_3in2_baton* FUNC_2 (int *,int) ;
 int VAR_2 ;
 int * FUNC_3 (TYPE_2__*,int *,int *,int ,char const*,int ,char const*,int ,int ,int const*,void*,int *,int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

svn_error_t *FUNC_6(svn_ra_session_t *VAR_3,
                              const svn_ra_reporter2_t **VAR_4,
                              void **VAR_5,
                              svn_revnum_t VAR_6,
                              const char *VAR_7,
                              svn_boolean_t VAR_8,
                              const char *VAR_9,
                              const svn_delta_editor_t *VAR_10,
                              void *VAR_11,
                              apr_pool_t *VAR_12)
{
  struct reporter_3in2_baton *VAR_13 = FUNC_2(VAR_12, sizeof(*VAR_13));
  FUNC_1(FUNC_4(VAR_7)
                 || FUNC_5(VAR_7));
  *VAR_4 = &VAR_2;
  *VAR_5 = VAR_13;
  return VAR_3->vtable->do_switch(VAR_3,
                                    &(VAR_13->reporter3), &(VAR_13->reporter3_baton),
                                    VAR_6, VAR_7,
                                    FUNC_0(VAR_8),
                                    VAR_9,
                                    VAR_0 ,
                                    VAR_1 ,
                                    VAR_10, VAR_11,
                                    VAR_12, VAR_12);
}
