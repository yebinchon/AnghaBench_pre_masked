
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(const char* VAR_1, const uint8_t *VAR_2, size_t VAR_3, int VAR_4)
{
 FUNC_0("%s", VAR_1);
 if (VAR_0) {
  VAR_4 -= FUNC_1(VAR_1)+2;
  if (2*VAR_3 > VAR_4)
   VAR_4--;
  FUNC_0("<");
  for (; VAR_3 > 0; VAR_2++, VAR_3--) {
   if (VAR_4-- <= 0)
    break;
   FUNC_0("%02x", *VAR_2);
  }
  if (VAR_3 != 0)
   FUNC_0("-");
  FUNC_0(">");
 }
}
