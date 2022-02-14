
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int the_banana ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 const u_char VAR_3[] = { 'b', 'a', 'n', 'a', 'n', 'a' };

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += sizeof(VAR_3)) {
  if (VAR_1 - VAR_2 < sizeof(VAR_3)) {
   FUNC_0(VAR_0 + VAR_2, "nanananana", VAR_1 - VAR_2);
   break;
  }
  FUNC_0(VAR_0 + VAR_2, FUNC_1, sizeof(VAR_3));
 }
}
