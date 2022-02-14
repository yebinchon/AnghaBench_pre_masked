
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int Dwarf_Error ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int*,int *,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,size_t) ;

int
FUNC_4(uint8_t **VAR_2, uint64_t *VAR_3, uint64_t *VAR_4,
    uint8_t *VAR_5, uint64_t VAR_6, Dwarf_Error *VAR_7)
{

 FUNC_2(*VAR_3 > 0);

 while (*VAR_4 + VAR_6 > *VAR_3) {
  *VAR_3 *= 2;
  *VAR_2 = FUNC_3(*VAR_2, (size_t) *VAR_3);
  if (*VAR_2 == ((void*)0)) {
   FUNC_0(((void*)0), VAR_7, VAR_0);
   return (VAR_0);
  }
 }

 FUNC_1(*VAR_2, VAR_4, VAR_5, VAR_6);

 return (VAR_1);
}
