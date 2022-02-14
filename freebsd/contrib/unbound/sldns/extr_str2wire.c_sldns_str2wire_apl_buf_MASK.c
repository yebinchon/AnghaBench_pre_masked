
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int my_ip_str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int) ;
 char const* FUNC_4 (char const*,char) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char const*) ;

int FUNC_7(const char* VAR_5, uint8_t* VAR_6, size_t* VAR_7)
{
 const char *VAR_8 = VAR_5;

 char VAR_9[64];
 size_t VAR_10;

 uint16_t VAR_11;
 int VAR_12;
 size_t VAR_13 = 0;
 uint8_t VAR_14[16+4];
 uint8_t VAR_15;
 size_t VAR_16;

 if(*VAR_8 == '\0') {

  *VAR_7 = 0;
  return VAR_4;
 }


 if (FUNC_6(VAR_8) < 2
   || FUNC_4(VAR_8, ':') == ((void*)0)
   || FUNC_4(VAR_8, '/') == ((void*)0)
   || FUNC_4(VAR_8, ':') > FUNC_4(VAR_8, '/')) {
  return VAR_3;
 }

 if (VAR_8[0] == '!') {
  VAR_12 = 1;
  VAR_8 += 1;
 } else {
  VAR_12 = 0;
 }

 VAR_11 = (uint16_t) FUNC_0(VAR_8);

 VAR_8 = FUNC_4(VAR_8, ':') + 1;


 VAR_10 = (size_t) (FUNC_4(VAR_8, '/') - VAR_8);
 if(VAR_10+1 > sizeof(VAR_9))
  return VAR_3;
 (void)FUNC_5(VAR_9, VAR_8, sizeof(VAR_9));
 VAR_9[VAR_10] = 0;

 if (VAR_11 == 1) {

  if(FUNC_1(VAR_0, VAR_9, VAR_14+4) == 0)
   return VAR_3;
  for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
   if (VAR_14[VAR_16+4] != 0) {
    VAR_13 = VAR_16 + 1;
   }
  }
 } else if (VAR_11 == 2) {

  if (FUNC_1(VAR_1, VAR_9, VAR_14+4) == 0)
   return VAR_3;
  for (VAR_16 = 0; VAR_16 < 16; VAR_16++) {
   if (VAR_14[VAR_16+4] != 0) {
    VAR_13 = VAR_16 + 1;
   }
  }
 } else {

  return VAR_3;
 }

 VAR_8 = FUNC_4(VAR_8, '/') + 1;
 VAR_15 = (uint8_t) FUNC_0(VAR_8);

 FUNC_3(VAR_14, VAR_11);
 VAR_14[2] = VAR_15;
 VAR_14[3] = (uint8_t)VAR_13;
 if (VAR_12) {

  VAR_14[3] = VAR_14[3] | 0x80;
 }

 if(*VAR_7 < 4+VAR_13)
  return VAR_2;
 FUNC_2(VAR_6, VAR_14, 4+VAR_13);
 *VAR_7 = 4+VAR_13;
 return VAR_4;
}
