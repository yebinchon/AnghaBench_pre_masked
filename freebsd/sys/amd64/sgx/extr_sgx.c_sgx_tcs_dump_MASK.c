
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs {int gslimit; int fslimit; int ogsbasgx; int ofsbasgx; int oentry; int nssa; int cssa; int ossa; int flags; } ;
struct sgx_softc {int dummy; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void
FUNC_1(struct sgx_softc *VAR_0, struct tcs *VAR_1)
{

 FUNC_0("t->flags %lx\n", VAR_1->flags);
 FUNC_0("t->ossa %lx\n", VAR_1->ossa);
 FUNC_0("t->cssa %x\n", VAR_1->cssa);
 FUNC_0("t->nssa %x\n", VAR_1->nssa);
 FUNC_0("t->oentry %lx\n", VAR_1->oentry);
 FUNC_0("t->ofsbasgx %lx\n", VAR_1->ofsbasgx);
 FUNC_0("t->ogsbasgx %lx\n", VAR_1->ogsbasgx);
 FUNC_0("t->fslimit %x\n", VAR_1->fslimit);
 FUNC_0("t->gslimit %x\n", VAR_1->gslimit);
}
