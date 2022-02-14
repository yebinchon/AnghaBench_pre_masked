
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typecookie; int cmd; } ;
struct ng_mesg {TYPE_1__ header; } ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ng_mesg*) ;

 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (int,int ,int ,struct ng_mesg*) ;

__attribute__((used)) static int
FUNC_3(node_p VAR_1, item_p VAR_2, hook_p VAR_3)
{
 struct ng_mesg *VAR_4 = ((void*)0);
 int VAR_5 = 0;
 struct ng_mesg *VAR_6;

 FUNC_0(VAR_2, VAR_6);
 switch (VAR_6->header.typecookie) {
 case 128:
  switch (VAR_6->header.cmd) {

  default:
   VAR_5 = VAR_0;
   break;
  }
  break;
 default:
  VAR_5 = VAR_0;
  break;
 }


 FUNC_2(VAR_5, VAR_1, VAR_2, VAR_4);
 FUNC_1(VAR_6);
 return (VAR_5);
}
