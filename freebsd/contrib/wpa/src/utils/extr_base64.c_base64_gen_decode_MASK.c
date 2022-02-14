
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int base64_table ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t) ;
 int FUNC_2 (unsigned char*,int,int) ;

__attribute__((used)) static unsigned char * FUNC_3(const unsigned char *VAR_0, size_t VAR_1,
      size_t *VAR_2,
      const unsigned char *VAR_3)
{
 unsigned char VAR_4[256], *VAR_5, *VAR_6, VAR_7[4], VAR_8;
 size_t VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0;
 size_t VAR_13;

 FUNC_2(VAR_4, 0x80, 256);
 for (VAR_9 = 0; VAR_9 < sizeof(base64_table) - 1; VAR_9++)
  VAR_4[VAR_3[VAR_9]] = (unsigned char) VAR_9;
 VAR_4['='] = 0;

 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_4[VAR_0[VAR_9]] != 0x80)
   VAR_10++;
 }

 if (VAR_10 == 0)
  return ((void*)0);
 VAR_13 = (4 - VAR_10 % 4) % 4;

 VAR_11 = (VAR_10 + VAR_13) / 4 * 3;
 VAR_6 = VAR_5 = FUNC_1(VAR_11);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_1 + VAR_13; VAR_9++) {
  unsigned char VAR_14;

  if (VAR_9 >= VAR_1)
   VAR_14 = '=';
  else
   VAR_14 = VAR_0[VAR_9];
  VAR_8 = VAR_4[VAR_14];
  if (VAR_8 == 0x80)
   continue;

  if (VAR_14 == '=')
   VAR_12++;
  VAR_7[VAR_10] = VAR_8;
  VAR_10++;
  if (VAR_10 == 4) {
   *VAR_6++ = (VAR_7[0] << 2) | (VAR_7[1] >> 4);
   *VAR_6++ = (VAR_7[1] << 4) | (VAR_7[2] >> 2);
   *VAR_6++ = (VAR_7[2] << 6) | VAR_7[3];
   VAR_10 = 0;
   if (VAR_12) {
    if (VAR_12 == 1)
     VAR_6--;
    else if (VAR_12 == 2)
     VAR_6 -= 2;
    else {

     FUNC_0(VAR_5);
     return ((void*)0);
    }
    break;
   }
  }
 }

 *VAR_2 = VAR_6 - VAR_5;
 return VAR_5;
}
