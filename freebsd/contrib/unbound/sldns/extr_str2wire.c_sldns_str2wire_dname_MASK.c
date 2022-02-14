
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int dname ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int * FUNC_1 (int *,int *,size_t) ;
 scalar_t__ FUNC_2 (char const*,int *,size_t*) ;

uint8_t* FUNC_3(const char* VAR_1, size_t* VAR_2)
{
 uint8_t VAR_3[VAR_0+1];
 *VAR_2 = sizeof(VAR_3);
 if(FUNC_2(VAR_1, VAR_3, VAR_2) == 0) {
  uint8_t* VAR_4 = (uint8_t*)FUNC_0(*VAR_2);
  if(VAR_4) return FUNC_1(VAR_4, VAR_3, *VAR_2);
 }
 *VAR_2 = 0;
 return ((void*)0);
}
