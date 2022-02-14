
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_child {int ctx_lock; int * ctx_ops; int * ctx; } ;
typedef int device_t ;


 struct ntb_child* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(device_t VAR_0)
{
 struct ntb_child *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->ctx_lock);
 VAR_1->ctx = ((void*)0);
 VAR_1->ctx_ops = ((void*)0);
 FUNC_2(&VAR_1->ctx_lock);
}
