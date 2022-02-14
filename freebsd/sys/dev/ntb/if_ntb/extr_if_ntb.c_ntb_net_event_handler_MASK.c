
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_net_queue {int ifp; int qp; } ;
typedef enum ntb_link_event { ____Placeholder_ntb_link_event } ntb_link_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, enum ntb_link_event VAR_4)
{
 struct ntb_net_queue *VAR_5 = VAR_3;

 FUNC_1(VAR_5->ifp, FUNC_2(VAR_5->qp));
 FUNC_0(VAR_5->ifp, (VAR_4 == VAR_2) ? VAR_1 :
     VAR_0);
}
