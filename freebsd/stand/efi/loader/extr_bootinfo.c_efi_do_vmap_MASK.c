
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINTN ;
typedef int UINT32 ;
struct TYPE_10__ {int (* SetVirtualAddressMap ) (int,int,int ,TYPE_1__*) ;} ;
struct TYPE_9__ {int Attribute; int PhysicalStart; int VirtualStart; } ;
typedef int EFI_STATUS ;
typedef TYPE_1__ EFI_MEMORY_DESCRIPTOR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 TYPE_6__* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int,int,int ,TYPE_1__*) ;

__attribute__((used)) static EFI_STATUS
FUNC_4(EFI_MEMORY_DESCRIPTOR *VAR_3, UINTN VAR_4, UINTN VAR_5, UINT32 VAR_6)
{
 EFI_MEMORY_DESCRIPTOR *VAR_7, *VAR_8, *VAR_9;
 EFI_STATUS VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_13 = 0;
 VAR_7 = VAR_3;
 VAR_12 = VAR_4 / VAR_5;
 VAR_9 = FUNC_2(VAR_4);
 if (VAR_9 == ((void*)0))

  return (VAR_1);
 VAR_8 = VAR_9;
 for (VAR_11 = 0; VAR_11 < VAR_12;
     VAR_11++, VAR_7 = FUNC_0(VAR_7, VAR_5)) {
  if ((VAR_7->Attribute & VAR_0) != 0) {
   ++VAR_13;
   VAR_7->VirtualStart = VAR_7->PhysicalStart;
   *VAR_8 = *VAR_7;
   VAR_8 = FUNC_0(VAR_8, VAR_5);
  }
 }
 VAR_10 = VAR_2->SetVirtualAddressMap(VAR_13 * VAR_5, VAR_5, VAR_6, VAR_9);
 FUNC_1(VAR_9);
 return (VAR_10);
}
