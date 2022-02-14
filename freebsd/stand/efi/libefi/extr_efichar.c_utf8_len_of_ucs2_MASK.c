
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_char ;



__attribute__((used)) static size_t
FUNC_0(const efi_char *VAR_0)
{
 size_t VAR_1;
 efi_char VAR_2;

 VAR_1 = 0;
 while (*VAR_0) {
  VAR_2 = *VAR_0++;
  if (VAR_2 > 0x7ff)
   VAR_1 += 3;
  else if (VAR_2 > 0x7f)
   VAR_1 += 2;
  else
   VAR_1++;
 }

 return (VAR_1);
}
