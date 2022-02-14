
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {char const* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const) ;
 scalar_t__ FUNC_1 (char const*,int,char*,unsigned char) ;

int
FUNC_2(const struct buf *VAR_2, size_t *VAR_3, struct buf *VAR_4, size_t *VAR_5,
    int *VAR_6)
{
 const unsigned char *VAR_7;
 int VAR_8;
 unsigned int VAR_9;

 VAR_7 = (const unsigned char *)VAR_2->buf + *VAR_3;
 FUNC_0(*VAR_7 & 0x80);

 if ( ! (*VAR_6 & VAR_1))
  goto latin;

 VAR_8 = 1;
 while (VAR_8 < 5 && *VAR_7 & (1 << (7 - VAR_8)))
  VAR_8++;

 switch (VAR_8) {
 case 2:
  VAR_9 = *VAR_7 & 0x1f;
  if (VAR_9 < 0x02)
   goto latin;
  break;
 case 3:
  VAR_9 = *VAR_7 & 0x0f;
  break;
 case 4:
  VAR_9 = *VAR_7 & 0x07;
  if (VAR_9 > 0x04)
   goto latin;
  break;
 default:
  goto latin;
 }

 VAR_7++;
 switch (VAR_8) {
 case 3:
  if ((VAR_9 == 0x00 && ! (*VAR_7 & 0x20)) ||
      (VAR_9 == 0x0d && *VAR_7 & 0x20))
   goto latin;
  break;
 case 4:
  if ((VAR_9 == 0x00 && ! (*VAR_7 & 0x30)) ||
      (VAR_9 == 0x04 && *VAR_7 & 0x30))
   goto latin;
  break;
 default:
  break;
 }

 while (--VAR_8) {
  if ((*VAR_7 & 0xc0) != 0x80)
   goto latin;
  VAR_9 <<= 6;
  VAR_9 += *VAR_7 & 0x3f;
  VAR_7++;
 }

 FUNC_0(VAR_9 > 0x7f);
 FUNC_0(VAR_9 < 0x110000);
 FUNC_0(VAR_9 < 0xd800 || VAR_9 > 0xdfff);

 *VAR_5 += FUNC_1(VAR_4->buf + *VAR_5, 11, "\\[u%.4X]", VAR_9);
 *VAR_3 = (const char *)VAR_7 - VAR_2->buf;
 *VAR_6 &= ~VAR_0;
 return 1;

latin:
 if ( ! (*VAR_6 & VAR_0))
  return 0;

 *VAR_5 += FUNC_1(VAR_4->buf + *VAR_5, 11,
     "\\[u%.4X]", (unsigned char)VAR_2->buf[(*VAR_3)++]);

 *VAR_6 &= ~VAR_1;
 return 1;
}
