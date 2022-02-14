
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void *VAR_0, void *VAR_1, int VAR_2)
{
 char VAR_3;

 do {
  VAR_3 = *(char *)VAR_0;
  *(char *)VAR_0++ = *(char *)VAR_1;
  *(char *)VAR_1++ = VAR_3;
 } while (--VAR_2 > 0);
}
