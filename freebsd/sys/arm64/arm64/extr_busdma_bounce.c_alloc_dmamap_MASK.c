
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct sync_list {int dummy; } ;
typedef TYPE_2__* bus_dmamap_t ;
typedef TYPE_3__* bus_dma_tag_t ;
struct TYPE_7__ {int nsegments; } ;
struct TYPE_9__ {TYPE_1__ common; } ;
struct TYPE_8__ {int bpages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int,int ,int) ;

__attribute__((used)) static bus_dmamap_t
FUNC_2(bus_dma_tag_t VAR_2, int VAR_3)
{
 u_long VAR_4;
 bus_dmamap_t VAR_5;

 VAR_4 = sizeof(*VAR_5);
 VAR_4 += sizeof(struct sync_list) * VAR_2->common.nsegments;
 VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_3 | VAR_1);
 if (VAR_5 == ((void*)0))
  return (((void*)0));


 FUNC_0(&VAR_5->bpages);

 return (VAR_5);
}
