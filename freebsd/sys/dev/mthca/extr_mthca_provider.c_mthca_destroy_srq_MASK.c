
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mthca_ucontext {int db_tab; int uar; } ;
struct ib_srq {int device; TYPE_1__* uobject; } ;
struct TYPE_5__ {int db_index; } ;
struct TYPE_4__ {int context; } ;


 int FUNC_0 (struct ib_srq*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (struct ib_srq*) ;
 struct mthca_ucontext* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ib_srq *VAR_0)
{
 struct mthca_ucontext *VAR_1;

 if (VAR_0->uobject) {
  VAR_1 = FUNC_5(VAR_0->uobject->context);

  FUNC_2(FUNC_3(VAR_0->device), &VAR_1->uar,
        VAR_1->db_tab, FUNC_4(VAR_0)->db_index);
 }

 FUNC_1(FUNC_3(VAR_0->device), FUNC_4(VAR_0));
 FUNC_0(VAR_0);

 return 0;
}
