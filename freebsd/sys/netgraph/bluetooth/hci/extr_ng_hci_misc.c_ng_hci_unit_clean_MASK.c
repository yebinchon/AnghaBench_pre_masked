
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* ng_hci_unit_p ;
typedef TYPE_2__* ng_hci_unit_con_p ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int state; int buffer; int con_list; int cmdq; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int) ;

void
FUNC_13(ng_hci_unit_p VAR_2, int VAR_3)
{
 int VAR_4;


 if (VAR_2->state & VAR_1)
  FUNC_8(VAR_2);

 FUNC_2(&VAR_2->cmdq);
 FUNC_5(VAR_2->buffer, 1);


 while (!FUNC_0(&VAR_2->con_list)) {
  ng_hci_unit_con_p VAR_5 = FUNC_1(&VAR_2->con_list);


  if (VAR_5->flags & VAR_0)
   FUNC_9(VAR_5);






  FUNC_12(VAR_5, VAR_3);
  FUNC_11(VAR_5);
 }

 FUNC_4(VAR_2->buffer, VAR_4);
 FUNC_3(VAR_2->buffer, VAR_4);

 FUNC_7(VAR_2->buffer, VAR_4);
 FUNC_6(VAR_2->buffer, VAR_4);


 FUNC_10(VAR_2);
}
