
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct in_addr {int s_addr; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 char* FUNC_1 (struct in_addr) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_0, u_int32_t VAR_1)
{
 struct in_addr VAR_2;

 VAR_2.s_addr = VAR_1;
 FUNC_0(VAR_0, "%s", FUNC_1(VAR_2));
}
