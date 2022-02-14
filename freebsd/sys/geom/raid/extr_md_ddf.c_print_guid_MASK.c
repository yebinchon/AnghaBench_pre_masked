
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint8_t *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = 1;
 for (VAR_1 = 0; VAR_1 < 24; VAR_1++) {
  if (VAR_0[VAR_1] != 0 && (VAR_0[VAR_1] < ' ' || VAR_0[VAR_1] > 127)) {
   VAR_2 = 0;
   break;
  }
 }
 if (VAR_2) {
  FUNC_0("'%.24s'", VAR_0);
 } else {
  for (VAR_1 = 0; VAR_1 < 24; VAR_1++)
   FUNC_0("%02x", VAR_0[VAR_1]);
 }
}
