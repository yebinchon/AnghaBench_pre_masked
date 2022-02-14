
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0)
{
 static const char VAR_1[] =
     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
     "abcdefghijklmnopqrstuvwxyz"
     "0123456789+/";
 char *VAR_2, *VAR_3;
 size_t VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_0);
 if ((VAR_2 = FUNC_0(((VAR_4 + 2) / 3) * 4 + 1)) == ((void*)0))
  return (((void*)0));
 VAR_3 = VAR_2;
 VAR_6 = 0;

 while (VAR_4 >= 3) {
  VAR_5 = (VAR_0[0] << 16) | (VAR_0[1] << 8) | VAR_0[2];
  VAR_3[0] = VAR_1[(VAR_5 >> 18) & 0x3f];
  VAR_3[1] = VAR_1[(VAR_5 >> 12) & 0x3f];
  VAR_3[2] = VAR_1[(VAR_5 >> 6) & 0x3f];
  VAR_3[3] = VAR_1[(VAR_5 >> 0) & 0x3f];
  VAR_0 += 3; VAR_4 -= 3;
  VAR_3 += 4; VAR_6 += 4;
 }

 switch (VAR_4) {
 case 2:
  VAR_5 = (VAR_0[0] << 16) | (VAR_0[1] << 8);
  VAR_3[0] = VAR_1[(VAR_5 >> 18) & 0x3f];
  VAR_3[1] = VAR_1[(VAR_5 >> 12) & 0x3f];
  VAR_3[2] = VAR_1[(VAR_5 >> 6) & 0x3f];
  VAR_3[3] = '=';
  VAR_3 += 4;
  VAR_6 += 4;
  break;
 case 1:
  VAR_5 = VAR_0[0] << 16;
  VAR_3[0] = VAR_1[(VAR_5 >> 18) & 0x3f];
  VAR_3[1] = VAR_1[(VAR_5 >> 12) & 0x3f];
  VAR_3[2] = VAR_3[3] = '=';
  VAR_3 += 4;
  VAR_6 += 4;
  break;
 case 0:
  break;
 }

 *VAR_3 = 0;
 return (VAR_2);
}
