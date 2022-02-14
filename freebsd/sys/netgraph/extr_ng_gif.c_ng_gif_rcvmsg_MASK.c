
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {int typecookie; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
typedef TYPE_3__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_7__ {TYPE_2__* ifp; } ;
struct TYPE_6__ {int if_index; int if_xname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ng_mesg*) ;



 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_5 (scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_4, item_p VAR_5, hook_p VAR_6)
{
 const priv_p VAR_7 = FUNC_3(VAR_4);
 struct ng_mesg *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 struct ng_mesg *VAR_10;

 FUNC_0(VAR_5, VAR_10);
 switch (VAR_10->header.typecookie) {
 case 130:
  switch (VAR_10->header.cmd) {
  case 128:
   FUNC_2(VAR_8, VAR_10, VAR_2, VAR_3);
   if (VAR_8 == ((void*)0)) {
    VAR_9 = VAR_1;
    break;
   }
   FUNC_5(VAR_8->data, VAR_7->ifp->if_xname, VAR_2);
   break;
  case 129:
   FUNC_2(VAR_8, VAR_10, sizeof(u_int32_t), VAR_3);
   if (VAR_8 == ((void*)0)) {
    VAR_9 = VAR_1;
    break;
   }
   *((u_int32_t *)VAR_8->data) = VAR_7->ifp->if_index;
   break;
  default:
   VAR_9 = VAR_0;
   break;
  }
  break;
 default:
  VAR_9 = VAR_0;
  break;
 }
 FUNC_4(VAR_9, VAR_4, VAR_5, VAR_8);
 FUNC_1(VAR_10);
 return (VAR_9);
}
