
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_dev {int doorbell_lock; scalar_t__ kar; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mthca_dev *VAR_2, int VAR_3)
{
 FUNC_1(VAR_0 | VAR_3, 0,
        VAR_2->kar + VAR_1,
        FUNC_0(&VAR_2->doorbell_lock));
}
