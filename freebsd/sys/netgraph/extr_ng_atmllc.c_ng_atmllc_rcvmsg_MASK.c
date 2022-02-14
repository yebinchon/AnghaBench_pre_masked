
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct ng_mesg {TYPE_1__ header; } ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 int FUNC_1 (int,int ,int ,struct ng_mesg*) ;

__attribute__((used)) static int
FUNC_2(node_p VAR_1, item_p VAR_2, hook_p VAR_3)
{
 struct ng_mesg *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 FUNC_0(VAR_2, VAR_4);
 VAR_4->header.flags |= VAR_0;
 FUNC_1(VAR_5, VAR_1, VAR_2, VAR_4);
 return (VAR_5);
}
