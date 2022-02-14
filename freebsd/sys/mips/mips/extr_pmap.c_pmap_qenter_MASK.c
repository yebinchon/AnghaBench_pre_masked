
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

void
FUNC_4(vm_offset_t VAR_1, vm_page_t *VAR_2, int VAR_3)
{
 int VAR_4;
 vm_offset_t VAR_5 = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_2(VAR_2[VAR_4]);
  FUNC_3(VAR_1, FUNC_0(VAR_2[VAR_4]));
  VAR_1 += VAR_0;
 }

 FUNC_1(VAR_5, VAR_0*VAR_3);
}
