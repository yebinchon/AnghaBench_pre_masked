
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct mtx {int dummy; } ;
struct cam_path {TYPE_2__* device; } ;
struct async_node {int event_enable; int callback_arg; int (* callback ) (int ,int,struct cam_path*,void*) ;scalar_t__ event_lock; } ;
struct async_list {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sim; } ;
struct TYPE_3__ {struct mtx* mtx; } ;


 struct async_node* FUNC_0 (struct async_list*) ;
 struct async_node* FUNC_1 (struct async_node*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mtx*) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (int ,int,struct cam_path*,void*) ;

__attribute__((used)) static void
FUNC_5(struct async_list *VAR_1,
  u_int32_t VAR_2,
  struct cam_path *VAR_3, void *VAR_4)
{
 struct async_node *VAR_5;
 struct mtx *VAR_6;

 VAR_5 = FUNC_0(VAR_1);
 while (VAR_5 != ((void*)0)) {
  struct async_node *VAR_7;





  VAR_7 = FUNC_1(VAR_5, VAR_0);
  if ((VAR_5->event_enable & VAR_2) != 0) {
   VAR_6 = VAR_5->event_lock ?
       VAR_3->device->sim->mtx : ((void*)0);
   if (VAR_6)
    FUNC_2(VAR_6);
   VAR_5->callback(VAR_5->callback_arg,
         VAR_2, VAR_3,
         VAR_4);
   if (VAR_6)
    FUNC_3(VAR_6);
  }
  VAR_5 = VAR_7;
 }
}
