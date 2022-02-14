
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct asn_buf {int asn_len; int* asn_cptr; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct asn_buf*,char*,...) ;

enum asn_err
FUNC_1(struct asn_buf *VAR_5, u_char *VAR_6, asn_len_t *VAR_7)
{
 u_int VAR_8;

 if (VAR_5->asn_len == 0) {
  FUNC_0(VAR_5, "no identifier for header");
  return (VAR_0);
 }
 *VAR_6 = *VAR_5->asn_cptr;
 if ((*VAR_6 & VAR_4) > 0x30) {
  FUNC_0(VAR_5, "types > 0x30 not supported (%u)",
      *VAR_6 & VAR_4);
  return (VAR_1);
 }
 VAR_5->asn_cptr++;
 VAR_5->asn_len--;
 if (VAR_5->asn_len == 0) {
  FUNC_0(VAR_5, "no length field");
  return (VAR_0);
 }
 if (*VAR_5->asn_cptr & 0x80) {
  VAR_8 = *VAR_5->asn_cptr++ & 0x7f;
  VAR_5->asn_len--;
  if (VAR_8 == 0) {
   FUNC_0(VAR_5, "indefinite length not supported");
   return (VAR_1);
  }
  if (VAR_8 > VAR_3) {
   FUNC_0(VAR_5, "long length too long (%u)", VAR_8);
   return (VAR_1);
  }
  if (VAR_8 > VAR_5->asn_len) {
   FUNC_0(VAR_5, "long length truncated");
   return (VAR_0);
  }
  *VAR_7 = 0;
  while (VAR_8--) {
   *VAR_7 = (*VAR_7 << 8) | *VAR_5->asn_cptr++;
   VAR_5->asn_len--;
  }
 } else {
  *VAR_7 = *VAR_5->asn_cptr++;
  VAR_5->asn_len--;
 }
 if (*VAR_7 > VAR_5->asn_len) {
  FUNC_0(VAR_5, "len %u exceeding asn_len %u", *VAR_7, VAR_5->asn_len);
  return (VAR_0);
 }

 return (VAR_2);
}
