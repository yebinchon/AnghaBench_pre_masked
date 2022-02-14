
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct readelf {int dummy; } ;






 int FUNC_0 (int ,int const) ;
 int FUNC_1 (struct readelf*,char const*,size_t) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct readelf *VAR_1, const char *VAR_2, uint32_t VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 const uint32_t *VAR_7;


 if (((uintptr_t)VAR_4 & 3) != 0) {
  FUNC_4("bad note data alignment");
  goto unknown;
 }
 VAR_7 = (const uint32_t *)(const void *)VAR_4;

 if (FUNC_3(VAR_2, "FreeBSD") == 0) {
  switch (VAR_3) {
  case 131:
   if (VAR_5 != 4)
    goto unknown;
   FUNC_2("   ABI tag: %u\n", VAR_7[0]);
   return;

  case 130:
   if (VAR_5 != 4)
    goto unknown;
   FUNC_2("   Arch tag: %x\n", VAR_7[0]);
   return;
  case 129:
   if (VAR_5 != 4)
    goto unknown;
   FUNC_2("   Features:");
   FUNC_0(VAR_0, VAR_7[0]);
   return;
  }
 } else if (FUNC_3(VAR_2, "GNU") == 0) {
  switch (VAR_3) {
  case 128:
   FUNC_1(VAR_1, VAR_4, VAR_5);
   return;
  }
 }
unknown:
 FUNC_2("   description data:");
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_2(" %02x", (unsigned char)VAR_4[VAR_6]);
 FUNC_2("\n");
}
