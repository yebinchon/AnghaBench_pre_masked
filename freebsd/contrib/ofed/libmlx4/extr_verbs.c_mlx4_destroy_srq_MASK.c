
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_srq {int context; } ;
struct TYPE_3__ {struct TYPE_3__* wrid; int buf; int db; scalar_t__ ext_srq; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ibv_srq*) ;
 int FUNC_2 (struct ibv_srq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (struct ibv_srq*) ;

int FUNC_7(struct ibv_srq *VAR_1)
{
 int VAR_2;

 if (FUNC_6(VAR_1)->ext_srq)
  return FUNC_2(VAR_1);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_4(FUNC_5(VAR_1->context), VAR_0, FUNC_6(VAR_1)->db);
 FUNC_3(&FUNC_6(VAR_1)->buf);
 FUNC_0(FUNC_6(VAR_1)->wrid);
 FUNC_0(FUNC_6(VAR_1));

 return 0;
}
