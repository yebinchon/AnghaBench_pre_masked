
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef int ACPI_TABLE_NFIT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,void**,int) ;
 void** FUNC_1 (int,int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(ACPI_TABLE_NFIT *VAR_2, uint16_t VAR_3, uint16_t VAR_4,
    uint64_t VAR_5, uint64_t VAR_6, void ***VAR_7, int *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0), 0);
 *VAR_8 = VAR_9;
 if (VAR_9 == 0) {
  *VAR_7 = ((void*)0);
  return;
 }
 *VAR_7 = FUNC_1(VAR_9, sizeof(void *), VAR_0, VAR_1);
 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, *VAR_7, *VAR_8);
}
