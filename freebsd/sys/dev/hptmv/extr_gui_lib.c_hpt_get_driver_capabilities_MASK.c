
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwSize; int SupportSparePool; int* SupportedRAIDTypes; int* MaximumArrayMembers; scalar_t__ SupportDedicatedSpare; scalar_t__ MaximumArrayNameLength; scalar_t__ SupportDiskModeSetting; int MaximumBlockSizeShift; int MinimumBlockSizeShift; scalar_t__ SupportCrossControllerRAID; int MaximumControllers; } ;
typedef TYPE_1__* PDRIVER_CAPABILITIES ;
typedef int DRIVER_CAPABILITIES ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int) ;

int FUNC_1(PDRIVER_CAPABILITIES VAR_9)
{
 FUNC_0(VAR_9, sizeof(DRIVER_CAPABILITIES));
 VAR_9->dwSize = sizeof(DRIVER_CAPABILITIES);
 VAR_9->MaximumControllers = VAR_6;



 VAR_9->SupportCrossControllerRAID = 0;


 VAR_9->MinimumBlockSizeShift = VAR_8;
 VAR_9->MaximumBlockSizeShift = VAR_7;
 VAR_9->SupportDiskModeSetting = 0;
 VAR_9->SupportSparePool = 1;
 VAR_9->MaximumArrayNameLength = VAR_4 - 1;
 VAR_9->SupportDedicatedSpare = 0;
 return 0;
}
