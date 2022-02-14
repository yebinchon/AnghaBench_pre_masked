
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iucv_path_severed {size_t ippathid; int ipuser; } ;
struct iucv_path {size_t pathid; int list; TYPE_1__* handler; } ;
struct iucv_irq_data {int dummy; } ;
struct TYPE_2__ {int (* path_severed ) (struct iucv_path*,int ) ;} ;


 int FUNC_0 (struct iucv_path*) ;
 struct iucv_path** VAR_0 ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iucv_path*,int ) ;

__attribute__((used)) static void FUNC_4(struct iucv_irq_data *VAR_1)
{
 struct iucv_path_severed *VAR_2 = (void *) VAR_1;
 struct iucv_path *VAR_3 = VAR_0[VAR_2->ippathid];

 if (!VAR_3 || !VAR_3->handler)
  return;
 if (VAR_3->handler->path_severed)
  VAR_3->handler->path_severed(VAR_3, VAR_2->ipuser);
 else {
  FUNC_1(VAR_3->pathid, ((void*)0));
  VAR_0[VAR_3->pathid] = ((void*)0);
  FUNC_2(&VAR_3->list);
  FUNC_0(VAR_3);
 }
}
