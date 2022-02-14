
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_net_ctx {TYPE_1__* queues; int ifp; } ;
typedef int if_t ;
struct TYPE_2__ {int qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct ntb_net_ctx *VAR_5 = VAR_4;
 if_t VAR_6 = VAR_5->ifp;

 FUNC_2(VAR_6, VAR_1, VAR_0);
 FUNC_1(VAR_6, FUNC_4(VAR_5->queues[0].qp));
 FUNC_0(VAR_6, FUNC_3(VAR_5->queues[0].qp) ?
     VAR_3 : VAR_2);
}
