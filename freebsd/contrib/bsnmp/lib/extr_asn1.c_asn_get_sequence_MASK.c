
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct asn_buf {scalar_t__ asn_len; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef scalar_t__ asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct asn_buf*,char*,...) ;
 int FUNC_1 (struct asn_buf*,int*,scalar_t__*) ;

enum asn_err
FUNC_2(struct asn_buf *VAR_5, asn_len_t *VAR_6)
{
 u_char VAR_7;
 enum asn_err VAR_8;

 if ((VAR_8 = FUNC_1(VAR_5, &VAR_7, VAR_6)) != VAR_1)
  return (VAR_8);
 if (VAR_7 != (VAR_4|VAR_3)) {
  FUNC_0(VAR_5, "bad sequence type %u", VAR_7);
  return (VAR_2);
 }
 if (*VAR_6 > VAR_5->asn_len) {
  FUNC_0(VAR_5, "truncated sequence");
  return (VAR_0);
 }
 return (VAR_1);
}
