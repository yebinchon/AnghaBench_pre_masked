
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_digest_ctx {int mdctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ssh_digest_ctx*,int) ;

void
FUNC_2(struct ssh_digest_ctx *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_0->mdctx);
 FUNC_1(VAR_0, sizeof(*VAR_0));
}
