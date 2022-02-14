
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ FUNC_0 (char**,size_t*,int *,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char**,size_t*,char*) ;
 scalar_t__ FUNC_3 (char**,size_t*,scalar_t__) ;
 scalar_t__ FUNC_4 (char**,size_t*,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(char** VAR_0, size_t* VAR_1, uint8_t* VAR_2, size_t VAR_3)
{
 uint16_t VAR_4, VAR_5;
 int VAR_6 = 0;
 while(VAR_3 > 0) {

  if(VAR_3 < 4) {
   VAR_6 += FUNC_2(VAR_0, VAR_1, " ; malformed: ");
   VAR_6 += FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
   return VAR_6;
  }
  VAR_4 = FUNC_1(VAR_2);
  VAR_5 = FUNC_1(VAR_2+2);
  VAR_2 += 4;
  VAR_3 -= 4;


  if(VAR_3 < (size_t)VAR_5) {
   VAR_6 += FUNC_2(VAR_0, VAR_1, " ; malformed ");
   VAR_6 += FUNC_3(VAR_0, VAR_1,
    VAR_4);
   VAR_6 += FUNC_2(VAR_0, VAR_1, ": ");
   VAR_6 += FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
   return VAR_6;
  }
  VAR_6 += FUNC_2(VAR_0, VAR_1, " ; ");
  VAR_6 += FUNC_4(VAR_0, VAR_1, VAR_4,
   VAR_2, VAR_5);
  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;
 }
 return VAR_6;
}
