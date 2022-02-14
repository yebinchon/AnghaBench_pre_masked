
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {TYPE_4__* params; int conn; } ;
typedef TYPE_1__ connection_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int logger; } ;


 int FUNC_0 (int ,TYPE_4__*,int *) ;
 int FUNC_1 (int ,int *,int *,int ) ;
 int * FUNC_2 (int *,TYPE_1__*,int *,int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(connection_t *VAR_0,
             apr_pool_t *VAR_1)
{

  svn_error_t *VAR_2 = FUNC_2(((void*)0), VAR_0, ((void*)0), VAR_1);
  if (VAR_2)
    FUNC_1(VAR_0->params->logger, VAR_2, ((void*)0),
                      FUNC_0(VAR_0->conn, VAR_0->params,
                                      VAR_1));

  return FUNC_3(VAR_2);
}
