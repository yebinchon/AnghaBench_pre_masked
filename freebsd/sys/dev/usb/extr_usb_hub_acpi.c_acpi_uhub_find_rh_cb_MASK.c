
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {int Valid; scalar_t__ Address; } ;
typedef void* ACPI_HANDLE ;
typedef TYPE_1__ ACPI_DEVICE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static UINT32
FUNC_3(ACPI_HANDLE VAR_2, UINT32 VAR_3, void *VAR_4, void **VAR_5)
{
 ACPI_DEVICE_INFO *VAR_6;
 UINT32 VAR_7;

 *VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);

 VAR_7 = FUNC_1(VAR_2, &VAR_6);
 if (FUNC_0(VAR_7)) {
  if ((VAR_6->Valid & VAR_0) &&
      (VAR_6->Address == 0)) {
   VAR_7 = VAR_1;
   *VAR_5 = VAR_2;
  }
  FUNC_2(VAR_6);
 }
 return (VAR_7);
}
