
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mr {int dummy; } ;
struct mthca_mr {struct ib_mr ibmr; int * umem; } ;
struct ib_pd {int device; } ;
struct TYPE_2__ {int pd_num; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mthca_mr*) ;
 struct mthca_mr* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ,struct mthca_mr*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (struct ib_pd*) ;

__attribute__((used)) static struct ib_mr *FUNC_7(struct ib_pd *VAR_2, int VAR_3)
{
 struct mthca_mr *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof *VAR_4, VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_4(FUNC_5(VAR_2->device),
         FUNC_6(VAR_2)->pd_num,
         FUNC_1(VAR_3), VAR_4);

 if (VAR_5) {
  FUNC_2(VAR_4);
  return FUNC_0(VAR_5);
 }

 VAR_4->umem = ((void*)0);

 return &VAR_4->ibmr;
}
