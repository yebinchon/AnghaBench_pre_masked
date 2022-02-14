
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int pt_entry_t ;
struct TYPE_5__ {int pat_mode; } ;
struct TYPE_6__ {TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int*,int) ;
 int* FUNC_5 (scalar_t__) ;

void
FUNC_6(vm_offset_t VAR_8, vm_page_t *VAR_9, int VAR_10)
{
 pt_entry_t *VAR_11, VAR_12, VAR_13, *VAR_14;
 vm_page_t VAR_15;
 int VAR_16;

 VAR_12 = 0;
 VAR_14 = FUNC_5(VAR_8);
 VAR_11 = VAR_14 + VAR_10;
 while (VAR_14 < VAR_11) {
  VAR_15 = *VAR_9++;
  VAR_16 = FUNC_2(VAR_5, VAR_15->md.pat_mode, 0);
  VAR_13 = FUNC_0(VAR_15) | VAR_16;
  if ((*VAR_14 & (VAR_1 | VAR_2)) != VAR_13) {
   VAR_12 |= *VAR_14;
   FUNC_4(VAR_14, VAR_13 | VAR_6 | VAR_7 | VAR_3 | VAR_4);
  }
  VAR_14++;
 }
 if (FUNC_1((VAR_12 & VAR_4) != 0))
  FUNC_3(VAR_5, VAR_8, VAR_8 + VAR_10 *
      VAR_0);
}
