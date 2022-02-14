
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {scalar_t__ StartMethod; } ;
typedef TYPE_1__ ACPI_TABLE_TPM23 ;
typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int **) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 int VAR_5;
 ACPI_TABLE_TPM23 *VAR_6;
 ACPI_STATUS VAR_7;
 VAR_5 = FUNC_1(FUNC_3(VAR_4), VAR_4, VAR_3, ((void*)0));
 if (VAR_5 > 0)
  return (VAR_5);

 VAR_7 = FUNC_2(VAR_0, 1, (ACPI_TABLE_HEADER **) &VAR_6);
 if(FUNC_0(VAR_7) ||
    VAR_6->StartMethod != VAR_2)
  VAR_5 = VAR_1;

 FUNC_4(VAR_4, "Trusted Platform Module 2.0, CRB mode");
 return (VAR_5);
}
