
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int window_in_use ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int typebits ;
typedef int token ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int *,char*,char const*,int) ;
 int FUNC_3 (int *,int*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char const*) ;

int FUNC_9(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 const char *VAR_6 = "\n\t ";
 char VAR_7[64];
 size_t VAR_8 = 0;
 int VAR_9;
 size_t VAR_10 = 0;
 uint16_t VAR_11 = 0;
 uint8_t VAR_12[8192];
 uint8_t VAR_13[256];


 sldns_buffer VAR_14;
 FUNC_3(&VAR_14, (uint8_t*)VAR_3, FUNC_8(VAR_3));


 FUNC_1(VAR_12, 0, sizeof(VAR_12));
 FUNC_1(VAR_13, 0, sizeof(VAR_13));
 while(FUNC_5(&VAR_14) > 0 &&
  FUNC_2(&VAR_14, VAR_7, VAR_6, sizeof(VAR_7)) != -1) {
  uint16_t VAR_15 = FUNC_6(VAR_7);
  if(VAR_7[0] == 0)
   continue;
  if(VAR_15 == 0 && FUNC_7(VAR_7, "TYPE0") != 0)
   return FUNC_0(VAR_2,
    FUNC_4(&VAR_14));
  VAR_12[VAR_15/8] |= (0x80>>(VAR_15%8));
  VAR_13[VAR_15/256] = 1;
  VAR_8++;
  if(VAR_15 > VAR_11) VAR_11 = VAR_15;
 }


 if(VAR_8 == 0) {
  *VAR_5 = 0;
  return VAR_1;
 }



 for(VAR_9 = 0; VAR_9 <= (int)VAR_11/256; VAR_9++) {
  int VAR_16, VAR_17 = 0;
  if(!VAR_13[VAR_9])
   continue;
  for(VAR_16=0; VAR_16<32; VAR_16++) {
   if(VAR_12[VAR_9*32+VAR_16] != 0)
    VAR_17 = VAR_16+1;
  }
  if(VAR_17 == 0)
   continue;
  if(VAR_10+VAR_17+2 > *VAR_5)
   return VAR_0;
  VAR_4[VAR_10+0] = (uint8_t)VAR_9;
  VAR_4[VAR_10+1] = (uint8_t)VAR_17;
  for(VAR_16=0; VAR_16<VAR_17; VAR_16++) {
   VAR_4[VAR_10+2+VAR_16] = VAR_12[VAR_9*32+VAR_16];
  }
  VAR_10 += VAR_17+2;
 }
 *VAR_5 = VAR_10;
 return VAR_1;
}
