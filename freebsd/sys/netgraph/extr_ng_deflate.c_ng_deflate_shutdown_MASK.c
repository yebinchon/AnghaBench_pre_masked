
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
struct TYPE_5__ {scalar_t__ enable; } ;
struct TYPE_6__ {int cx; scalar_t__ compress; TYPE_1__ cfg; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__* const,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_1)
{
 const priv_p VAR_2 = FUNC_0(VAR_1);


 if (VAR_2->cfg.enable) {
     if (VAR_2->compress)
  FUNC_3(&VAR_2->cx);
     else
  FUNC_5(&VAR_2->cx);
 }

 FUNC_4(VAR_2, VAR_0);
 FUNC_1(VAR_1, ((void*)0));
 FUNC_2(VAR_1);
 return (0);
}
