
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct log {int l_curr_block; int l_curr_cycle; TYPE_2__* l_cilp; } ;
struct TYPE_4__ {TYPE_1__* xc_ctx; } ;
struct TYPE_3__ {int sequence; int commit_lsn; int ticket; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct log*) ;

void
FUNC_2(
 struct log *VAR_0)
{
 if (!VAR_0->l_cilp)
  return;

 VAR_0->l_cilp->xc_ctx->ticket = FUNC_1(VAR_0);
 VAR_0->l_cilp->xc_ctx->sequence = 1;
 VAR_0->l_cilp->xc_ctx->commit_lsn = FUNC_0(VAR_0->l_curr_cycle,
        VAR_0->l_curr_block);
}
