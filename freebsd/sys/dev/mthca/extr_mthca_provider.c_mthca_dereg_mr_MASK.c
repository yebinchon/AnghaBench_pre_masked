
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_mr {scalar_t__ umem; } ;
struct ib_mr {int device; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mthca_mr*) ;
 int FUNC_2 (int ,struct mthca_mr*) ;
 int FUNC_3 (int ) ;
 struct mthca_mr* FUNC_4 (struct ib_mr*) ;

__attribute__((used)) static int FUNC_5(struct ib_mr *VAR_0)
{
 struct mthca_mr *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(FUNC_3(VAR_0->device), VAR_1);
 if (VAR_1->umem)
  FUNC_0(VAR_1->umem);
 FUNC_1(VAR_1);

 return 0;
}
