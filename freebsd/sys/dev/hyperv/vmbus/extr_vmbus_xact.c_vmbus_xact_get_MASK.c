
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact_ctx {size_t xc_req_size; } ;
struct vmbus_xact {int x_req; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,size_t) ;
 int FUNC_1 (char*,size_t) ;
 struct vmbus_xact* FUNC_2 (struct vmbus_xact_ctx*,int ) ;

struct vmbus_xact *
FUNC_3(struct vmbus_xact_ctx *VAR_1, size_t VAR_2)
{
 struct vmbus_xact *VAR_3;

 if (VAR_2 > VAR_1->xc_req_size)
  FUNC_1("invalid request size %zu", VAR_2);

 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_3->x_req, 0, VAR_2);
 return (VAR_3);
}
