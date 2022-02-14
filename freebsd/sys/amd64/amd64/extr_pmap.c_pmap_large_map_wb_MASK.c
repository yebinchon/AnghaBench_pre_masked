
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

void
FUNC_4(void *VAR_5, vm_size_t VAR_6)
{
 vm_offset_t VAR_7, VAR_8;

 VAR_8 = (vm_offset_t)VAR_5;
 VAR_7 = VAR_8 + VAR_6;
 FUNC_2();
 if (VAR_8 >= VAR_0 && VAR_7 <= VAR_0 + VAR_3) {
  FUNC_1(VAR_8, VAR_6);
 } else {
  FUNC_0(VAR_8 >= VAR_1 &&
      VAR_7 <= VAR_1 + VAR_4 * VAR_2,
      ("pmap_large_map_wb: not largemap %#lx %#lx", VAR_8, VAR_6));
  FUNC_3(VAR_8, VAR_7);
 }
 FUNC_2();
}
