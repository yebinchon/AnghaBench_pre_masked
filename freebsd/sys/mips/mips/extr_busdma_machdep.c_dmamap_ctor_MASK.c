
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_4__ {int map_count; } ;
struct TYPE_3__ {int bpages; scalar_t__ sync_count; int * allocbuffer; int * slist; scalar_t__ flags; TYPE_2__* dmat; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 bus_dmamap_t VAR_4;
 bus_dma_tag_t VAR_5;

 VAR_4 = (bus_dmamap_t)VAR_0;
 VAR_5 = (bus_dma_tag_t)VAR_2;

 VAR_5->map_count++;

 VAR_4->dmat = VAR_5;
 VAR_4->flags = 0;
 VAR_4->slist = ((void*)0);
 VAR_4->allocbuffer = ((void*)0);
 VAR_4->sync_count = 0;
 FUNC_0(&VAR_4->bpages);

 return (0);
}
