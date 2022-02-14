
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
struct TYPE_4__ {scalar_t__ enable; } ;
struct TYPE_5__ {int cx; scalar_t__ compress; TYPE_1__ cfg; scalar_t__ seqnum; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(node_p VAR_0)
{
 const priv_p VAR_1 = FUNC_0(VAR_0);

 VAR_1->seqnum = 0;
 if (VAR_1->cfg.enable) {
     if (VAR_1->compress)
  FUNC_1(&VAR_1->cx);
     else
  FUNC_2(&VAR_1->cx);
 }
}
