
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sync_list {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_8__ {int nsegments; } ;
struct TYPE_7__ {struct sync_list* slist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sync_list*,int ) ;
 struct sync_list* FUNC_1 (int,int ,int ) ;
 TYPE_1__* FUNC_2 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static __inline bus_dmamap_t
FUNC_3(bus_dma_tag_t VAR_3)
{
 struct sync_list *VAR_4;
 bus_dmamap_t VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4) * VAR_3->nsegments, VAR_0, VAR_1);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1);
 if (VAR_5 != ((void*)0))
  VAR_5->slist = VAR_4;
 else
  FUNC_0(VAR_4, VAR_0);
 return (VAR_5);
}
