
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn_buf {scalar_t__ asn_len; int asn_ptr; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef scalar_t__ asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct asn_buf*,char*,...) ;

enum asn_err
FUNC_1(struct asn_buf *VAR_3, asn_len_t VAR_4)
{
 if (VAR_4 != 0) {
  if (VAR_3->asn_len < VAR_4) {
   FUNC_0(VAR_3, "truncated NULL");
   return (VAR_1);
  }
  FUNC_0(VAR_3, "bad length for NULL (%u)", VAR_4);
  VAR_3->asn_len -= VAR_4;
  VAR_3->asn_ptr += VAR_4;
  return (VAR_0);
 }
 return (VAR_2);
}
