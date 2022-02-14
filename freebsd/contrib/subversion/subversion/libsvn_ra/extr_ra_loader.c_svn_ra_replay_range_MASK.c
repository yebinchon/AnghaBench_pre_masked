
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_14__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_replay_revstart_callback_t ;
typedef int svn_ra_replay_revfinish_callback_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {TYPE_3__* (* replay_range ) (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,void*,int *) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,void*,int *) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,void*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;

svn_error_t *
FUNC_6(svn_ra_session_t *VAR_1,
                    svn_revnum_t VAR_2,
                    svn_revnum_t VAR_3,
                    svn_revnum_t VAR_4,
                    svn_boolean_t VAR_5,
                    svn_ra_replay_revstart_callback_t VAR_6,
                    svn_ra_replay_revfinish_callback_t VAR_7,
                    void *VAR_8,
                    apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10;

  FUNC_0(FUNC_1(VAR_2)
                 && FUNC_1(VAR_3)
                 && VAR_2 <= VAR_3
                 && FUNC_1(VAR_4));

  VAR_10 =
    VAR_1->vtable->replay_range(VAR_1, VAR_2, VAR_3,
                                  VAR_4, VAR_5,
                                  VAR_6, VAR_7,
                                  VAR_8, VAR_9);

  if (!VAR_10 || (VAR_10 && (VAR_10->apr_err != VAR_0)))
    return FUNC_5(VAR_10);

  FUNC_4(VAR_10);
  return FUNC_5(FUNC_2(VAR_1, VAR_2,
                                                   VAR_3,
                                                   VAR_4,
                                                   VAR_5,
                                                   VAR_6,
                                                   VAR_7,
                                                   VAR_8, VAR_9));
}
