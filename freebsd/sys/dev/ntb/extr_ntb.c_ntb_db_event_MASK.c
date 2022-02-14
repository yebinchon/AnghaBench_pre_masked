
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rm_priotracker {int dummy; } ;
struct ntb_child {int ctx_lock; int ctx; TYPE_1__* ctx_ops; struct ntb_child* next; } ;
typedef int device_t ;
struct TYPE_2__ {int (* db_event ) (int ,int ) ;} ;


 struct ntb_child** FUNC_0 (int ) ;
 int FUNC_1 (int *,struct rm_priotracker*) ;
 int FUNC_2 (int *,struct rm_priotracker*) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(device_t VAR_0, uint32_t VAR_1)
{
 struct ntb_child **VAR_2 = FUNC_0(VAR_0);
 struct ntb_child *VAR_3;
 struct rm_priotracker VAR_4;

 for (VAR_3 = *VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  FUNC_1(&VAR_3->ctx_lock, &VAR_4);
  if (VAR_3->ctx_ops != ((void*)0) && VAR_3->ctx_ops->db_event != ((void*)0))
   VAR_3->ctx_ops->db_event(VAR_3->ctx, VAR_1);
  FUNC_2(&VAR_3->ctx_lock, &VAR_4);
 }
}
