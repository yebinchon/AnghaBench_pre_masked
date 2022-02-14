
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mem; int mem_rid; int * io; int io_rid; int * irq; int irq_rid; } ;
struct csa_info {int * parent_dmat; int ih; TYPE_1__ res; } ;
typedef int device_t ;
typedef TYPE_1__ csa_res ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct csa_info*,int ) ;

__attribute__((used)) static void
FUNC_5(struct csa_info *VAR_3, device_t VAR_4)
{
 csa_res *VAR_5;

 FUNC_0(VAR_3 != ((void*)0), ("called with bogus resource structure"));

 VAR_5 = &VAR_3->res;
 if (VAR_5->irq != ((void*)0)) {
  if (VAR_3->ih)
   FUNC_3(VAR_4, VAR_5->irq, VAR_3->ih);
  FUNC_2(VAR_4, VAR_1, VAR_5->irq_rid, VAR_5->irq);
  VAR_5->irq = ((void*)0);
 }
 if (VAR_5->io != ((void*)0)) {
  FUNC_2(VAR_4, VAR_2, VAR_5->io_rid, VAR_5->io);
  VAR_5->io = ((void*)0);
 }
 if (VAR_5->mem != ((void*)0)) {
  FUNC_2(VAR_4, VAR_2, VAR_5->mem_rid, VAR_5->mem);
  VAR_5->mem = ((void*)0);
 }
 if (VAR_3->parent_dmat != ((void*)0)) {
  FUNC_1(VAR_3->parent_dmat);
  VAR_3->parent_dmat = ((void*)0);
 }

 FUNC_4(VAR_3, VAR_0);
}
