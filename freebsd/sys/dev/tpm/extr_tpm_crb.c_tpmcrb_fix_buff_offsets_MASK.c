
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tpmcrb_sc {scalar_t__ cmd_off; scalar_t__ rsp_off; } ;
struct TYPE_5__ {scalar_t__ Address; size_t AddressLength; } ;
struct TYPE_6__ {TYPE_1__ FixedMemory32; } ;
struct TYPE_7__ {scalar_t__ Type; TYPE_2__ Data; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_RESOURCE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ACPI_STATUS
FUNC_0(ACPI_RESOURCE *VAR_2, void *VAR_3)
{
 struct tpmcrb_sc *VAR_4;
 size_t VAR_5;
 uint32_t VAR_6;

 VAR_4 = (struct tpmcrb_sc *)VAR_3;

 if (VAR_2->Type != VAR_0)
  return (VAR_1);

 VAR_6 = VAR_2->Data.FixedMemory32.Address;
 VAR_5 = VAR_2->Data.FixedMemory32.AddressLength;

 if (VAR_4->cmd_off > VAR_6 && VAR_4->cmd_off < VAR_6 + VAR_5)
  VAR_4->cmd_off -= VAR_6;
 if (VAR_4->rsp_off > VAR_6 && VAR_4->rsp_off < VAR_6 + VAR_5)
  VAR_4->rsp_off -= VAR_6;

 return (VAR_1);
}
