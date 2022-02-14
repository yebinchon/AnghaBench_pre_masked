
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snmp_pdu {int request_id; } ;
struct sent_pdu {int retrycount; int timeout_id; void* arg; int callback; int reqid; int time; struct snmp_pdu* pdu; } ;
typedef int snmp_send_cb_f ;
typedef int int32_t ;
struct TYPE_3__ {int timeout; int (* timeout_start ) (int *,int ,struct sent_pdu*) ;} ;


 int FUNC_0 (int *,struct sent_pdu*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sent_pdu*) ;
 int FUNC_2 (int *,int *) ;
 struct sent_pdu* FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (struct snmp_pdu*) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,struct sent_pdu*) ;
 int FUNC_8 (char*) ;

int32_t
FUNC_9(struct snmp_pdu *VAR_5, snmp_send_cb_f VAR_6, void *VAR_7)
{
 struct sent_pdu *VAR_8;
 int32_t VAR_9;

 if ((VAR_8 = FUNC_3(sizeof(struct sent_pdu))) == ((void*)0)) {
  FUNC_4(&VAR_3, "%s", FUNC_6(VAR_1));
  return (-1);
 }


 if ((VAR_9 = FUNC_5(VAR_5)) == -1) {
  FUNC_1(VAR_8);
  return (-1);
 }


 VAR_8->pdu = VAR_5;
 if (FUNC_2(&VAR_8->time, ((void*)0)) == -1)
  FUNC_8("gettimeofday() failed");

 VAR_8->reqid = VAR_5->request_id;
 VAR_8->callback = VAR_6;
 VAR_8->arg = VAR_7;
 VAR_8->retrycount=1;
 VAR_8->timeout_id =
     VAR_3.timeout_start(&VAR_3.timeout, VAR_4,
     VAR_8);

 FUNC_0(&VAR_2, VAR_8, VAR_0);

 return (VAR_9);
}
