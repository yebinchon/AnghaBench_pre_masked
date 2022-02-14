
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int client_info; int repository; int logger; } ;
typedef TYPE_1__ server_baton_t ;


 int FUNC_0 (int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1(svn_error_t *VAR_0, server_baton_t *VAR_1)
{
  FUNC_0(VAR_1->logger, VAR_0, VAR_1->repository,
                    VAR_1->client_info);
}
