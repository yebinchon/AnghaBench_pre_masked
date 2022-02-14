
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ typecookie; scalar_t__ cmd; } ;
struct ng_mesg {TYPE_1__ header; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {int persistent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ng_mesg*) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(node_p VAR_3, item_p VAR_4, hook_p VAR_5)
{
 const priv_p VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = 0;
 struct ng_mesg *VAR_8;

 FUNC_0(VAR_4, VAR_8);
 if (VAR_8->header.typecookie == VAR_1 &&
     VAR_8->header.cmd == VAR_2) {
  VAR_6->persistent = 1;
 } else {
  VAR_7 = VAR_0;
 }

 FUNC_1(VAR_8);
 return (VAR_7);
}
