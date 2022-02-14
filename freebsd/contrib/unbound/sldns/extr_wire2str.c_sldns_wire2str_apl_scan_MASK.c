
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (char**,size_t*,char*,...) ;

int FUNC_2(uint8_t** VAR_4, size_t* VAR_5, char** VAR_6, size_t* VAR_7)
{
 int VAR_8, VAR_9 = 0;
 uint16_t VAR_10;
 uint8_t VAR_11, VAR_12, VAR_13;
 if(*VAR_5 < 4) return -1;
 VAR_10 = FUNC_0(*VAR_4);
 VAR_12 = (*VAR_4)[2];
 VAR_11 = ((*VAR_4)[3] & VAR_3);
 VAR_13 = ((*VAR_4)[3] & VAR_2);
 if(*VAR_5 < 4+(size_t)VAR_13) return -1;
 if(VAR_10 != VAR_0 && VAR_10 != VAR_1)
  return -1;
 if(VAR_11)
  VAR_9 += FUNC_1(VAR_6, VAR_7, "!");
 VAR_9 += FUNC_1(VAR_6, VAR_7, "%u:", (unsigned)VAR_10);
 if(VAR_10 == VAR_0) {


  for(VAR_8=0; VAR_8<4; VAR_8++) {
   if(VAR_8 > 0)
    VAR_9 += FUNC_1(VAR_6, VAR_7, ".");
   if(VAR_8 < (int)VAR_13)
    VAR_9 += FUNC_1(VAR_6, VAR_7, "%d", (*VAR_4)[4+VAR_8]);
   else VAR_9 += FUNC_1(VAR_6, VAR_7, "0");
  }
 } else if(VAR_10 == VAR_1) {


  for(VAR_8=0; VAR_8<16; VAR_8++) {
   if(VAR_8%2 == 0 && VAR_8>0)
    VAR_9 += FUNC_1(VAR_6, VAR_7, ":");
   if(VAR_8 < (int)VAR_13)
    VAR_9 += FUNC_1(VAR_6, VAR_7, "%02x", (*VAR_4)[4+VAR_8]);
   else VAR_9 += FUNC_1(VAR_6, VAR_7, "00");
  }
 }
 VAR_9 += FUNC_1(VAR_6, VAR_7, "/%u", (unsigned)VAR_12);
 (*VAR_4) += 4+VAR_13;
 (*VAR_5) -= 4+VAR_13;
 return VAR_9;
}
