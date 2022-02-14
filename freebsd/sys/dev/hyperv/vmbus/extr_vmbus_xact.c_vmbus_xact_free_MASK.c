
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact {struct vmbus_xact* x_priv; struct vmbus_xact* x_resp0; int x_req; int x_req_dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmbus_xact*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct vmbus_xact *VAR_1)
{

 FUNC_1(&VAR_1->x_req_dma, VAR_1->x_req);
 FUNC_0(VAR_1->x_resp0, VAR_0);
 if (VAR_1->x_priv != ((void*)0))
  FUNC_0(VAR_1->x_priv, VAR_0);
 FUNC_0(VAR_1, VAR_0);
}
