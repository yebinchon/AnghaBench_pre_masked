
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct display_info {char type; int size; } ;


 int const FUNC_0 (int const) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,int) ;

__attribute__((used)) static int FUNC_5(struct display_info *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 const uint8_t *VAR_6 = (const uint8_t *)VAR_2;
 const char *VAR_7;
 int VAR_8;
 int VAR_9;
 char VAR_10[3];


 if (VAR_3 == 0)
  return 0;

 VAR_9 = (VAR_1->type) == 's' ||
  (!VAR_1->type && FUNC_4(VAR_2, VAR_3));
 if (VAR_9) {
  if (VAR_2[VAR_3 - 1] != '\0') {
   FUNC_1(VAR_0, "Unterminated string\n");
   return -1;
  }
  for (VAR_7 = VAR_2; VAR_7 - VAR_2 < VAR_3; VAR_7 += FUNC_3(VAR_7) + 1) {
   if (VAR_7 != VAR_2)
    FUNC_2(" ");
   FUNC_2("%s", (const char *)VAR_7);
  }
  return 0;
 }
 VAR_5 = VAR_1->size;
 if (VAR_5 == -1) {
  VAR_5 = (VAR_3 % 4) == 0 ? 4 : 1;
 } else if (VAR_3 % VAR_5) {
  FUNC_1(VAR_0, "Property length must be a multiple of "
    "selected data size\n");
  return -1;
 }
 VAR_10[0] = '%';
 VAR_10[1] = VAR_1->type ? VAR_1->type : 'd';
 VAR_10[2] = '\0';
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += VAR_5, VAR_6 += VAR_5) {
  if (VAR_4)
   FUNC_2(" ");
  VAR_8 = VAR_5 == 4 ? FUNC_0(*(const uint32_t *)VAR_6) :
   VAR_5 == 2 ? (*VAR_6 << 8) | VAR_6[1] : *VAR_6;
  FUNC_2(VAR_10, VAR_8);
 }
 return 0;
}
