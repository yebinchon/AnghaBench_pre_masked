
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(uint8_t* VAR_1, size_t VAR_2, uint8_t* VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 if(VAR_2 != VAR_4)
  return -1;

 for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 {
  uint8_t VAR_6, VAR_7;
  VAR_6 = VAR_1[VAR_5];
  VAR_7 = VAR_3[VAR_5];
  if(VAR_5==1) {

   VAR_6 |= VAR_0;
   VAR_7 |= VAR_0;
  }
  if (VAR_6 < VAR_7) return -1;
  else if (VAR_6 > VAR_7) return 1;
        }
 return 0;
}
