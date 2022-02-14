
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pmap_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

int
FUNC_8(pmap_t VAR_1, vm_offset_t VAR_2, vm_offset_t VAR_3)
{
 int VAR_4;

 VAR_2 = FUNC_6(VAR_2);
 VAR_3 = FUNC_5(VAR_3);
 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3, 0, 0);
 if (VAR_4 != 0)
  return (VAR_4);
 for (;;) {
  FUNC_0(VAR_1);
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  if (VAR_4 == 0)
   FUNC_4(VAR_1, VAR_2, VAR_3, 0);
  FUNC_1(VAR_1);
  if (VAR_4 != VAR_0)
   break;
  FUNC_7(((void*)0));
 }
 return (VAR_4);
}
