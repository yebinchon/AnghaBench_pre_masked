
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vmbus_xact_ctx {int xc_flags; struct vmbus_xact* xc_active; int xc_lock; } ;
struct vmbus_xact {void* x_resp; size_t x_resp_len; struct vmbus_xact_ctx* x_ctx; } ;
typedef int b ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct vmbus_xact*,int *,int) ;

__attribute__((used)) static const void *
FUNC_4(struct vmbus_xact *VAR_2, size_t *VAR_3)
{
 struct vmbus_xact_ctx *VAR_4 = VAR_2->x_ctx;
 const void *VAR_5;

 FUNC_1(&VAR_4->xc_lock, VAR_0);
 FUNC_0(VAR_4->xc_active == VAR_2, ("xact trashed"));

 if ((VAR_4->xc_flags & VAR_1) && VAR_2->x_resp == ((void*)0)) {
  uint8_t VAR_6 = 0;





  FUNC_2("vmbus: xact ctx was orphaned w/ pending xact\n");
  FUNC_3(VAR_4->xc_active, &VAR_6, sizeof(VAR_6));
 }
 FUNC_0(VAR_2->x_resp != ((void*)0), ("no response"));

 VAR_4->xc_active = ((void*)0);

 VAR_5 = VAR_2->x_resp;
 *VAR_3 = VAR_2->x_resp_len;

 return (VAR_5);
}
