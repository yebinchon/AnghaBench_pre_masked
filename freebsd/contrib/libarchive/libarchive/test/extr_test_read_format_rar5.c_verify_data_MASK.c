
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static
int FUNC_1(const uint8_t* VAR_0, int VAR_1, int VAR_2) {
 int VAR_3 = 0;







 for(VAR_3 = 0; VAR_3 < VAR_2 / 4; ++VAR_3) {
  const int VAR_4 = VAR_3 + 1;
  const signed int* VAR_5 = (const signed int*) &VAR_0[VAR_3 * 4];
  signed int VAR_6 = VAR_4 * VAR_4 - 3 * VAR_4 + (1 + VAR_1);

  if(VAR_6 < 0)
   VAR_6 = 0;




  if(FUNC_0(VAR_5) != (uint32_t) VAR_6)
   return 0;
 }

 return 1;
}
