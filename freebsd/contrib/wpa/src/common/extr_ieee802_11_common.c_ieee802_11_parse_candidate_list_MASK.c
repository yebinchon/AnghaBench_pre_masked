
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,long) ;
 void* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,int*,size_t) ;
 scalar_t__ FUNC_3 (char const*,int*) ;
 void* FUNC_4 (char const*,char) ;
 size_t FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char*) ;
 long FUNC_7 (char const*,char**,int ) ;
 int FUNC_8 (int ,char*) ;

int FUNC_9(const char *VAR_3, u8 *VAR_4,
        size_t VAR_5)
{
 u8 *VAR_6 = VAR_4;
 const char *VAR_7;






 while (VAR_3) {
  u8 *VAR_8;
  long int VAR_9;
  char *VAR_10, *VAR_11;

  VAR_3 = FUNC_6(VAR_3, " neighbor=");
  if (!VAR_3)
   break;
  if (VAR_6 + 15 > VAR_4 + VAR_5) {
   FUNC_8(VAR_1,
       "Not enough room for additional neighbor");
   return -1;
  }
  VAR_3 += 10;

  VAR_8 = VAR_6;
  *VAR_6++ = VAR_2;
  VAR_6++;

  if (FUNC_3(VAR_3, VAR_6)) {
   FUNC_8(VAR_1, "Invalid BSSID");
   return -1;
  }
  VAR_6 += VAR_0;
  VAR_3 += 17;
  if (*VAR_3 != ',') {
   FUNC_8(VAR_1, "Missing BSSID Information");
   return -1;
  }
  VAR_3++;

  VAR_9 = FUNC_7(VAR_3, &VAR_10, 0);
  FUNC_0(VAR_6, VAR_9);
  VAR_6 += 4;
  if (*VAR_10 != ',') {
   FUNC_8(VAR_1, "Missing Operating Class");
   return -1;
  }
  VAR_3 = VAR_10 + 1;

  *VAR_6++ = FUNC_1(VAR_3);
  VAR_3 = FUNC_4(VAR_3, ',');
  if (VAR_3 == ((void*)0)) {
   FUNC_8(VAR_1, "Missing Channel Number");
   return -1;
  }
  VAR_3++;

  *VAR_6++ = FUNC_1(VAR_3);
  VAR_3 = FUNC_4(VAR_3, ',');
  if (VAR_3 == ((void*)0)) {
   FUNC_8(VAR_1, "Missing PHY Type");
   return -1;
  }
  VAR_3++;

  *VAR_6++ = FUNC_1(VAR_3);
  VAR_7 = FUNC_4(VAR_3, ' ');
  VAR_11 = FUNC_4(VAR_3, ',');
  if (VAR_11 && (!VAR_7 || VAR_11 < VAR_7)) {

   size_t VAR_12;

   VAR_3 = VAR_11 + 1;
   VAR_7 = FUNC_4(VAR_3, ' ');
   if (VAR_7)
    VAR_12 = VAR_7 - VAR_3;
   else
    VAR_12 = FUNC_5(VAR_3);
   if (VAR_6 + VAR_12 / 2 > VAR_4 + VAR_5) {
    FUNC_8(VAR_1,
        "Not enough room for neighbor subelements");
    return -1;
   }
   if (VAR_12 & 0x01 ||
       FUNC_2(VAR_3, VAR_6, VAR_12 / 2) < 0) {
    FUNC_8(VAR_1,
        "Invalid neighbor subelement info");
    return -1;
   }
   VAR_6 += VAR_12 / 2;
   VAR_3 = VAR_7;
  }

  VAR_8[1] = VAR_6 - VAR_8 - 2;
 }

 return VAR_6 - VAR_4;
}
