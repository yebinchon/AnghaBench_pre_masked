
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_mmio_read {int readless_supported; } ;
struct ena_com_dev {struct ena_com_mmio_read mmio_read; } ;



void FUNC_0(struct ena_com_dev *VAR_0, bool VAR_1)
{
 struct ena_com_mmio_read *VAR_2 = &VAR_0->mmio_read;

 VAR_2->readless_supported = VAR_1;
}
