
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn_buf {scalar_t__ asn_len; int asn_ptr; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef scalar_t__ asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;

enum asn_err
FUNC_0(struct asn_buf *VAR_2, asn_len_t VAR_3)
{
 if (VAR_2->asn_len < VAR_3)
  return (VAR_0);
 VAR_2->asn_ptr += VAR_3;
 VAR_2->asn_len -= VAR_3;

 return (VAR_1);
}
