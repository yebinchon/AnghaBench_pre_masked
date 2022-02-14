
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_4__ {int enableIPv6; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int const) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(hook_p VAR_2, item_p VAR_3)
{
 const node_p VAR_4 = FUNC_1(VAR_2);
 const priv_p VAR_5 = FUNC_2(VAR_4);

 if (!VAR_5->conf.enableIPv6) {
  FUNC_0(VAR_3);
  return (VAR_0);
 }
 return (FUNC_3(FUNC_1(VAR_2), VAR_3, VAR_1));
}
