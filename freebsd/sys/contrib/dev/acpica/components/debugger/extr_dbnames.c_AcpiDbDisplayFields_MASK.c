
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_2__ {int DisplayType; int AddressSpaceId; int DebugLevel; int OwnerId; scalar_t__ Count; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_REGION_WALK_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ,int *,void*,int *) ;

ACPI_STATUS
FUNC_1 (
    UINT32 VAR_8)
{
    ACPI_REGION_WALK_INFO VAR_9;


    VAR_9.Count = 0;
    VAR_9.OwnerId = VAR_2;
    VAR_9.DebugLevel = VAR_5;
    VAR_9.DisplayType = VAR_1 | VAR_0;
    VAR_9.AddressSpaceId = VAR_8;



    (void) FUNC_0 (VAR_4, VAR_3,
          VAR_5, VAR_7, ((void*)0),
          (void *) &VAR_9, ((void*)0));

    return (VAR_6);
}
