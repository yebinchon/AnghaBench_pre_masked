
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_0(char *VAR_1, char *VAR_2, size_t VAR_3) {
 size_t VAR_4;

 VAR_3 >>= 1;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 2) {
  VAR_2[VAR_4+1] = VAR_1[VAR_4] = (char)VAR_4;
  VAR_2[VAR_4] = VAR_1[VAR_4+1] = (char)(VAR_4+1);
 }
 for (VAR_3 <<= 1; VAR_3 < VAR_0; VAR_3++)
  VAR_1[VAR_3] = VAR_2[VAR_3] = (char)~0;
}
