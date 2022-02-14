
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
struct TYPE_5__ {int failAlg; int xmitAlg; } ;
struct TYPE_6__ {int node; TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int,int ,int) ;

__attribute__((used)) static int
FUNC_2(node_p VAR_5)
{
 priv_p VAR_6;


 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0, VAR_1 | VAR_2);
 VAR_6->conf.xmitAlg = VAR_4;
 VAR_6->conf.failAlg = VAR_3;


 FUNC_0(VAR_5, VAR_6);
 VAR_6->node = VAR_5;


 return (0);
}
