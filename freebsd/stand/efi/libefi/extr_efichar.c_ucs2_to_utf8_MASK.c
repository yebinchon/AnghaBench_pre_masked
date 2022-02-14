
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (int const*) ;

int
FUNC_3(const efi_char *VAR_2, char **VAR_3)
{
 size_t VAR_4, VAR_5;
 efi_char VAR_6;
 char *VAR_7;
 int VAR_8 = *VAR_3 == ((void*)0);

 VAR_5 = FUNC_2(VAR_2) + 1;
 VAR_4 = 0;
 if (*VAR_3 != ((void*)0))
  VAR_7 = *VAR_3;
 else
  VAR_7 = *VAR_3 = FUNC_1(VAR_5);
 if (*VAR_3 == ((void*)0))
  return (VAR_0);

 while (*VAR_2) {
  VAR_6 = *VAR_2++;
  if (VAR_6 > 0x7ff) {
   if (VAR_4++ < VAR_5)
    *VAR_7++ = (char)(0xE0 | (VAR_6 >> 12));
   if (VAR_4++ < VAR_5)
    *VAR_7++ = (char)(0x80 | ((VAR_6 >> 6) & 0x3f));
   if (VAR_4++ < VAR_5)
    *VAR_7++ = (char)(0x80 | (VAR_6 & 0x3f));
  } else if (VAR_6 > 0x7f) {
   if (VAR_4++ < VAR_5)
    *VAR_7++ = (char)(0xC0 | ((VAR_6 >> 6) & 0x1f));
   if (VAR_4++ < VAR_5)
    *VAR_7++ = (char)(0x80 | (VAR_6 & 0x3f));
  } else {
   if (VAR_4++ < VAR_5)
    *VAR_7++ = (char)(VAR_6 & 0x7f);
  }
 }

 if (VAR_4 >= VAR_5) {

  if (VAR_8) {
   FUNC_0(*VAR_3);
   *VAR_3 = ((void*)0);
  }
  return (VAR_1);
 }
 *VAR_7++ = '\0';

 return (0);
}
