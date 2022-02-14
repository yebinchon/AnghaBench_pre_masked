
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * res; int rid; } ;
struct TYPE_4__ {int * res; int rid; } ;
struct bnxt_softc {TYPE_1__ doorbell_bar; int dev; TYPE_2__ hwrm_bar; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct bnxt_softc *VAR_1)
{
 if (VAR_1->hwrm_bar.res != ((void*)0))
  FUNC_0(VAR_1->dev, VAR_0,
      VAR_1->hwrm_bar.rid, VAR_1->hwrm_bar.res);
 VAR_1->hwrm_bar.res = ((void*)0);

 if (VAR_1->doorbell_bar.res != ((void*)0))
  FUNC_0(VAR_1->dev, VAR_0,
      VAR_1->doorbell_bar.rid, VAR_1->doorbell_bar.res);
 VAR_1->doorbell_bar.res = ((void*)0);
}
