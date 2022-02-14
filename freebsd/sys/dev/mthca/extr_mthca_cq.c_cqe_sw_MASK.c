
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_cqe {int owner; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct mthca_cqe *FUNC_0(struct mthca_cqe *VAR_1)
{
 return VAR_0 & VAR_1->owner ? ((void*)0) : VAR_1;
}
