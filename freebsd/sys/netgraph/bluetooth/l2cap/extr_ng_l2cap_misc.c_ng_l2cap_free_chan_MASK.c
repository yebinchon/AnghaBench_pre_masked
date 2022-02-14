
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* ng_l2cap_cmd_p ;
typedef TYPE_2__* ng_l2cap_chan_p ;
struct TYPE_16__ {int cmd_list; } ;
struct TYPE_15__ {TYPE_6__* con; } ;
struct TYPE_14__ {int flags; TYPE_2__* ch; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

void
FUNC_9(ng_l2cap_chan_p VAR_3)
{
 ng_l2cap_cmd_p VAR_4 = ((void*)0), VAR_5 = ((void*)0);

 VAR_4 = FUNC_1(&VAR_3->con->cmd_list);

 while (VAR_4 != ((void*)0)) {
  VAR_5 = FUNC_2(VAR_4, VAR_2);

  if (VAR_4->ch == VAR_3) {
   FUNC_8(VAR_4);
   if (VAR_4->flags & VAR_1)
    FUNC_5(VAR_4);
   FUNC_7(VAR_4);
  }

  VAR_4 = VAR_5;
 }

 FUNC_0(VAR_3, VAR_2);

 FUNC_6(VAR_3->con);

 FUNC_3(VAR_3, sizeof(*VAR_3));
 FUNC_4(VAR_3, VAR_0);
}
