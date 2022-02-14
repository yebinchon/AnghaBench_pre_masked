
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_eqe {int owner; } ;
struct mthca_eq {int cons_index; } ;


 int VAR_0 ;
 struct mthca_eqe* FUNC_0 (struct mthca_eq*,int ) ;

__attribute__((used)) static inline struct mthca_eqe *FUNC_1(struct mthca_eq *VAR_1)
{
 struct mthca_eqe *VAR_2;
 VAR_2 = FUNC_0(VAR_1, VAR_1->cons_index);
 return (VAR_0 & VAR_2->owner) ? ((void*)0) : VAR_2;
}
