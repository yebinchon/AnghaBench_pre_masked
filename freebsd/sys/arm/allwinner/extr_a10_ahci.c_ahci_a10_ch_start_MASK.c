
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ahci_channel {int r_mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ahci_channel *VAR_1)
{
 uint32_t VAR_2;





 VAR_2 = FUNC_0(VAR_1->r_mem, VAR_0);
 VAR_2 &= ~0xff00;
 VAR_2 |= 0x4400;
 FUNC_1(VAR_1->r_mem, VAR_0, VAR_2);
}
