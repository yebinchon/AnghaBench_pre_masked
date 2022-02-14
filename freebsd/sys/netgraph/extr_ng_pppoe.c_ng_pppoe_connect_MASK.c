
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_mesg {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef scalar_t__ hook_p ;
struct TYPE_3__ {scalar_t__ ethernet_hook; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ng_mesg*,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int ,struct ng_mesg*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(hook_p VAR_4)
{
 const priv_p VAR_5 = FUNC_3(FUNC_0(VAR_4));
 struct ng_mesg *VAR_6;
 int VAR_7;

 if (VAR_4 != VAR_5->ethernet_hook)
  return (0);





 FUNC_1(VAR_6, VAR_2, VAR_3, 0, VAR_1);
 if (VAR_6 == ((void*)0))
  return (VAR_0);





 FUNC_5(VAR_7, VAR_5->node, VAR_6,
     FUNC_2(FUNC_4(VAR_5->ethernet_hook)),
     FUNC_2(VAR_5->node));

 return (VAR_7);
}
