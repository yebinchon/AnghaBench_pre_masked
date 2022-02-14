
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,unsigned long long*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, size_t VAR_1)
{
 const char VAR_2[] = "12802747070103273189";
 unsigned long long VAR_3[3];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
  VAR_3[VAR_4] = (long long)0xdeadbeefdeadbeef;

 FUNC_0(FUNC_1(VAR_2, "%llu", &VAR_3[1]) == 1);
 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
  FUNC_0(VAR_3[VAR_4] == (VAR_4 != 1 ? (long long)0xdeadbeefdeadbeef :
      12802747070103273189ull));
}
