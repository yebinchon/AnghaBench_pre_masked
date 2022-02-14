
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_session {scalar_t__ cfc; int initiator; } ;
struct rfcomm_pn {int flow_ctrl; void* mtu; scalar_t__ credits; scalar_t__ max_retrans; scalar_t__ ack_timer; int priority; int dlci; } ;
struct rfcomm_mcc {void* len; int type; } ;
struct rfcomm_hdr {void* len; int ctrl; int addr; } ;
struct rfcomm_dlc {scalar_t__ mtu; int priority; int dlci; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ VAR_3 ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct rfcomm_session*,int *,int) ;

__attribute__((used)) static int FUNC_8(struct rfcomm_session *VAR_4, int VAR_5, struct rfcomm_dlc *VAR_6)
{
 struct rfcomm_hdr *VAR_7;
 struct rfcomm_mcc *VAR_8;
 struct rfcomm_pn *VAR_9;
 u8 VAR_10[16], *VAR_11 = VAR_10;

 FUNC_0("%p cr %d dlci %d mtu %d", VAR_4, VAR_5, VAR_6->dlci, VAR_6->mtu);

 VAR_7 = (void *) VAR_11; VAR_11 += sizeof(*VAR_7);
 VAR_7->addr = FUNC_1(VAR_4->initiator, 0);
 VAR_7->ctrl = FUNC_2(VAR_2, 0);
 VAR_7->len = FUNC_4(sizeof(*VAR_8) + sizeof(*VAR_9));

 VAR_8 = (void *) VAR_11; VAR_11 += sizeof(*VAR_8);
 VAR_8->type = FUNC_5(VAR_5, VAR_1);
 VAR_8->len = FUNC_4(sizeof(*VAR_9));

 VAR_9 = (void *) VAR_11; VAR_11 += sizeof(*VAR_9);
 VAR_9->dlci = VAR_6->dlci;
 VAR_9->priority = VAR_6->priority;
 VAR_9->ack_timer = 0;
 VAR_9->max_retrans = 0;

 if (VAR_4->cfc) {
  VAR_9->flow_ctrl = VAR_5 ? 0xf0 : 0xe0;
  VAR_9->credits = VAR_0;
 } else {
  VAR_9->flow_ctrl = 0;
  VAR_9->credits = 0;
 }

 if (VAR_5 && VAR_3 >= 0)
  VAR_9->mtu = FUNC_6(VAR_3);
 else
  VAR_9->mtu = FUNC_6(VAR_6->mtu);

 *VAR_11 = FUNC_3(VAR_10); VAR_11++;

 return FUNC_7(VAR_4, VAR_10, VAR_11 - VAR_10);
}
