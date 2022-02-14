
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;
struct TYPE_2__ {int type; int length; } ;
typedef TYPE_1__ sctp_chunkhdr_t ;




 scalar_t__ FUNC_0 (int ) ;
 struct sctp_association* FUNC_1 (struct sk_buff*,union sctp_addr const*,struct sctp_transport**) ;
 struct sctp_association* FUNC_2 (struct sk_buff*,union sctp_addr const*,struct sctp_transport**) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct sctp_association *FUNC_4(struct sk_buff *VAR_0,
          const union sctp_addr *VAR_1,
          struct sctp_transport **VAR_2)
{
 sctp_chunkhdr_t *VAR_3;

 VAR_3 = (sctp_chunkhdr_t *) VAR_0->data;






 if (FUNC_0(FUNC_3(VAR_3->length)) > VAR_0->len)
  return ((void*)0);


 switch (VAR_3->type) {
 case 129:
 case 128:
  return FUNC_1(VAR_0, VAR_1, VAR_2);
  break;

 default:
  return FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 }


 return ((void*)0);
}
