
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact_ctx {size_t xc_req_size; size_t xc_resp_size; size_t xc_priv_size; int xc_lock; int * xc_free; } ;
typedef int bus_dma_tag_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vmbus_xact_ctx*,int ) ;
 struct vmbus_xact_ctx* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int * FUNC_4 (struct vmbus_xact_ctx*,int ) ;

struct vmbus_xact_ctx *
FUNC_5(bus_dma_tag_t VAR_4, size_t VAR_5, size_t VAR_6,
    size_t VAR_7)
{
 struct vmbus_xact_ctx *VAR_8;

 FUNC_0(VAR_5 > 0, ("request size is 0"));
 FUNC_0(VAR_6 > 0, ("response size is 0"));

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1, VAR_2 | VAR_3);
 VAR_8->xc_req_size = VAR_5;
 VAR_8->xc_resp_size = VAR_6;
 VAR_8->xc_priv_size = VAR_7;

 VAR_8->xc_free = FUNC_4(VAR_8, VAR_4);
 if (VAR_8->xc_free == ((void*)0)) {
  FUNC_1(VAR_8, VAR_1);
  return (((void*)0));
 }

 FUNC_3(&VAR_8->xc_lock, "vmbus xact", ((void*)0), VAR_0);

 return (VAR_8);
}
