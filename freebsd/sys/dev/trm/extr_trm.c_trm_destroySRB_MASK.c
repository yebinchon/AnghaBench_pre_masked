
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int buffer_dmat; int sg_dmat; TYPE_1__* pFreeSRB; } ;
struct TYPE_4__ {struct TYPE_4__* pNextSRB; scalar_t__ dmamap; int sg_dmamap; scalar_t__ pSRBSGL; scalar_t__ SRBSGPhyAddr; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PACB ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(PACB VAR_0)
{
 PSRB VAR_1;

 VAR_1 = VAR_0->pFreeSRB;
 while (VAR_1) {
  if (VAR_1->SRBSGPhyAddr)
   FUNC_1(VAR_0->sg_dmat, VAR_1->sg_dmamap);
  if (VAR_1->pSRBSGL)
   FUNC_2(VAR_0->sg_dmat, VAR_1->pSRBSGL,
       VAR_1->sg_dmamap);
  if (VAR_1->dmamap)
   FUNC_0(VAR_0->buffer_dmat, VAR_1->dmamap);
  VAR_1 = VAR_1->pNextSRB;
 }
}
