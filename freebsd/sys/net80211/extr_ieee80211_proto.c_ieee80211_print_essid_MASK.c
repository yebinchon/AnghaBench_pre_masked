
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(const uint8_t *VAR_1, int VAR_2)
{
 const uint8_t *VAR_3;
 int VAR_4;

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 for (VAR_4 = 0, VAR_3 = VAR_1; VAR_4 < VAR_2; VAR_4++, VAR_3++) {
  if (*VAR_3 < ' ' || *VAR_3 > 0x7e)
   break;
 }
 if (VAR_4 == VAR_2) {
  FUNC_0("\"");
  for (VAR_4 = 0, VAR_3 = VAR_1; VAR_4 < VAR_2; VAR_4++, VAR_3++)
   FUNC_0("%c", *VAR_3);
  FUNC_0("\"");
 } else {
  FUNC_0("0x");
  for (VAR_4 = 0, VAR_3 = VAR_1; VAR_4 < VAR_2; VAR_4++, VAR_3++)
   FUNC_0("%02x", *VAR_3);
 }
}
