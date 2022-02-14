
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_digest_ctx {int alg; int * mdctx; } ;
struct ssh_digest {int (* mdfunc ) () ;} ;


 int FUNC_0 (int *,int ,int *) ;
 int * FUNC_1 () ;
 struct ssh_digest_ctx* FUNC_2 (int,int) ;
 int FUNC_3 (struct ssh_digest_ctx*) ;
 struct ssh_digest* FUNC_4 (int) ;
 int FUNC_5 (struct ssh_digest_ctx*) ;
 int FUNC_6 () ;

struct ssh_digest_ctx *
FUNC_7(int VAR_0)
{
 const struct ssh_digest *VAR_1 = FUNC_4(VAR_0);
 struct ssh_digest_ctx *VAR_2;

 if (VAR_1 == ((void*)0) || ((VAR_2 = FUNC_2(1, sizeof(*VAR_2))) == ((void*)0)))
  return ((void*)0);
 VAR_2->alg = VAR_0;
 if ((VAR_2->mdctx = FUNC_1()) == ((void*)0)) {
  FUNC_3(VAR_2);
  return ((void*)0);
 }
 if (FUNC_0(VAR_2->mdctx, VAR_1->mdfunc(), ((void*)0)) != 1) {
  FUNC_5(VAR_2);
  return ((void*)0);
 }
 return VAR_2;
}
