
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hyperv_dma {int hv_dtag; int hv_dmap; int hv_paddr; } ;
typedef int bus_size_t ;
typedef int bus_dma_tag_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,void*,int ,int ,int *,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ,void*,int ) ;
 int VAR_4 ;

void *
FUNC_5(bus_dma_tag_t VAR_5, bus_size_t VAR_6,
    bus_addr_t VAR_7, bus_size_t VAR_8, struct hyperv_dma *VAR_9, int VAR_10)
{
 void *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_5,
     VAR_6,
     VAR_7,
     VAR_2,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_8,
     1,
     VAR_8,
     0,
     ((void*)0),
     ((void*)0),
     &VAR_9->hv_dtag);
 if (VAR_12)
  return ((void*)0);

 VAR_12 = FUNC_3(VAR_9->hv_dtag, &VAR_11,
     (VAR_10 & VAR_3) | VAR_0, &VAR_9->hv_dmap);
 if (VAR_12) {
  FUNC_1(VAR_9->hv_dtag);
  return ((void*)0);
 }

 VAR_12 = FUNC_2(VAR_9->hv_dtag, VAR_9->hv_dmap, VAR_11, VAR_8,
     VAR_4, &VAR_9->hv_paddr, VAR_1);
 if (VAR_12) {
  FUNC_4(VAR_9->hv_dtag, VAR_11, VAR_9->hv_dmap);
  FUNC_1(VAR_9->hv_dtag);
  return ((void*)0);
 }
 return VAR_11;
}
