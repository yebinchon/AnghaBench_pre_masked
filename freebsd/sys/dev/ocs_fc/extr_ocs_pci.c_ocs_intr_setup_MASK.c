
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocs_softc {scalar_t__ n_vec; int dev; int tag; int intr_ctx; int irq; } ;
typedef int int32_t ;
typedef int driver_filter_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int,int *,int ,int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int32_t
FUNC_2(struct ocs_softc *VAR_4)
{
 driver_filter_t *VAR_5 = ((void*)0);

 if (0 == VAR_4->n_vec) {
  VAR_5 = VAR_3;
 }

 if (FUNC_0(VAR_4->dev, VAR_4->irq, VAR_0 | VAR_1,
    VAR_5, VAR_2, &VAR_4->intr_ctx,
    &VAR_4->tag)) {
  FUNC_1(VAR_4->dev, "could not initialize interrupt\n");
  return -1;
 }

 return 0;
}
