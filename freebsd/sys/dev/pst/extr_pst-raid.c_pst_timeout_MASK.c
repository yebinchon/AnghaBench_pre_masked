
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pst_request {int mfa; TYPE_1__* psc; TYPE_4__* bp; } ;
struct TYPE_7__ {int bio_cmd; } ;
struct TYPE_6__ {int outstanding; int mtx; } ;
struct TYPE_5__ {TYPE_2__* iop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct pst_request*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
    struct pst_request *VAR_3;

    VAR_3 = VAR_2;
    FUNC_4("pst: timeout mfa=0x%08x cmd=0x%02x\n",
    VAR_3->mfa, VAR_3->bp->bio_cmd);
    FUNC_3(&VAR_3->psc->iop->mtx, VAR_1);
    FUNC_1(VAR_3->psc->iop, VAR_3->mfa);
    if ((VAR_3->mfa = FUNC_2(VAR_3->psc->iop)) == 0xffffffff) {
 FUNC_4("pst: timeout no mfa possible\n");
 FUNC_0(VAR_3->bp, ((void*)0), VAR_0);
 VAR_3->psc->iop->outstanding--;
 return;
    }
    if (FUNC_5(VAR_3)) {
 FUNC_1(VAR_3->psc->iop, VAR_3->mfa);
 FUNC_0(VAR_3->bp, ((void*)0), VAR_0);
 VAR_3->psc->iop->outstanding--;
    }
}
