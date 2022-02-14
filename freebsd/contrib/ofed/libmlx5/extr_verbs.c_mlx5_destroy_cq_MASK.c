
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_cq {int context; } ;
struct TYPE_3__ {int active_buf; int dbrec; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ibv_cq*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (struct ibv_cq*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct ibv_cq *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_3(FUNC_5(VAR_0->context), FUNC_4(VAR_0)->dbrec);
 FUNC_2(FUNC_5(VAR_0->context), FUNC_4(VAR_0)->active_buf);
 FUNC_0(FUNC_4(VAR_0));

 return 0;
}
