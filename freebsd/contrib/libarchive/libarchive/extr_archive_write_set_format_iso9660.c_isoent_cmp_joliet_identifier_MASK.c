
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isoent {int ext_off; int ext_len; scalar_t__ identifier; } ;


 int FUNC_0 (unsigned char const*,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_1(const struct isoent *VAR_0, const struct isoent *VAR_1)
{
 const unsigned char *VAR_2, *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_2 = (const unsigned char *)VAR_0->identifier;
 VAR_3 = (const unsigned char *)VAR_1->identifier;


 VAR_5 = VAR_0->ext_off;
 if (VAR_5 > VAR_1->ext_off)
  VAR_5 = VAR_1->ext_off;
 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_5);
 if (VAR_4 != 0)
  return (VAR_4);
 if (VAR_0->ext_off < VAR_1->ext_off) {
  VAR_3 += VAR_5;
  VAR_5 = VAR_1->ext_off - VAR_0->ext_off;
  while (VAR_5--)
   if (0 != *VAR_3++)
    return (- *(const unsigned char *)(VAR_3 - 1));
 } else if (VAR_0->ext_off > VAR_1->ext_off) {
  VAR_2 += VAR_5;
  VAR_5 = VAR_0->ext_off - VAR_1->ext_off;
  while (VAR_5--)
   if (0 != *VAR_2++)
    return (*(const unsigned char *)(VAR_2 - 1));
 }

 if (VAR_0->ext_len == 0 && VAR_1->ext_len == 0)
  return (0);
 if (VAR_0->ext_len == 2 && VAR_1->ext_len == 2)
  return (0);
 if (VAR_0->ext_len <= 2)
  return (-1);
 if (VAR_1->ext_len <= 2)
  return (1);
 VAR_5 = VAR_0->ext_len;
 if (VAR_5 > VAR_1->ext_len)
  VAR_5 = VAR_1->ext_len;
 VAR_2 = (unsigned char *)(VAR_0->identifier + VAR_0->ext_off);
 VAR_3 = (unsigned char *)(VAR_1->identifier + VAR_1->ext_off);
 if (VAR_5 > 1) {
  VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_5);
  if (VAR_4 != 0)
   return (VAR_4);
 }
 if (VAR_0->ext_len < VAR_1->ext_len) {
  VAR_3 += VAR_5;
  VAR_5 = VAR_1->ext_len - VAR_0->ext_len;
  while (VAR_5--)
   if (0 != *VAR_3++)
    return (- *(const unsigned char *)(VAR_3 - 1));
 } else if (VAR_0->ext_len > VAR_1->ext_len) {
  VAR_2 += VAR_5;
  VAR_5 = VAR_0->ext_len - VAR_1->ext_len;
  while (VAR_5--)
   if (0 != *VAR_2++)
    return (*(const unsigned char *)(VAR_2 - 1));
 }



 return (VAR_4);
}
