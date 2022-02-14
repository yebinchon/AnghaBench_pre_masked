
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmbus_xact_ctx {int xc_flags; int xc_lock; struct vmbus_xact* xc_free; } ;
struct vmbus_xact {int * x_resp; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmbus_xact**,int *,int ,char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct vmbus_xact *
FUNC_4(struct vmbus_xact_ctx *VAR_0, uint32_t VAR_1)
{
 struct vmbus_xact *VAR_2;

 FUNC_1(&VAR_0->xc_lock);

 while ((VAR_0->xc_flags & VAR_1) == 0 && VAR_0->xc_free == ((void*)0))
  FUNC_2(&VAR_0->xc_free, &VAR_0->xc_lock, 0, "gxact", 0);
 if (VAR_0->xc_flags & VAR_1) {

  VAR_2 = ((void*)0);
 } else {
  VAR_2 = VAR_0->xc_free;
  FUNC_0(VAR_2 != ((void*)0), ("no free xact"));
  FUNC_0(VAR_2->x_resp == ((void*)0), ("xact has pending response"));
  VAR_0->xc_free = ((void*)0);
 }

 FUNC_3(&VAR_0->xc_lock);

 return (VAR_2);
}
