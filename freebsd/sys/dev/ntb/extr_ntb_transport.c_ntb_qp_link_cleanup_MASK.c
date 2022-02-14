
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int cb_data; int (* event_handler ) (int ,int ) ;int link_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ntb_transport_qp*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ntb_transport_qp *VAR_1)
{

 FUNC_0(&VAR_1->link_work);
 FUNC_1(VAR_1);

 if (VAR_1->event_handler != ((void*)0))
  VAR_1->event_handler(VAR_1->cb_data, VAR_0);
}
