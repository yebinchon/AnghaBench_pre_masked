
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_dev {int doorbell_lock; scalar_t__ kar; } ;
struct mthca_cq {int cqn; int cons_index; int * set_ci_db; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct mthca_dev*) ;
 int FUNC_4 (int,int,scalar_t__,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static inline void FUNC_6(struct mthca_dev *VAR_2, struct mthca_cq *VAR_3,
         int VAR_4)
{
 if (FUNC_3(VAR_2)) {
  *VAR_3->set_ci_db = FUNC_1(VAR_3->cons_index);
  FUNC_5();
 } else {
  FUNC_4(VAR_1 | VAR_3->cqn, VAR_4 - 1,
         VAR_2->kar + VAR_0,
         FUNC_0(&VAR_2->doorbell_lock));




  FUNC_2();
 }
}
