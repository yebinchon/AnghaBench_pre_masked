
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint64_t ;
struct archive_read {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_read*,int) ;
 int FUNC_1 (struct archive_read*,int,size_t const**) ;

__attribute__((used)) static int FUNC_2(struct archive_read* VAR_1, uint64_t* VAR_2,
    uint64_t* VAR_3)
{
 uint64_t VAR_4 = 0;
 size_t VAR_5, VAR_6;
 const uint8_t* VAR_7;
 uint8_t VAR_8;




 if(!FUNC_1(VAR_1, 8, &VAR_7))
  return 0;

 for(VAR_5 = 0, VAR_6 = 0; VAR_6 < 8; VAR_6++, VAR_5 += 7) {
  VAR_8 = VAR_7[VAR_6];



  VAR_4 += (VAR_8 & (uint64_t)0x7F) << VAR_5;





  if((VAR_8 & 0x80) == 0) {
   if(VAR_2) {
    *VAR_2 = VAR_4;
   }





   if(VAR_3) {
    *VAR_3 = 1 + VAR_6;
   } else {






    if(VAR_0 != FUNC_0(VAR_1, 1 + VAR_6)) {
     return 0;
    }
   }


   return 1;
  }
 }




 if(VAR_2) {
  *VAR_2 = VAR_4;
 }

 if(VAR_3) {
  *VAR_3 = 9;
 } else {
  if(VAR_0 != FUNC_0(VAR_1, 9)) {
   return 0;
  }
 }

 return 1;
}
