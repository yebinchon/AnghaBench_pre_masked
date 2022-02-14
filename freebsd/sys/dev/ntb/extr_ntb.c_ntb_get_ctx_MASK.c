
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_ctx_ops {int dummy; } ;
struct ntb_child {void* ctx; struct ntb_ctx_ops* ctx_ops; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 struct ntb_child* FUNC_1 (int ) ;

void *
FUNC_2(device_t VAR_0, const struct ntb_ctx_ops **VAR_1)
{
 struct ntb_child *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->ctx != ((void*)0) && VAR_2->ctx_ops != ((void*)0), ("bogus"));
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_2->ctx_ops;
 return (VAR_2->ctx);
}
