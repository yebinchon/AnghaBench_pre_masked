
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int ssize_t ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,int ) ;

size_t
FUNC_8(sldns_buffer* VAR_2)
{
 size_t VAR_3 = 0;
 int VAR_4 = 0;
 uint8_t VAR_5;
 size_t VAR_6 = 0;



 while(1) {

  if(FUNC_5(VAR_2) < 1)
   return 0;
  VAR_5 = FUNC_4(VAR_2);
  if(FUNC_0(VAR_5)) {

   uint16_t VAR_7;
   if(FUNC_5(VAR_2) < 1)
    return 0;
   VAR_7 = FUNC_1(VAR_5, FUNC_4(VAR_2));
   if(VAR_4++ > VAR_1)
    return 0;
   if(FUNC_2(VAR_2) <= VAR_7)
    return 0;
   if(!VAR_6)
    VAR_6 = FUNC_3(VAR_2);
   FUNC_6(VAR_2, VAR_7);
  } else {

   if(VAR_5 > 0x3f)
    return 0;
   VAR_3 += 1 + VAR_5;
   if(VAR_3 > VAR_0)
    return 0;
   if(VAR_5 == 0) {

    break;
   }
   if(FUNC_5(VAR_2) < VAR_5)
    return 0;
   FUNC_7(VAR_2, (ssize_t)VAR_5);
  }
 }
 if(VAR_6)
  FUNC_6(VAR_2, VAR_6);

 return VAR_3;
}
