
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct pst_softc {TYPE_1__* iop; int queue; } ;
struct pst_request {int mfa; struct pst_softc* psc; struct bio* bp; int timeout; } ;
struct bio {int dummy; } ;
struct TYPE_3__ {int outstanding; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bio*,int *,int ) ;
 struct bio* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct pst_request*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 struct pst_request* FUNC_7 (int,int ,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (struct pst_request*) ;

__attribute__((used)) static void
FUNC_10(struct pst_softc *VAR_6)
{
    struct pst_request *VAR_7;
    struct bio *VAR_8;
    u_int32_t VAR_9;

    if (VAR_6->iop->outstanding < (VAR_2 - 1) &&
 (VAR_8 = FUNC_1(&VAR_6->queue))) {
 if ((VAR_9 = FUNC_6(VAR_6->iop)) != 0xffffffff) {
     FUNC_2(&VAR_6->queue, VAR_8);
     if (!(VAR_7 = FUNC_7(sizeof(struct pst_request),
       VAR_4, VAR_3 | VAR_5))) {
  FUNC_8("pst: out of memory in start\n");
  FUNC_0(VAR_7->bp, ((void*)0), VAR_1);
  FUNC_5(VAR_6->iop, VAR_9);
  return;
     }
     FUNC_3(&VAR_7->timeout, &VAR_6->iop->mtx, 0);
     VAR_6->iop->outstanding++;
     VAR_7->psc = VAR_6;
     VAR_7->mfa = VAR_9;
     VAR_7->bp = VAR_8;
     if (FUNC_9(VAR_7)) {
  FUNC_0(VAR_7->bp, ((void*)0), VAR_0);
  FUNC_5(VAR_7->psc->iop, VAR_7->mfa);
  VAR_6->iop->outstanding--;
  FUNC_4(VAR_7, VAR_4);
     }
 }
    }
}
