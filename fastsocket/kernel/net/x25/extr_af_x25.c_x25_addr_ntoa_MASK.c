
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_address {char* x25_addr; } ;



int FUNC_0(unsigned char *VAR_0, struct x25_address *VAR_1,
    struct x25_address *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 char *VAR_5, *VAR_6;
 unsigned int VAR_7;

 VAR_3 = (*VAR_0 >> 0) & 0x0F;
 VAR_4 = (*VAR_0 >> 4) & 0x0F;

 VAR_5 = VAR_1->x25_addr;
 VAR_6 = VAR_2->x25_addr;
 VAR_0++;

 for (VAR_7 = 0; VAR_7 < (VAR_3 + VAR_4); VAR_7++) {
  if (VAR_7 < VAR_3) {
   if (VAR_7 % 2 != 0) {
    *VAR_5++ = ((*VAR_0 >> 0) & 0x0F) + '0';
    VAR_0++;
   } else {
    *VAR_5++ = ((*VAR_0 >> 4) & 0x0F) + '0';
   }
  } else {
   if (VAR_7 % 2 != 0) {
    *VAR_6++ = ((*VAR_0 >> 0) & 0x0F) + '0';
    VAR_0++;
   } else {
    *VAR_6++ = ((*VAR_0 >> 4) & 0x0F) + '0';
   }
  }
 }

 *VAR_5 = *VAR_6 = '\0';

 return 1 + (VAR_3 + VAR_4 + 1) / 2;
}
