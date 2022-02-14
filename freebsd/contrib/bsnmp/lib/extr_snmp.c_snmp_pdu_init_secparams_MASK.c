
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int engine_boots; } ;
struct TYPE_4__ {scalar_t__ auth_proto; int priv_proto; } ;
struct snmp_pdu {int flags; int msg_salt; TYPE_1__ engine; TYPE_2__ user; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 () ;

void
FUNC_2(struct snmp_pdu *VAR_3)
{
 int32_t VAR_4;

 if (VAR_3->user.auth_proto != VAR_0)
  VAR_3->flags |= VAR_1;

 switch (VAR_3->user.priv_proto) {
 case 128:
  FUNC_0(VAR_3->msg_salt, &VAR_3->engine.engine_boots,
      sizeof(VAR_3->engine.engine_boots));
  VAR_4 = FUNC_1();
  FUNC_0(VAR_3->msg_salt + sizeof(VAR_3->engine.engine_boots), &VAR_4,
      sizeof(int32_t));
  VAR_3->flags |= VAR_2;
  break;
 case 129:
  VAR_4 = FUNC_1();
  FUNC_0(VAR_3->msg_salt, &VAR_4, sizeof(int32_t));
  VAR_4 = FUNC_1();
  FUNC_0(VAR_3->msg_salt + sizeof(int32_t), &VAR_4, sizeof(int32_t));
  VAR_3->flags |= VAR_2;
  break;
 default:
  break;
 }
}
