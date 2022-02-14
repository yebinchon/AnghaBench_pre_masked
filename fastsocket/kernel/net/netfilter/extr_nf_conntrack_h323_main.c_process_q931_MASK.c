
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_9__ {int count; int * item; } ;
struct TYPE_8__ {int choice; int progress; int facility; int alerting; int connect; int callProceeding; int setup; } ;
struct TYPE_11__ {int options; TYPE_3__ h245Control; TYPE_2__ h323_message_body; } ;
struct TYPE_7__ {TYPE_5__ h323_uu_pdu; } ;
struct TYPE_10__ {TYPE_1__ UUIE; } ;
typedef TYPE_4__ Q931 ;
typedef TYPE_5__ H323_UU_PDU ;


 int VAR_0 ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;
 int FUNC_2 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;
 int FUNC_3 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;
 int FUNC_4 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;
 int FUNC_5 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;
 int FUNC_6 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;
 int FUNC_7 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1, struct nf_conn *VAR_2,
   enum ip_conntrack_info VAR_3,
   unsigned char **VAR_4, int VAR_5, Q931 *VAR_6)
{
 H323_UU_PDU *VAR_7 = &VAR_6->UUIE.h323_uu_pdu;
 int VAR_8;
 int VAR_9 = 0;

 switch (VAR_7->h323_message_body.choice) {
 case 128:
  VAR_9 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
        &VAR_7->h323_message_body.setup);
  break;
 case 132:
  VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
          &VAR_7->h323_message_body.
          callProceeding);
  break;
 case 131:
  VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
          &VAR_7->h323_message_body.connect);
  break;
 case 133:
  VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
           &VAR_7->h323_message_body.alerting);
  break;
 case 130:
  VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
           &VAR_7->h323_message_body.facility);
  break;
 case 129:
  VAR_9 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
           &VAR_7->h323_message_body.progress);
  break;
 default:
  FUNC_0("nf_ct_q931: Q.931 signal %d\n",
    VAR_7->h323_message_body.choice);
  break;
 }

 if (VAR_9 < 0)
  return -1;

 if (VAR_7->options & VAR_0) {
  for (VAR_8 = 0; VAR_8 < VAR_7->h245Control.count; VAR_8++) {
   VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
        &VAR_7->h245Control.item[VAR_8]);
   if (VAR_9 < 0)
    return -1;
  }
 }

 return 0;
}
