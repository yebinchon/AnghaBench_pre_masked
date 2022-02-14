
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_5__ {int len; } ;
struct TYPE_7__ {TYPE_1__ m_pkthdr; } ;
struct TYPE_6__ {int * activeLinks; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int const) ;
 int VAR_0 ;
 int FUNC_3 (int const,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(hook_p VAR_1, item_p VAR_2)
{
 const node_p VAR_3 = FUNC_1(VAR_1);
 const priv_p VAR_4 = FUNC_2(VAR_3);

 return (FUNC_3(VAR_3, VAR_2, VAR_0, VAR_4->activeLinks[0],
     FUNC_0(VAR_2)->m_pkthdr.len));
}
