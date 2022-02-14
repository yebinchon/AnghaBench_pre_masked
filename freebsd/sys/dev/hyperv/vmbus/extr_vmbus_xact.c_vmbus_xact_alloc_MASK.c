
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact_ctx {int xc_priv_size; int xc_resp_size; int xc_req_size; } ;
struct vmbus_xact {void* x_resp0; void* x_priv; int * x_req; int x_req_dma; struct vmbus_xact_ctx* x_ctx; } ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vmbus_xact*,int ) ;
 int * FUNC_1 (int ,int ,int ,int ,int *,int ) ;
 void* FUNC_2 (int,int ,int) ;

__attribute__((used)) static struct vmbus_xact *
FUNC_3(struct vmbus_xact_ctx *VAR_5, bus_dma_tag_t VAR_6)
{
 struct vmbus_xact *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1, VAR_2 | VAR_3);
 VAR_7->x_ctx = VAR_5;


 VAR_7->x_req = FUNC_1(VAR_6, VAR_4, 0,
     VAR_5->xc_req_size, &VAR_7->x_req_dma, VAR_0);
 if (VAR_7->x_req == ((void*)0)) {
  FUNC_0(VAR_7, VAR_1);
  return (((void*)0));
 }
 if (VAR_5->xc_priv_size != 0)
  VAR_7->x_priv = FUNC_2(VAR_5->xc_priv_size, VAR_1, VAR_2);
 VAR_7->x_resp0 = FUNC_2(VAR_5->xc_resp_size, VAR_1, VAR_2);

 return (VAR_7);
}
