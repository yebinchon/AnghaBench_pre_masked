
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ efi_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (size_t) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_3, efi_char **VAR_4, size_t *VAR_5)
{
 efi_char *VAR_6;
 size_t VAR_7;
 uint32_t VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = *VAR_4 == ((void*)0);

 VAR_7 = FUNC_2(VAR_3) * 2 + 2;
 if (*VAR_4 == ((void*)0))
  *VAR_4 = FUNC_1(VAR_7);
 if (*VAR_4 == ((void*)0))
  return (VAR_2);
 VAR_6 = *VAR_4;
 *VAR_5 = VAR_7;

 VAR_8 = 0;
 VAR_10 = 0;
 while (VAR_7 > 1 && *VAR_3 != '\0') {
  VAR_9 = *VAR_3++;




  if ((VAR_9 & 0xc0) != 0x80) {

   if (VAR_10 != 0)
    goto ilseq;
   if ((VAR_9 & 0xf8) == 0xf0) {
    VAR_8 = VAR_9 & 0x07;
    VAR_10 = 3;
   } else if ((VAR_9 & 0xf0) == 0xe0) {
    VAR_8 = VAR_9 & 0x0f;
    VAR_10 = 2;
   } else if ((VAR_9 & 0xe0) == 0xc0) {
    VAR_8 = VAR_9 & 0x1f;
    VAR_10 = 1;
   } else {
    VAR_8 = VAR_9 & 0x7f;
    VAR_10 = 0;
   }
  } else {

   if (VAR_10 > 0) {
    VAR_8 = (VAR_8 << 6) + (VAR_9 & 0x3f);
    VAR_10--;
   } else if (VAR_10 == 0)
    goto ilseq;
  }
  if (VAR_10 == 0) {
   if (VAR_8 > 0xffff)
    goto ilseq;
   *VAR_6++ = (efi_char)VAR_8;
   VAR_7 -= 2;
  }
 }
 if (VAR_7 < 2) {
  if (VAR_11) {
   FUNC_0(VAR_6);
   *VAR_4 = ((void*)0);
  }
  return (VAR_0);
 }
 VAR_7 -= 2;
 *VAR_6 = 0;
 *VAR_5 -= VAR_7;
 return (0);
ilseq:
 if (VAR_11) {
  FUNC_0(VAR_6);
  *VAR_4 = ((void*)0);
 }
 return (VAR_1);
}
