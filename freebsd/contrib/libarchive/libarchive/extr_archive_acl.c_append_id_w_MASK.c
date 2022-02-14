
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



__attribute__((used)) static void
FUNC_0(wchar_t **VAR_0, int VAR_1)
{
 if (VAR_1 < 0)
  VAR_1 = 0;
 if (VAR_1 > 9)
  FUNC_0(VAR_0, VAR_1 / 10);
 *(*VAR_0)++ = L"0123456789"[VAR_1 % 10];
}
