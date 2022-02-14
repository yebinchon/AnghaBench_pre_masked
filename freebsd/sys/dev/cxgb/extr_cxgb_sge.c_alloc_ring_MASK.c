
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bus_dmamap_t ;
typedef int * bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_3__ {int dev; int * parent_dmat; } ;
typedef TYPE_1__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int,int ,int ,int ,int *,int *,size_t,int,size_t,int ,int *,int *,int **) ;
 int FUNC_1 (int *,int ,void*,size_t,int ,int *,int ) ;
 int FUNC_2 (int *,void**,int ,int *) ;
 int FUNC_3 (void*,size_t) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (size_t,int ,int) ;

__attribute__((used)) static int
FUNC_6(adapter_t *VAR_12, size_t VAR_13, size_t VAR_14, size_t VAR_15,
    bus_addr_t *VAR_16, void *VAR_17, void *VAR_18, bus_dma_tag_t *VAR_19,
    bus_dmamap_t *VAR_20, bus_dma_tag_t VAR_21, bus_dma_tag_t *VAR_22)
{
 size_t VAR_23 = VAR_13 * VAR_14;
 void *VAR_24 = ((void*)0);
 void *VAR_25 = ((void*)0);
 int VAR_26;

 if ((VAR_26 = FUNC_0(VAR_12->parent_dmat, VAR_8, 0,
          VAR_3,
          VAR_2, ((void*)0), ((void*)0), VAR_23, 1,
          VAR_23, 0, ((void*)0), ((void*)0), VAR_19)) != 0) {
  FUNC_4(VAR_12->dev, "Cannot allocate descriptor tag\n");
  return (VAR_4);
 }

 if ((VAR_26 = FUNC_2(*VAR_19, (void **)&VAR_25, VAR_1,
        VAR_20)) != 0) {
  FUNC_4(VAR_12->dev, "Cannot allocate descriptor memory\n");
  return (VAR_4);
 }

 FUNC_1(*VAR_19, *VAR_20, VAR_25, VAR_23, VAR_11, VAR_16, 0);
 FUNC_3(VAR_25, VAR_23);
 *(void **)VAR_17 = VAR_25;

 if (VAR_15) {
  VAR_23 = VAR_13 * VAR_15;
  VAR_24 = FUNC_5(VAR_23, VAR_5, VAR_6|VAR_7);
  *(void **)VAR_18 = VAR_24;
 }
 if (VAR_21 == ((void*)0))
  return (0);

 if ((VAR_26 = FUNC_0(VAR_21, 1, 0,
          VAR_2, VAR_2,
                        ((void*)0), ((void*)0), VAR_10, VAR_9,
          VAR_10, VAR_0,
                        ((void*)0), ((void*)0), VAR_22)) != 0) {
  FUNC_4(VAR_12->dev, "Cannot allocate descriptor entry tag\n");
  return (VAR_4);
 }
 return (0);
}
