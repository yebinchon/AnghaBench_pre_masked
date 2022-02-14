
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*,int ) ;

uint8_t*
FUNC_2(uint32_t* VAR_1)
{
 uint32_t* VAR_2 = (uint32_t*)FUNC_0(sizeof(uint32_t));
 if(!VAR_2)
  return ((void*)0);
 *VAR_1 = sizeof(uint32_t);
 FUNC_1(VAR_2, VAR_0);
 return (uint8_t*)VAR_2;
}
