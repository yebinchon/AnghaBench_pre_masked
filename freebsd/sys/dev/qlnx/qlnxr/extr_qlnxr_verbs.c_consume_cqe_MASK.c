
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_cq {scalar_t__ latest_cqe; scalar_t__ toggle_cqe; int pbl; int pbl_toggle; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct qlnxr_cq *VAR_1)
{

 if (VAR_1->latest_cqe == VAR_1->toggle_cqe)
  VAR_1->pbl_toggle ^= VAR_0;

 VAR_1->latest_cqe = FUNC_0(&VAR_1->pbl);
}
