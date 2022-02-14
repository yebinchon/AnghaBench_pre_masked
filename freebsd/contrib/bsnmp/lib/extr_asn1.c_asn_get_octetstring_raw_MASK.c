
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct asn_buf {scalar_t__ asn_len; int asn_cptr; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef scalar_t__ asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct asn_buf*,char*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

enum asn_err
FUNC_2(struct asn_buf *VAR_3, asn_len_t VAR_4, u_char *VAR_5,
    u_int *VAR_6)
{
 enum asn_err VAR_7 = VAR_1;

 if (*VAR_6 < VAR_4) {
  FUNC_0(VAR_3, "octetstring truncated");
  VAR_7 = VAR_2;
 }
 if (VAR_3->asn_len < VAR_4) {
  FUNC_0(VAR_3, "truncatet octetstring");
  return (VAR_0);
 }
 if (*VAR_6 < VAR_4)
  FUNC_1(VAR_5, VAR_3->asn_cptr, *VAR_6);
 else
  FUNC_1(VAR_5, VAR_3->asn_cptr, VAR_4);
 *VAR_6 = VAR_4;
 VAR_3->asn_cptr += VAR_4;
 VAR_3->asn_len -= VAR_4;
 return (VAR_7);
}
