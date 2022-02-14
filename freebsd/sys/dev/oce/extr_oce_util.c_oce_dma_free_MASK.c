
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ paddr; int * tag; int * ptr; int map; } ;
typedef int POCE_SOFTC ;
typedef TYPE_1__* POCE_DMA_MEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

void
FUNC_4(POCE_SOFTC VAR_2, POCE_DMA_MEM VAR_3)
{
 if (VAR_3->tag == ((void*)0))
  return;

 if (VAR_3->paddr != 0) {
  FUNC_1(VAR_3->tag, VAR_3->map,
    VAR_0 | VAR_1);
  FUNC_2(VAR_3->tag, VAR_3->map);
  VAR_3->paddr = 0;
 }

 if (VAR_3->ptr != ((void*)0)) {
  FUNC_3(VAR_3->tag, VAR_3->ptr, VAR_3->map);
  VAR_3->ptr = ((void*)0);
 }

 FUNC_0(VAR_3->tag);
 VAR_3->tag = ((void*)0);

 return;
}
