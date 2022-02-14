
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int pml4_entry_t ;
struct TYPE_2__ {int* pm_pml4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 size_t VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;

void
FUNC_3(vm_page_t VAR_14)
{
 pml4_entry_t *VAR_15;
 int VAR_16;

 VAR_15 = (pml4_entry_t *)FUNC_0(FUNC_1(VAR_14));


 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  VAR_15[VAR_3 + VAR_16] = (VAR_2 + FUNC_2(VAR_16)) | VAR_9 |
      VAR_10;
 }
 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  VAR_15[VAR_1 + VAR_16] = (VAR_0 + FUNC_2(VAR_16)) | VAR_9 |
      VAR_10;
 }


 VAR_15[VAR_6] = FUNC_1(VAR_14) | VAR_10 | VAR_9 |
     VAR_7 | VAR_8;


 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++)
  VAR_15[VAR_4 + VAR_16] = VAR_11->pm_pml4[VAR_4 + VAR_16];
}
