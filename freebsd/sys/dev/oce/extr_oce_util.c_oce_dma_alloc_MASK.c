
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int bus_size_t ;
struct TYPE_9__ {scalar_t__ paddr; int ptr; int map; int tag; } ;
struct TYPE_8__ {int dev; } ;
typedef TYPE_1__* POCE_SOFTC ;
typedef TYPE_2__* POCE_DMA_MEM ;
typedef int OCE_DMA_MEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,scalar_t__*,int) ;
 int FUNC_2 (int ,int *,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int VAR_5 ;

int
FUNC_6(POCE_SOFTC VAR_6, bus_size_t VAR_7, POCE_DMA_MEM VAR_8, int VAR_9)
{
 int VAR_10;


 FUNC_4(VAR_8, 0, sizeof(OCE_DMA_MEM));

 VAR_10 = FUNC_0(FUNC_3(VAR_6->dev),
    8, 0,
    VAR_3,
    VAR_3,
    ((void*)0), ((void*)0),
    VAR_7, 1, VAR_7, 0, ((void*)0), ((void*)0), &VAR_8->tag);

 if (VAR_10 == 0) {
  VAR_10 = FUNC_2(VAR_8->tag,
          &VAR_8->ptr,
          VAR_1 | VAR_0 |
     VAR_2,
          &VAR_8->map);
 }

 VAR_8->paddr = 0;
 if (VAR_10 == 0) {
  VAR_10 = FUNC_1(VAR_8->tag,
         VAR_8->map,
         VAR_8->ptr,
         VAR_7,
         VAR_5,
         &VAR_8->paddr, VAR_9 | VAR_1);
  if (VAR_8->paddr == 0)
   VAR_10 = VAR_4;
 }

 if (VAR_10 != 0)
  FUNC_5(VAR_6, VAR_8);

 return VAR_10;
}
