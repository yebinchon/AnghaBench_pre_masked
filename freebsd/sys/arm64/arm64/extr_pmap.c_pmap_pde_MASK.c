
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (int ,int ) ;
 int* FUNC_1 (int*,int ) ;
 int* FUNC_2 (int*,int ) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static __inline pd_entry_t *
FUNC_4(pmap_t VAR_4, vm_offset_t VAR_5, int *VAR_6)
{
 pd_entry_t *VAR_7, *VAR_8, *VAR_9, VAR_10;

 VAR_7 = FUNC_0(VAR_4, VAR_5);
 VAR_10 = FUNC_3(VAR_7) & VAR_0;
 if (VAR_10 != VAR_1) {
  *VAR_6 = -1;
  return (((void*)0));
 }

 VAR_8 = FUNC_1(VAR_7, VAR_5);
 VAR_10 = FUNC_3(VAR_8) & VAR_0;
 if (VAR_10 != VAR_2) {
  *VAR_6 = 0;
  return (VAR_7);
 }

 VAR_9 = FUNC_2(VAR_8, VAR_5);
 VAR_10 = FUNC_3(VAR_9) & VAR_0;
 if (VAR_10 != VAR_3) {
  *VAR_6 = 1;
  return (VAR_8);
 }

 *VAR_6 = 2;
 return (VAR_9);
}
