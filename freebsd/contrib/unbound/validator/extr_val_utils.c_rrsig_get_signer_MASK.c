
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t FUNC_0 (int *,size_t) ;

__attribute__((used)) static void
FUNC_1(uint8_t* VAR_0, size_t VAR_1, uint8_t** VAR_2, size_t* VAR_3)
{


 if(VAR_1 < 21) {





  *VAR_2 = ((void*)0);
  *VAR_3 = 0;
  return;
 }
 VAR_0 += 20;
 VAR_1 -= 20;
 *VAR_3 = FUNC_0(VAR_0, VAR_1);
 if(!*VAR_3) {

  *VAR_2 = ((void*)0);
  return;
 }
 *VAR_2 = VAR_0;
}
