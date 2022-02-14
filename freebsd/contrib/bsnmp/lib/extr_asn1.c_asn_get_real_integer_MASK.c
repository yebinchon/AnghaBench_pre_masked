
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_char ;
struct asn_buf {int asn_len; int* asn_cptr; } ;
typedef int int64_t ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asn_buf*,char*) ;

__attribute__((used)) static enum asn_err
FUNC_1(struct asn_buf *VAR_4, asn_len_t VAR_5, int64_t *VAR_6)
{
 uint64_t VAR_7;
 int VAR_8 = 0;
 enum asn_err VAR_9;

 if (VAR_4->asn_len < VAR_5) {
  FUNC_0(VAR_4, "truncated integer");
  return (VAR_1);
 }
 if (VAR_5 == 0) {
  FUNC_0(VAR_4, "zero-length integer");
  *VAR_6 = 0;
  return (VAR_0);
 }
 VAR_9 = VAR_2;
 if (VAR_5 > 8)
  VAR_9 = VAR_3;
 else if (VAR_5 > 1 &&
     ((*VAR_4->asn_cptr == 0x00 && (VAR_4->asn_cptr[1] & 0x80) == 0) ||
     (*VAR_4->asn_cptr == 0xff && (VAR_4->asn_cptr[1] & 0x80) == 0x80))) {
  FUNC_0(VAR_4, "non-minimal integer");
  VAR_9 = VAR_0;
 }

 if (*VAR_4->asn_cptr & 0x80)
  VAR_8 = 1;
 VAR_7 = 0;
 while (VAR_5--) {
  VAR_7 <<= 8;
  VAR_7 |= VAR_8 ? (u_char)~*VAR_4->asn_cptr : *VAR_4->asn_cptr;
  VAR_4->asn_len--;
  VAR_4->asn_cptr++;
 }
 if (VAR_8) {
  *VAR_6 = -(int64_t)VAR_7 - 1;
 } else
  *VAR_6 = (int64_t)VAR_7;
 return (VAR_9);
}
