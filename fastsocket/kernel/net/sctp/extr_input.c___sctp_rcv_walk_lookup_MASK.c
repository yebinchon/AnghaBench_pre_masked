
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sk_buff {scalar_t__ data; } ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;
struct TYPE_4__ {int type; int length; } ;
typedef TYPE_1__ sctp_chunkhdr_t ;
typedef int __u8 ;
struct TYPE_5__ {int source; } ;





 int FUNC_0 (int) ;
 struct sctp_association* FUNC_1 (TYPE_1__*,union sctp_addr const*,int ,struct sctp_transport**) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int * FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static struct sctp_association *FUNC_5(struct sk_buff *VAR_1,
          const union sctp_addr *VAR_2,
          struct sctp_transport **VAR_3)
{
 struct sctp_association *VAR_4 = ((void*)0);
 sctp_chunkhdr_t *VAR_5;
 int VAR_6 = 0;
 unsigned int VAR_7 = 1;
 __u8 *VAR_8;




 VAR_5 = (sctp_chunkhdr_t *) VAR_1->data;
 do {

  if (FUNC_2(VAR_5->length) < sizeof(sctp_chunkhdr_t))
   break;

  VAR_8 = ((__u8 *)VAR_5) + FUNC_0(FUNC_2(VAR_5->length));
  if (VAR_8 > FUNC_4(VAR_1))
   break;

  switch(VAR_5->type) {
      case 129:
       VAR_6 = VAR_7;
       break;

      case 128:







       if (VAR_6 == 1 && VAR_7 == 2)
        return ((void*)0);
       break;

      case 130:
       if (VAR_6 || VAR_0)
        VAR_4 = FUNC_1(VAR_5, VAR_2,
       FUNC_3(VAR_1)->source,
       VAR_3);
      default:
       break;
  }

  if (VAR_4)
   break;

  VAR_5 = (sctp_chunkhdr_t *) VAR_8;
  VAR_7++;
 } while (VAR_8 < FUNC_4(VAR_1));

 return VAR_4;
}
