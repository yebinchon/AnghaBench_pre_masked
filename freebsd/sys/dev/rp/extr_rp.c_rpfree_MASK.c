
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rp_port {TYPE_1__* rp_ctlp; } ;
struct TYPE_2__ {int free; } ;
typedef TYPE_1__ CONTROLLER_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct rp_port *VAR_1 = VAR_0;
 CONTROLLER_t *VAR_2 = VAR_1->rp_ctlp;

 FUNC_0(&VAR_2->free, 1);
}
