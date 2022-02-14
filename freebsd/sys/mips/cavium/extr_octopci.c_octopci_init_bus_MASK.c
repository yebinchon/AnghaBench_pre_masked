
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int,unsigned int,int ,int) ;

__attribute__((used)) static unsigned
FUNC_2(device_t VAR_4, unsigned VAR_5)
{
 unsigned VAR_6, VAR_7;
 uint8_t VAR_8;
 unsigned VAR_9;

 VAR_9 = VAR_5;

 for (VAR_6 = 0; VAR_6 <= VAR_3; VAR_6++) {
  for (VAR_7 = 0; VAR_7 <= VAR_2; VAR_7++) {
   VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_1, 1);

   if (VAR_8 == 0xff) {
    if (VAR_7 == 0)
     break;
    continue;
   }

   VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);

   if (VAR_7 == 0 && (VAR_8 & VAR_0) == 0)
    break;
  }
 }

 return (VAR_9);
}
