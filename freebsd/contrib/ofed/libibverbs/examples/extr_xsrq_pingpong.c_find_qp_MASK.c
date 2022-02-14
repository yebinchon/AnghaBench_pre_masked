
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_clients; TYPE_1__** recv_qp; } ;
struct TYPE_3__ {int qp_num; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{
 int VAR_3;

 if (VAR_0.num_clients == 1)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0.num_clients; ++VAR_3)
  if (VAR_0.recv_qp[VAR_3]->qp_num == VAR_2)
   return VAR_3;

 FUNC_0(VAR_1, "Unable to find qp %x\n", VAR_2);
 return 0;
}
