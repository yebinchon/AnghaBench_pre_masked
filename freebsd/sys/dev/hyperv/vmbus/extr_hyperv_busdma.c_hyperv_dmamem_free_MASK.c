
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hyperv_dma {int hv_dtag; int hv_dmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void*,int ) ;

void
FUNC_3(struct hyperv_dma *VAR_0, void *VAR_1)
{
 FUNC_1(VAR_0->hv_dtag, VAR_0->hv_dmap);
 FUNC_2(VAR_0->hv_dtag, VAR_1, VAR_0->hv_dmap);
 FUNC_0(VAR_0->hv_dtag);
}
