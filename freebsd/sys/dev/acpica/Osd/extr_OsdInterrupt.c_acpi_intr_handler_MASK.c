
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_intr {scalar_t__ (* ai_handler ) (int ) ;int ai_context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3)
{
 struct acpi_intr *VAR_4;

 VAR_4 = VAR_3;
 FUNC_0(VAR_4 != ((void*)0) && VAR_4->ai_handler != ((void*)0),
     ("invalid ACPI interrupt handler"));
 if (VAR_4->ai_handler(VAR_4->ai_context) == VAR_0)
  return (VAR_1);
 return (VAR_2);
}
