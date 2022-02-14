
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_ctx {scalar_t__ qp_bitmap; int mw_count; struct ntb_transport_child* mw_vec; struct ntb_transport_child* qp_vec; int link_watchdog; int link_work; int link_cleanup; struct ntb_transport_child* child; } ;
struct ntb_transport_child {int dev; struct ntb_transport_child* next; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 struct ntb_transport_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct ntb_transport_child*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ntb_transport_ctx*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ntb_transport_ctx*) ;
 int FUNC_9 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3)
{
 struct ntb_transport_ctx *VAR_4 = FUNC_3(VAR_3);
 struct ntb_transport_child **VAR_5 = &VAR_4->child;
 struct ntb_transport_child *VAR_6;
 int VAR_7 = 0, VAR_8;

 while ((VAR_6 = *VAR_5) != ((void*)0)) {
  *VAR_5 = (*VAR_5)->next;
  VAR_7 = FUNC_2(VAR_3, VAR_6->dev);
  if (VAR_7)
   break;
  FUNC_4(VAR_6, VAR_0);
 }
 FUNC_0(VAR_4->qp_bitmap == 0,
     ("Some queues not freed on detach (%jx)", VAR_4->qp_bitmap));

 FUNC_8(VAR_4);
 FUNC_9(VAR_2, &VAR_4->link_cleanup);
 FUNC_1(&VAR_4->link_work);
 FUNC_1(&VAR_4->link_watchdog);

 FUNC_7(VAR_3);
 FUNC_5(VAR_3);

 for (VAR_8 = 0; VAR_8 < VAR_4->mw_count; VAR_8++)
  FUNC_6(VAR_4, VAR_8);

 FUNC_4(VAR_4->qp_vec, VAR_1);
 FUNC_4(VAR_4->mw_vec, VAR_1);
 return (0);
}
