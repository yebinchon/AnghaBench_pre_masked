
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_serf__session_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int youngest_rev; TYPE_3__* handler; } ;
typedef TYPE_2__ options_context_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int code; } ;
struct TYPE_8__ {TYPE_1__ sline; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__**,int *,int *) ;
 int * FUNC_6 (int ,int *,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*) ;

svn_error_t *
FUNC_10(svn_revnum_t *VAR_2,
                                    svn_ra_serf__session_t *VAR_3,
                                    apr_pool_t *VAR_4)
{
  options_context_t *VAR_5;

  FUNC_1(FUNC_3(VAR_3));

  FUNC_0(FUNC_5(&VAR_5, VAR_3, VAR_4));
  FUNC_0(FUNC_8(VAR_5->handler, VAR_4));

  if (VAR_5->handler->sline.code != 200)
    return FUNC_7(FUNC_9(VAR_5->handler));

  if (! FUNC_2(VAR_5->youngest_rev))
    return FUNC_6(VAR_0, ((void*)0),
                            FUNC_4("The OPTIONS response did not include "
                              "the youngest revision"));

  *VAR_2 = VAR_5->youngest_rev;

  return VAR_1;
}
