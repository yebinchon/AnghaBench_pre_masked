
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int device_t ;
struct TYPE_3__ {int * io_res; int io_rid; int * irq_res; int irq_rid; int * irq_handle; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int ,int ,int *) ;
 int FUNC_1 (int const,int *,int *) ;

void
FUNC_2(sc_p VAR_2)
{
 const device_t VAR_3 = VAR_2->dev;

 if (VAR_2->irq_handle != ((void*)0)) {
  FUNC_1(VAR_3, VAR_2->irq_res, VAR_2->irq_handle);
  VAR_2->irq_handle = ((void*)0);
 }
 if (VAR_2->irq_res != ((void*)0)) {
  FUNC_0(VAR_3,
      VAR_1, VAR_2->irq_rid, VAR_2->irq_res);
  VAR_2->irq_res = ((void*)0);
 }
 if (VAR_2->io_res != ((void*)0)) {
  FUNC_0(VAR_3,
      VAR_0, VAR_2->io_rid, VAR_2->io_res);
  VAR_2->io_res = ((void*)0);
 }
}
