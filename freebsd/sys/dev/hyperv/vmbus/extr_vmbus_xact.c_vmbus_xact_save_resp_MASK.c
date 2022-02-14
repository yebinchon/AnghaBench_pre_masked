
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact_ctx {size_t xc_resp_size; struct vmbus_xact* xc_active; int xc_lock; } ;
struct vmbus_xact {size_t x_resp_len; int x_resp0; int x_resp; struct vmbus_xact_ctx* x_ctx; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,void const*,size_t) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_4(struct vmbus_xact *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct vmbus_xact_ctx *VAR_4 = VAR_1->x_ctx;
 size_t VAR_5 = VAR_3;

 FUNC_2(&VAR_4->xc_lock, VAR_0);

 if (VAR_5 > VAR_4->xc_resp_size) {
  FUNC_3("vmbus: xact response truncated %zu -> %zu\n",
      VAR_5, VAR_4->xc_resp_size);
  VAR_5 = VAR_4->xc_resp_size;
 }

 FUNC_0(VAR_4->xc_active == VAR_1, ("xact mismatch"));
 FUNC_1(VAR_1->x_resp0, VAR_2, VAR_5);
 VAR_1->x_resp_len = VAR_5;
 VAR_1->x_resp = VAR_1->x_resp0;
}
