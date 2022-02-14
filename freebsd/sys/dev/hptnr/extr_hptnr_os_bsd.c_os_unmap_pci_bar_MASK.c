
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pcibar; int pcidev; } ;
struct TYPE_3__ {void* base; int res; int rid; int type; } ;
typedef TYPE_2__* PHBA ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(void *VAR_0, void *VAR_1)
{
 PHBA VAR_2 = (PHBA)VAR_0;
 int VAR_3;

 for (VAR_3=0; VAR_3<6; VAR_3++) {
  if (VAR_2->pcibar[VAR_3].base==VAR_1) {
   FUNC_0(VAR_2->pcidev, VAR_2->pcibar[VAR_3].type,
    VAR_2->pcibar[VAR_3].rid, VAR_2->pcibar[VAR_3].res);
   VAR_2->pcibar[VAR_3].base = 0;
   return;
  }
 }
}
