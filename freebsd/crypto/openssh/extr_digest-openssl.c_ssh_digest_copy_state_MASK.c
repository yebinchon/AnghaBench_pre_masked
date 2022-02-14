
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_digest_ctx {scalar_t__ alg; int mdctx; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1(struct ssh_digest_ctx *VAR_2, struct ssh_digest_ctx *VAR_3)
{
 if (VAR_2->alg != VAR_3->alg)
  return VAR_0;

 if (!FUNC_0(VAR_3->mdctx, VAR_2->mdctx))
  return VAR_1;
 return 0;
}
