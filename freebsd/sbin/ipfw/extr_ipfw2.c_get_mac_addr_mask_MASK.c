
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ether_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ether_addr*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 struct ether_addr* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*) ;
 size_t FUNC_6 (char*) ;
 char* FUNC_7 (char**,char*) ;
 size_t FUNC_8 (char*,char const*) ;
 long FUNC_9 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_2, uint8_t *VAR_3, uint8_t *VAR_4)
{
 int VAR_5;
 size_t VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;
 struct ether_addr *VAR_10;
 const char *VAR_11 = "0123456789abcdefABCDEF:";

 if (FUNC_4(VAR_2, "any") == 0) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_3[VAR_5] = VAR_4[VAR_5] = 0;
  return;
 }

 VAR_9 = VAR_8 = FUNC_5(VAR_2);
 if ((VAR_7 = FUNC_7(&VAR_8, "&/")) != ((void*)0) && *VAR_7 != 0) {
  VAR_6 = FUNC_6(VAR_7);
  if (FUNC_8(VAR_7, VAR_11) != VAR_6 || (VAR_10 = FUNC_2(VAR_7)) == ((void*)0))
   FUNC_1(VAR_1, "Incorrect MAC address");
  FUNC_0(VAR_10, VAR_3, VAR_0);
 } else
  FUNC_1(VAR_1, "Incorrect MAC address");

 if (VAR_8 != ((void*)0)) {
  if (VAR_2[VAR_8 - VAR_9 - 1] == '/') {
   long VAR_12 = FUNC_9(VAR_8, &VAR_7, 10);
   if (*VAR_7 != 0 || VAR_12 > VAR_0 * 8 || VAR_12 < 0)
    FUNC_1(VAR_1, "Incorrect mask length");
   for (VAR_5 = 0; VAR_12 > 0 && VAR_5 < VAR_0; VAR_12 -= 8, VAR_5++)
    VAR_4[VAR_5] = (VAR_12 >= 8) ? 0xff: (~0) << (8 - VAR_12);
  } else {
   VAR_6 = FUNC_6(VAR_8);
   if (FUNC_8(VAR_8, VAR_11) != VAR_6 ||
       (VAR_10 = FUNC_2(VAR_8)) == ((void*)0))
    FUNC_1(VAR_1, "Incorrect mask");
   FUNC_0(VAR_10, VAR_4, VAR_0);
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_4[VAR_5] = 0xff;
 }
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3[VAR_5] &= VAR_4[VAR_5];

 FUNC_3(VAR_9);
}
