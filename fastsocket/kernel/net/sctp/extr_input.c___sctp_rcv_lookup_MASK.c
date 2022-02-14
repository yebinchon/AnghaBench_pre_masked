
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sk_buff {int dummy; } ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;


 struct sctp_association* FUNC_0 (union sctp_addr const*,union sctp_addr const*,struct sctp_transport**) ;
 struct sctp_association* FUNC_1 (struct sk_buff*,union sctp_addr const*,struct sctp_transport**) ;

__attribute__((used)) static struct sctp_association *FUNC_2(struct sk_buff *VAR_0,
          const union sctp_addr *VAR_1,
          const union sctp_addr *VAR_2,
          struct sctp_transport **VAR_3)
{
 struct sctp_association *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3);





 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);

 return VAR_4;
}
