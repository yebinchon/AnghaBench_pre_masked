
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_intr {int ai_rid; int * ai_irq; int * ai_handle; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (struct acpi_intr*,int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_2, struct acpi_intr *VAR_3)
{

 if (VAR_3->ai_handle != ((void*)0))
  FUNC_2(VAR_2, VAR_3->ai_irq, VAR_3->ai_handle);
 if (VAR_3->ai_irq != ((void*)0))
  FUNC_1(VAR_2, VAR_1, VAR_3->ai_rid, VAR_3->ai_irq);
 FUNC_0(VAR_2, VAR_1, VAR_3->ai_rid);
 FUNC_3(VAR_3, VAR_0);
}
