
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {int ChipFlags; int NumBuses; int szProductID; int szVendorID; scalar_t__ ChipType; scalar_t__ InterruptLevel; } ;
typedef TYPE_1__* PCONTROLLER_INFO ;
typedef TYPE_2__ IAL_ADAPTER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(int VAR_5, PCONTROLLER_INFO VAR_6)
{
 IAL_ADAPTER_T *VAR_7;
 int VAR_8 = 0;

 for (VAR_7 = VAR_4; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_8++==VAR_5) {
   VAR_6->InterruptLevel = 0;
   VAR_6->ChipType = 0;
   VAR_6->ChipFlags = VAR_0;
   FUNC_1( VAR_6->szVendorID, "HighPoint Technologies, Inc.");
   FUNC_1(VAR_6->szProductID, "RocketRAID 18xx SATA Controller");
   VAR_6->NumBuses = 8;
   VAR_6->ChipFlags |= VAR_1|VAR_2;
   return 0;
  }
 }
 return -1;
}
