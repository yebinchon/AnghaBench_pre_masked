
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_conn {scalar_t__ state; } ;
struct icl_pdu {TYPE_1__* ip_bhs; } ;
struct icl_iser_pdu {int dummy; } ;
struct icl_conn {int dummy; } ;
struct TYPE_2__ {int bhs_opcode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct icl_iser_pdu*) ;
 struct iser_conn* FUNC_1 (struct icl_conn*) ;
 struct icl_iser_pdu* FUNC_2 (struct icl_pdu*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct icl_iser_pdu*,struct iser_conn*) ;
 int FUNC_5 (struct iser_conn*,struct icl_iser_pdu*) ;
 int FUNC_6 (struct iser_conn*,struct icl_iser_pdu*) ;
 scalar_t__ FUNC_7 (int) ;

void
FUNC_8(struct icl_conn *VAR_1, struct icl_pdu *VAR_2)
{
 struct iser_conn *VAR_3 = FUNC_1(VAR_1);
 struct icl_iser_pdu *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 if (VAR_3->state != VAR_0)
  return;

 VAR_5 = FUNC_4(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_0("Failed to map TX descriptor pdu %p", VAR_4);
  return;
 }

 if (FUNC_3(VAR_2->ip_bhs->bhs_opcode)) {
  VAR_5 = FUNC_6(VAR_3, VAR_4);
  if (FUNC_7(VAR_5))
   FUNC_0("Failed to send control pdu %p", VAR_4);
 } else {
  VAR_5 = FUNC_5(VAR_3, VAR_4);
  if (FUNC_7(VAR_5))
   FUNC_0("Failed to send command pdu %p", VAR_4);
 }
}
