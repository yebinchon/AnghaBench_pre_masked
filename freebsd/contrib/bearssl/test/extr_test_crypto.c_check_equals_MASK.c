
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (void const*,void const*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, const void *VAR_3, const void *VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 const unsigned char *VAR_7;

 if (FUNC_2(VAR_3, VAR_4, VAR_5) == 0) {
  return;
 }
 FUNC_1(VAR_1, "\n%s failed\n", VAR_2);
 FUNC_1(VAR_1, "v1: ");
 for (VAR_6 = 0, VAR_7 = VAR_3; VAR_6 < VAR_5; VAR_6 ++) {
  FUNC_1(VAR_1, "%02X", VAR_7[VAR_6]);
 }
 FUNC_1(VAR_1, "\nv2: ");
 for (VAR_6 = 0, VAR_7 = VAR_4; VAR_6 < VAR_5; VAR_6 ++) {
  FUNC_1(VAR_1, "%02X", VAR_7[VAR_6]);
 }
 FUNC_1(VAR_1, "\n");
 FUNC_0(VAR_0);
}
