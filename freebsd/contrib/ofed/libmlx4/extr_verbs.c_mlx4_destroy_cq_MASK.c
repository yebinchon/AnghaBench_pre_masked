
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_cq {int context; } ;
struct TYPE_3__ {int buf; int set_ci_db; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ibv_cq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* FUNC_4 (struct ibv_cq*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct ibv_cq *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_3(FUNC_5(VAR_1->context), VAR_0, FUNC_4(VAR_1)->set_ci_db);
 FUNC_2(&FUNC_4(VAR_1)->buf);
 FUNC_0(FUNC_4(VAR_1));

 return 0;
}
