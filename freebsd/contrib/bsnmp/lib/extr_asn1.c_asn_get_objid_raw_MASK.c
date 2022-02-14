
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn_oid {scalar_t__ len; int* subs; } ;
struct asn_buf {scalar_t__ asn_len; int* asn_cptr; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int asn_subid_t ;
typedef scalar_t__ asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct asn_buf*,char*,...) ;

enum asn_err
FUNC_1(struct asn_buf *VAR_6, asn_len_t VAR_7, struct asn_oid *VAR_8)
{
 asn_subid_t VAR_9;
 enum asn_err VAR_10;

 if (VAR_6->asn_len < VAR_7) {
  FUNC_0(VAR_6, "truncated OBJID");
  return (VAR_1);
 }
 VAR_8->len = 0;
 if (VAR_7 == 0) {
  FUNC_0(VAR_6, "short OBJID");
  VAR_8->subs[VAR_8->len++] = 0;
  VAR_8->subs[VAR_8->len++] = 0;
  return (VAR_0);
 }
 VAR_10 = VAR_2;
 while (VAR_7 != 0) {
  if (VAR_8->len == VAR_5) {
   FUNC_0(VAR_6, "OID too long (%u)", VAR_8->len);
   VAR_6->asn_cptr += VAR_7;
   VAR_6->asn_len -= VAR_7;
   return (VAR_0);
  }
  VAR_9 = 0;
  do {
   if (VAR_7 == 0) {
    FUNC_0(VAR_6, "unterminated subid");
    return (VAR_1);
   }
   if (VAR_9 > (VAR_4 >> 7)) {
    FUNC_0(VAR_6, "OBID subid too larger");
    VAR_10 = VAR_3;
   }
   VAR_9 = (VAR_9 << 7) | (*VAR_6->asn_cptr & 0x7f);
   VAR_7--;
   VAR_6->asn_len--;
  } while (*VAR_6->asn_cptr++ & 0x80);
  if (VAR_8->len == 0) {
   if (VAR_9 < 80) {
    VAR_8->subs[VAR_8->len++] = VAR_9 / 40;
    VAR_8->subs[VAR_8->len++] = VAR_9 % 40;
   } else {
    VAR_8->subs[VAR_8->len++] = 2;
    VAR_8->subs[VAR_8->len++] = VAR_9 - 80;
   }
  } else {
   VAR_8->subs[VAR_8->len++] = VAR_9;
  }
 }
 return (VAR_10);

}
