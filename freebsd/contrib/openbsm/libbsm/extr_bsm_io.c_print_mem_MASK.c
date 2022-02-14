
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
typedef int u_char ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, u_char *VAR_1, size_t VAR_2)
{
 u_int32_t VAR_3;

 if (VAR_2 > 0) {
  FUNC_0(VAR_0, "0x");
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   FUNC_0(VAR_0, "%02x", VAR_1[VAR_3]);
 }
}
