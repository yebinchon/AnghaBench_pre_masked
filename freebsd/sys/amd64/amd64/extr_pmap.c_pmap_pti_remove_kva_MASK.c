
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_long ;
typedef int pt_entry_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int* FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (int*,scalar_t__) ;
 int FUNC_7 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

void
FUNC_10(vm_offset_t VAR_6, vm_offset_t VAR_7)
{
 pt_entry_t *VAR_8;
 vm_offset_t VAR_9;

 if (!VAR_4)
  return;
 VAR_6 = FUNC_8(VAR_6, VAR_0);
 FUNC_1(VAR_6 > VAR_1);
 VAR_7 = FUNC_9(VAR_7, VAR_0);
 FUNC_1(VAR_6 < VAR_7);
 FUNC_2(VAR_5);
 for (VAR_9 = VAR_6; VAR_9 < VAR_7; VAR_9 += VAR_0) {
  VAR_8 = FUNC_5(VAR_9, ((void*)0));
  FUNC_0((*VAR_8 & VAR_2) != 0,
      ("invalid pte va %#lx pte %#lx pt %#lx", VAR_9,
      (u_long)VAR_8, *VAR_8));
  FUNC_7(VAR_8);
  FUNC_6(VAR_8, VAR_9);
 }
 FUNC_4(VAR_3, VAR_6, VAR_7);
 FUNC_3(VAR_5);
}
