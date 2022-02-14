
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rm_priotracker {int dummy; } ;
struct ntb_child {int ctx_lock; int ctx; TYPE_1__* ctx_ops; struct ntb_child* next; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;
typedef int device_t ;
struct TYPE_2__ {int (* link_event ) (int ) ;} ;


 scalar_t__ FUNC_0 (int ,int*,int*) ;
 struct ntb_child** FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,struct rm_priotracker*) ;
 int FUNC_4 (int *,struct rm_priotracker*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(device_t VAR_0)
{
 struct ntb_child **VAR_1 = FUNC_1(VAR_0);
 struct ntb_child *VAR_2;
 struct rm_priotracker VAR_3;
 enum ntb_speed VAR_4;
 enum ntb_width VAR_5;

 if (FUNC_0(VAR_0, &VAR_4, &VAR_5)) {
  FUNC_2(VAR_0, "Link is up (PCIe %d.x / x%d)\n",
      (int)VAR_4, (int)VAR_5);
 } else {
  FUNC_2(VAR_0, "Link is down\n");
 }
 for (VAR_2 = *VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
  FUNC_3(&VAR_2->ctx_lock, &VAR_3);
  if (VAR_2->ctx_ops != ((void*)0) && VAR_2->ctx_ops->link_event != ((void*)0))
   VAR_2->ctx_ops->link_event(VAR_2->ctx);
  FUNC_4(&VAR_2->ctx_lock, &VAR_3);
 }
}
