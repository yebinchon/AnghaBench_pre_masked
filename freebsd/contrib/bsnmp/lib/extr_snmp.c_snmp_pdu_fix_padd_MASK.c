
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ priv_proto; } ;
struct snmp_pdu {int scoped_len; TYPE_1__ user; } ;
struct asn_buf {int dummy; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int asn_len_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct asn_buf*,int) ;

__attribute__((used)) static enum asn_err
FUNC_1(struct asn_buf *VAR_3, struct snmp_pdu *VAR_4)
{
 asn_len_t VAR_5;

 if (VAR_4->user.priv_proto == VAR_2 && VAR_4->scoped_len % 8 != 0) {
  VAR_5 = 8 - (VAR_4->scoped_len % 8);
  if (FUNC_0(VAR_3, VAR_5) != VAR_1)
   return (VAR_0);
  VAR_4->scoped_len += VAR_5;
 }

 return (VAR_1);
}
