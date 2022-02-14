
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_softc {scalar_t__ err_irq_res; int err_irq_rid; scalar_t__ irq_res; int irq_rid; scalar_t__ mem_res; int mem_rid; scalar_t__ fm_handle; scalar_t__ muram_handle; } ;
typedef int device_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 struct fman_softc* FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_2)
{
 struct fman_softc *VAR_3;

 VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->muram_handle) {
  FUNC_1(VAR_3->muram_handle);
 }

 if (VAR_3->fm_handle) {
  FUNC_0(VAR_3->fm_handle);
 }

 if (VAR_3->mem_res) {
  FUNC_2(VAR_2, VAR_1, VAR_3->mem_rid,
      VAR_3->mem_res);
 }

 if (VAR_3->irq_res) {
  FUNC_2(VAR_2, VAR_0, VAR_3->irq_rid,
      VAR_3->irq_res);
 }

 if (VAR_3->irq_res) {
  FUNC_2(VAR_2, VAR_0, VAR_3->err_irq_rid,
      VAR_3->err_irq_res);
 }

 return (0);
}
