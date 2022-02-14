
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
struct sbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sbuf*,char*,int,...) ;

__attribute__((used)) static void
FUNC_3(struct sbuf *VAR_2, uint16_t *VAR_3, size_t VAR_4)
{
 u_int VAR_5;
 uint32_t VAR_6;
 uint16_t VAR_7;

 VAR_5 = VAR_1;
 while (VAR_4 > 0 && *VAR_3 != 0) {
  VAR_6 = (VAR_5 == VAR_0) ? FUNC_0(*VAR_3) : FUNC_1(*VAR_3);
  VAR_3++, VAR_4--;
  if ((VAR_6 & 0xf800) == 0xd800) {
   if (VAR_4 > 0) {
    VAR_7 = (VAR_5 == VAR_0) ? FUNC_0(*VAR_3)
        : FUNC_1(*VAR_3);
    VAR_3++, VAR_4--;
   } else
    VAR_7 = 0xfffd;
   if ((VAR_6 & 0x400) == 0 && (VAR_7 & 0xfc00) == 0xdc00) {
    VAR_6 = ((VAR_6 & 0x3ff) << 10) + (VAR_7 & 0x3ff);
    VAR_6 += 0x10000;
   } else
    VAR_6 = 0xfffd;
  } else if (VAR_6 == 0xfffe) {
   VAR_5 = (VAR_5 == VAR_0) ? VAR_1 : VAR_0;
   continue;
  } else if (VAR_6 == 0xfeff)
   continue;


  if (VAR_6 < 0x80)
   FUNC_2(VAR_2, "%c", VAR_6);
  else if (VAR_6 < 0x800)
   FUNC_2(VAR_2, "%c%c", 0xc0 | (VAR_6 >> 6),
       0x80 | (VAR_6 & 0x3f));
  else if (VAR_6 < 0x10000)
   FUNC_2(VAR_2, "%c%c%c", 0xe0 | (VAR_6 >> 12),
       0x80 | ((VAR_6 >> 6) & 0x3f), 0x80 | (VAR_6 & 0x3f));
  else if (VAR_6 < 0x200000)
   FUNC_2(VAR_2, "%c%c%c%c", 0xf0 | (VAR_6 >> 18),
       0x80 | ((VAR_6 >> 12) & 0x3f),
       0x80 | ((VAR_6 >> 6) & 0x3f), 0x80 | (VAR_6 & 0x3f));
 }
}
