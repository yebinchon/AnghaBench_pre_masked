
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt2_entry_t ;
typedef int pt1_entry_t ;
typedef int pmap_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

boolean_t
FUNC_8(pmap_t VAR_1, vm_offset_t VAR_2)
{
 pt1_entry_t VAR_3;
 pt2_entry_t VAR_4;
 boolean_t VAR_5;

 VAR_5 = VAR_0;
 FUNC_0(VAR_1);
 VAR_3 = FUNC_5(FUNC_2(VAR_1, VAR_2));
 if (FUNC_4(VAR_3)) {
  VAR_4 = FUNC_7(FUNC_3(VAR_2));
  VAR_5 = !FUNC_6(VAR_4) ;
 }
 FUNC_1(VAR_1);
 return (VAR_5);
}
