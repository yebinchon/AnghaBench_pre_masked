
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int src ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, void *VAR_1, size_t VAR_2, void *VAR_3)
{
 uint64_t *VAR_4 = VAR_0;
 uint64_t *VAR_5 = VAR_1;
 int VAR_6 = VAR_2 / sizeof (VAR_5[0]);

 for (int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_4[VAR_7] ^= VAR_5[VAR_7];
 }

 return (0);
}
