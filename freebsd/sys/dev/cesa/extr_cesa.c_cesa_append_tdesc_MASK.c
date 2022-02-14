
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cesa_tdma_desc {TYPE_1__* ctd_cthd; scalar_t__ ctd_cthd_paddr; } ;
struct cesa_request {int cr_tdesc; } ;
struct TYPE_2__ {scalar_t__ cthd_next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cesa_tdma_desc*,int ) ;
 struct cesa_tdma_desc* FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct cesa_request *VAR_2, struct cesa_tdma_desc *VAR_3)
{
 struct cesa_tdma_desc *VAR_4;

 if (!FUNC_0(&VAR_2->cr_tdesc)) {
  VAR_4 = FUNC_2(&VAR_2->cr_tdesc, VAR_0, VAR_1);
  VAR_4->ctd_cthd->cthd_next = VAR_3->ctd_cthd_paddr;
 }

 VAR_3->ctd_cthd->cthd_next = 0;
 FUNC_1(&VAR_2->cr_tdesc, VAR_3, VAR_1);
}
