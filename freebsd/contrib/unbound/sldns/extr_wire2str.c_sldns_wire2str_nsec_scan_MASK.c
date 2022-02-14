
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint16_t ;


 scalar_t__ FUNC_0 (char**,size_t*,char*) ;
 scalar_t__ FUNC_1 (char**,size_t*,unsigned int) ;

int FUNC_2(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 uint8_t* VAR_4 = *VAR_0;
 size_t VAR_5 = *VAR_1;
 unsigned VAR_6, VAR_7, VAR_8, VAR_9;
 uint16_t VAR_10;
 int VAR_11 = 0;


 while(VAR_5) {
  if(VAR_5 < 2) return -1;
  VAR_9 = (unsigned)VAR_4[1];
  if(VAR_5 < 2+VAR_9) return -1;
  VAR_4 += VAR_9+2;
  VAR_5 -= VAR_9+2;
 }


 VAR_4 = *VAR_0;
 VAR_5 = *VAR_1;
 while(VAR_5) {
  if(VAR_5 < 2) return -1;
  VAR_8 = (unsigned)VAR_4[0];
  VAR_9 = (unsigned)VAR_4[1];
  if(VAR_5 < 2+VAR_9) return -1;
  VAR_4 += 2;
  for(VAR_6=0; VAR_6<VAR_9; VAR_6++) {
   if(VAR_4[VAR_6] == 0) continue;

   VAR_10 = ((VAR_8)<<8) | (VAR_6 << 3);
   for(VAR_7=0; VAR_7<8; VAR_7++) {
    if((VAR_4[VAR_6]&(0x80>>VAR_7))) {
     if(VAR_11) VAR_11 += FUNC_0(VAR_2, VAR_3, " ");
     VAR_11 += FUNC_1(VAR_2, VAR_3,
      VAR_10+VAR_7);
    }
   }
  }
  VAR_4 += VAR_9;
  VAR_5 -= VAR_9+2;
 }
 (*VAR_0) += *VAR_1;
 (*VAR_1) = 0;
 return VAR_11;
}
