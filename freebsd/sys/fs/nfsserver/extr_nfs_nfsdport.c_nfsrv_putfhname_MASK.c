
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int fhandle_t ;



__attribute__((used)) static int
FUNC_0(fhandle_t *VAR_0, char *VAR_1)
{
 int VAR_2;
 uint8_t *VAR_3;
 const uint8_t *VAR_4 = "0123456789abcdef";

 VAR_3 = (uint8_t *)VAR_0;
 for (VAR_2 = 0; VAR_2 < sizeof(*VAR_0); VAR_2++) {
  VAR_1[2 * VAR_2] = VAR_4[(*VAR_3 >> 4) & 0xf];
  VAR_1[2 * VAR_2 + 1] = VAR_4[*VAR_3++ & 0xf];
 }
 VAR_1[2 * VAR_2] = '\0';
 return (2 * VAR_2);
}
