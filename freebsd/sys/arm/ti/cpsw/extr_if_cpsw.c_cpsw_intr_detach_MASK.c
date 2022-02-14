
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpsw_softc {scalar_t__* ih_cookie; int * irq_res; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct cpsw_softc *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->ih_cookie[VAR_2]) {
   FUNC_0(VAR_1->dev, VAR_1->irq_res[VAR_2],
       VAR_1->ih_cookie[VAR_2]);
  }
 }
}
