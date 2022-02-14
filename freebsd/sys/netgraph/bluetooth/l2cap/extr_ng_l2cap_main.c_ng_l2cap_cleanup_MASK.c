
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* ng_l2cap_p ;
typedef TYPE_2__* ng_l2cap_con_p ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int con_list; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(ng_l2cap_p VAR_2)
{
 ng_l2cap_con_p VAR_3 = ((void*)0);


 while (!FUNC_0(&VAR_2->con_list)) {
  VAR_3 = FUNC_1(&VAR_2->con_list);

  if (VAR_3->flags & VAR_1)
   FUNC_4(VAR_3);
  else if (VAR_3->flags & VAR_0)
   FUNC_3(VAR_3);


  FUNC_2(VAR_3, 0x16);
 }
}
