
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rp_port {int rp_tty; } ;
struct TYPE_3__ {int num_ports; scalar_t__ free; int hwmtx; scalar_t__ hwmtx_init; struct rp_port* rp; } ;
typedef TYPE_1__ CONTROLLER_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (struct rp_port*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(CONTROLLER_t *VAR_2)
{
 struct rp_port *VAR_3;
 int VAR_4;

 if (VAR_2->rp != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_2->num_ports; VAR_4++) {
   VAR_3 = VAR_2->rp + VAR_4;
   FUNC_0(&VAR_2->free, 1);
   FUNC_4(VAR_3->rp_tty);
   FUNC_5(VAR_3->rp_tty);
  }
                FUNC_1(VAR_2->rp, VAR_0);
                VAR_2->rp = ((void*)0);
 }

 while (VAR_2->free != 0) {
  FUNC_3("rpwt", VAR_1 / 10);
 }

 if (VAR_2->hwmtx_init)
  FUNC_2(&VAR_2->hwmtx);
}
