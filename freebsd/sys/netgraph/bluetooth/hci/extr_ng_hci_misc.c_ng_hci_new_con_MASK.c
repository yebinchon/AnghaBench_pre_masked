
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ng_hci_unit_p ;
typedef TYPE_2__* ng_hci_unit_con_p ;
struct TYPE_8__ {int link_type; int con_timo; int conq; int con_handle; int state; TYPE_1__* unit; } ;
struct TYPE_7__ {int con_list; int buffer; } ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_4 (int,int ,int) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;

ng_hci_unit_con_p
FUNC_6(ng_hci_unit_p VAR_6, int VAR_7)
{
 ng_hci_unit_con_p VAR_8 = ((void*)0);
 int VAR_9;
 static int VAR_10 = 0x0f00;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_0,
  VAR_1 | VAR_2);
 if (VAR_8 != ((void*)0)) {
  VAR_8->unit = VAR_6;
  VAR_8->state = VAR_3;
  VAR_8->con_handle = VAR_10 ++;
  if (VAR_10 > 0x0fff)
   VAR_10 = 0x0f00;

  VAR_8->link_type = VAR_7;

  if (VAR_8->link_type != VAR_4)
   FUNC_2(VAR_6->buffer, VAR_9);
  else
   FUNC_3(VAR_6->buffer, VAR_9);

  FUNC_1(&VAR_8->conq, VAR_9);

  FUNC_5(&VAR_8->con_timo);

  FUNC_0(&VAR_6->con_list, VAR_8, VAR_5);
 }

 return (VAR_8);
}
