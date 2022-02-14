
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_0 (int ,int ) ;
 int* FUNC_1 (int*,int ) ;
 int* FUNC_2 (int*,int ) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static __inline pt_entry_t *
FUNC_4(pmap_t VAR_6, vm_offset_t VAR_7, int *VAR_8)
{
 pd_entry_t *VAR_9, *VAR_10, VAR_11;
 pt_entry_t *VAR_12;

 VAR_9 = FUNC_0(VAR_6, VAR_7);
 if (VAR_9 == ((void*)0)) {
  *VAR_8 = 0;
  return (((void*)0));
 }
 VAR_11 = FUNC_3(VAR_9) & VAR_0;
 if (VAR_11 == VAR_1) {
  *VAR_8 = 1;
  return (VAR_9);
 }

 if (VAR_11 != VAR_2) {
  *VAR_8 = 1;
  return (((void*)0));
 }

 VAR_10 = FUNC_1(VAR_9, VAR_7);
 VAR_11 = FUNC_3(VAR_10) & VAR_0;
 if (VAR_11 == VAR_3) {
  *VAR_8 = 2;
  return (VAR_10);
 }

 if (VAR_11 != VAR_4) {
  *VAR_8 = 2;
  return (((void*)0));
 }

 *VAR_8 = 3;
 VAR_12 = FUNC_2(VAR_10, VAR_7);
 if ((FUNC_3(VAR_12) & VAR_0) != VAR_5)
  return (((void*)0));

 return (VAR_12);
}
