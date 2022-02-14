
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ typecookie; } ;
struct ng_mesg {TYPE_1__ header; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef scalar_t__ hook_p ;
struct TYPE_5__ {scalar_t__ downlink; scalar_t__ uplink; } ;


 int VAR_0 ;
 struct ng_mesg* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,scalar_t__) ;
 TYPE_2__* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(node_p VAR_2, item_p VAR_3, hook_p VAR_4)
{
 int VAR_5;
 const priv_p VAR_6 = FUNC_3(VAR_2);
 struct ng_mesg *VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 if ((VAR_7->header.typecookie == VAR_1) && VAR_4) {
  if (VAR_4 == VAR_6->downlink) {
   if (VAR_6->uplink) {
    FUNC_2(VAR_5, VAR_3, VAR_6->uplink);
    return (VAR_5);
   }
  } else {
   if (VAR_6->downlink) {
    FUNC_2(VAR_5, VAR_3, VAR_6->downlink);
    return (VAR_5);
   }
  }
 }

 FUNC_1(VAR_3);
 return (VAR_0);
}
