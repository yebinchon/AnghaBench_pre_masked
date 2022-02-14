
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int PartitionNumber; } ;
typedef TYPE_1__ HARDDRIVE_DEVICE_PATH ;
typedef int EFI_DEVICE_PATH ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(EFI_DEVICE_PATH *VAR_1)
{
 EFI_DEVICE_PATH *VAR_2;
 HARDDRIVE_DEVICE_PATH *VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  return (-1);
 if (FUNC_0(VAR_2) != VAR_0)
  return (-1);
 VAR_3 = (HARDDRIVE_DEVICE_PATH *)VAR_2;
 return (VAR_3->PartitionNumber);
}
