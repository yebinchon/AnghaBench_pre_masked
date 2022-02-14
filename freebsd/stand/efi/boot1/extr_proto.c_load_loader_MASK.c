
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int preferred; struct TYPE_8__* next; } ;
typedef TYPE_1__ dev_info_t ;
struct TYPE_9__ {scalar_t__ (* load ) (int ,TYPE_1__*,void**,size_t*) ;TYPE_1__* (* devices ) () ;} ;
typedef TYPE_2__ boot_module_t ;
typedef size_t UINTN ;
typedef scalar_t__ EFI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,void**,size_t*) ;

__attribute__((used)) static EFI_STATUS
FUNC_2(const boot_module_t **VAR_5, dev_info_t **VAR_6, void **VAR_7,
    size_t *VAR_8, int VAR_9)
{
 UINTN VAR_10;
 dev_info_t *VAR_11;
 const boot_module_t *VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_12 = VAR_3[VAR_10];
  for (VAR_11 = VAR_12->devices(); VAR_11 != ((void*)0); VAR_11 = VAR_11->next) {
   if (VAR_11->preferred != VAR_9)
    continue;

   if (VAR_12->load(VAR_2, VAR_11, VAR_7, VAR_8) ==
       VAR_1) {
    *VAR_6 = VAR_11;
    *VAR_5 = VAR_12;
    return (VAR_1);
   }
  }
 }

 return (VAR_0);
}
