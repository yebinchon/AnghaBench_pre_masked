
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_ctx_ops {int (* link_event ) (void*) ;} ;
struct ntb_child {int ctx_lock; struct ntb_ctx_ops const* ctx_ops; void* ctx; } ;
typedef int device_t ;


 int VAR_0 ;
 struct ntb_child* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;

int
FUNC_4(device_t VAR_1, void *VAR_2, const struct ntb_ctx_ops *VAR_3)
{
 struct ntb_child *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);

 FUNC_1(&VAR_4->ctx_lock);
 if (VAR_4->ctx_ops != ((void*)0)) {
  FUNC_2(&VAR_4->ctx_lock);
  return (VAR_0);
 }
 VAR_4->ctx = VAR_2;
 VAR_4->ctx_ops = VAR_3;





 if (VAR_3->link_event != ((void*)0))
  VAR_3->link_event(VAR_2);
 FUNC_2(&VAR_4->ctx_lock);

 return (0);
}
