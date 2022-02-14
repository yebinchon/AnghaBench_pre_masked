
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union al_udma_desc {int dummy; } al_udma_desc ;
typedef int uint32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(union al_udma_desc *VAR_0)
{
 uint32_t *VAR_1 = (uint32_t *)VAR_0;
 FUNC_0("eth tx desc:\n");
 FUNC_0("0x%08x\n", *(VAR_1++));
 FUNC_0("0x%08x\n", *(VAR_1++));
 FUNC_0("0x%08x\n", *(VAR_1++));
 FUNC_0("0x%08x\n", *(VAR_1++));
}
