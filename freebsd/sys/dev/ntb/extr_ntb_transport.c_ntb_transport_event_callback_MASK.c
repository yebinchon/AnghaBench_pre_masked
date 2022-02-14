
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_ctx {int link_cleanup; int link_work; int link_width; int link_speed; int dev; } ;


 int FUNC_0 (int *,int ,int ,struct ntb_transport_ctx*) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct ntb_transport_ctx *VAR_3 = VAR_2;

 if (FUNC_1(VAR_3->dev, &VAR_3->link_speed, &VAR_3->link_width)) {
  FUNC_2(1, "HW link up\n");
  FUNC_0(&VAR_3->link_work, 0, VAR_0, VAR_3);
 } else {
  FUNC_2(1, "HW link down\n");
  FUNC_3(VAR_1, &VAR_3->link_cleanup);
 }
}
