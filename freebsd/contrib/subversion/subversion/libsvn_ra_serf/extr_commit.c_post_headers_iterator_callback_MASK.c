
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vtxn_root_stub; int vtxn_stub; int txn_root_stub; int txn_stub; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
struct TYPE_5__ {TYPE_3__* commit_ctx; } ;
typedef TYPE_2__ post_response_ctx_t ;
struct TYPE_6__ {int pool; void* txn_root_url; void* txn_url; TYPE_1__* session; } ;
typedef TYPE_3__ commit_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 void* FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2,
                               const char *VAR_3,
                               const char *VAR_4)
{
  post_response_ctx_t *VAR_5 = VAR_2;
  commit_context_t *VAR_6 = VAR_5->commit_ctx;
  svn_ra_serf__session_t *VAR_7 = VAR_6->session;






  if (FUNC_0(VAR_3, VAR_0) == 0)
    {


      VAR_6->txn_url =
        FUNC_1(VAR_7->txn_stub, VAR_4, VAR_6->pool);
      VAR_6->txn_root_url =
        FUNC_1(VAR_7->txn_root_stub, VAR_4, VAR_6->pool);
    }

  if (FUNC_0(VAR_3, VAR_1) == 0)
    {


      VAR_6->txn_url =
        FUNC_1(VAR_7->vtxn_stub, VAR_4, VAR_6->pool);
      VAR_6->txn_root_url =
        FUNC_1(VAR_7->vtxn_root_stub, VAR_4, VAR_6->pool);
    }

  return 0;
}
