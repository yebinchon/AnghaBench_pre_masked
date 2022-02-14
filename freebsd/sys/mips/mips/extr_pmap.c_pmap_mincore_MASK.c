
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
struct TYPE_3__ {int aflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;

int
FUNC_6(pmap_t VAR_9, vm_offset_t VAR_10, vm_paddr_t *VAR_11)
{
 pt_entry_t *VAR_12, VAR_13;
 vm_paddr_t VAR_14;
 vm_page_t VAR_15;
 int VAR_16;

 FUNC_1(VAR_9);
 VAR_12 = FUNC_4(VAR_9, VAR_10);
 VAR_13 = (VAR_12 != ((void*)0)) ? *VAR_12 : 0;
 if (!FUNC_5(&VAR_13, VAR_8)) {
  FUNC_2(VAR_9);
  return (0);
 }
 VAR_16 = VAR_0;
 if (FUNC_5(&VAR_13, VAR_6))
  VAR_16 |= VAR_1 | VAR_2;
 VAR_14 = FUNC_3(VAR_13);
 if (FUNC_5(&VAR_13, VAR_7)) {






  VAR_15 = FUNC_0(VAR_14);
  if ((VAR_15->aflags & VAR_5) != 0)
   VAR_16 |= VAR_3 | VAR_4;
 }
 if ((VAR_16 & (VAR_2 | VAR_4)) !=
     (VAR_2 | VAR_4) &&
     FUNC_5(&VAR_13, VAR_7)) {
  *VAR_11 = VAR_14;
 }
 FUNC_2(VAR_9);
 return (VAR_16);
}
