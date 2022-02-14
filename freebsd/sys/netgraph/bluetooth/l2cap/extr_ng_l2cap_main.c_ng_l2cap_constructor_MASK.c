
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int node_p ;
typedef TYPE_1__* ng_l2cap_p ;
struct TYPE_4__ {int discon_timo; int chan_list; int con_list; int debug; int node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ,int) ;

__attribute__((used)) static int
FUNC_4(node_p VAR_4)
{
 ng_l2cap_p VAR_5 = ((void*)0);


 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);

 VAR_5->node = VAR_4;
 VAR_5->debug = VAR_3;
 VAR_5->discon_timo = 5;

 FUNC_0(&VAR_5->con_list);
 FUNC_0(&VAR_5->chan_list);

 FUNC_2(VAR_4, VAR_5);
 FUNC_1(VAR_4);

 return (0);
}
