
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct link {int continuity_interval; int started; int state; int fsm_msg_cnt; TYPE_1__* owner; int name; int abort_limit; int next_in_no; int checkpoint; int max_pkt_target; int max_pkt; } ;
struct TYPE_2__ {struct link** active_links; } ;







 int const VAR_0 ;




 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct link*) ;
 scalar_t__ FUNC_4 (struct link*) ;
 int FUNC_5 (struct link*,int) ;
 int FUNC_6 (struct link*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct link*) ;
 int FUNC_9 (struct link*,int const,int,int ,int ,int ,int ) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static void FUNC_11(struct link *VAR_1, unsigned VAR_2)
{
 struct link *VAR_3;
 u32 VAR_4 = VAR_1->continuity_interval;

 if (!VAR_1->started && (VAR_2 != 132))
  return;

 if (FUNC_4(VAR_1)) {
  if (VAR_2 == 131) {
   FUNC_5(VAR_1, VAR_4);
  }
  return;
 }
 FUNC_0("STATE_EV: <%s> ", VAR_1->name);

 switch (VAR_1->state) {
 case 128:
  FUNC_0("WW/");
  switch (VAR_2) {
  case 130:
   FUNC_0("TRF-");

  case 136:
   FUNC_0("ACT\n");
   break;
  case 131:
   FUNC_0("TIM ");
   if (VAR_1->next_in_no != VAR_1->checkpoint) {
    VAR_1->checkpoint = VAR_1->next_in_no;
    if (FUNC_7(VAR_1->owner)) {
     FUNC_9(VAR_1, VAR_0,
         0, 0, 0, 0, 0);
     VAR_1->fsm_msg_cnt++;
    } else if (VAR_1->max_pkt < VAR_1->max_pkt_target) {
     FUNC_9(VAR_1, VAR_0,
         1, 0, 0, 0, 0);
     VAR_1->fsm_msg_cnt++;
    }
    FUNC_5(VAR_1, VAR_4);
    break;
   }
   FUNC_0(" -> WU\n");
   VAR_1->state = 129;
   VAR_1->fsm_msg_cnt = 0;
   FUNC_9(VAR_1, VAR_0, 1, 0, 0, 0, 0);
   VAR_1->fsm_msg_cnt++;
   FUNC_5(VAR_1, VAR_4 / 4);
   break;
  case 135:
   FUNC_0("RES -> RR\n");
   FUNC_2("Resetting link <%s>, requested by peer\n",
        VAR_1->name);
   FUNC_8(VAR_1);
   VAR_1->state = 134;
   VAR_1->fsm_msg_cnt = 0;
   FUNC_9(VAR_1, 136, 0, 0, 0, 0, 0);
   VAR_1->fsm_msg_cnt++;
   FUNC_5(VAR_1, VAR_4);
   break;
  default:
   FUNC_1("Unknown link event %u in WW state\n", VAR_2);
  }
  break;
 case 129:
  FUNC_0("WU/");
  switch (VAR_2) {
  case 130:
   FUNC_0("TRF-");
  case 136:
   FUNC_0("ACT -> WW\n");
   VAR_1->state = 128;
   VAR_1->fsm_msg_cnt = 0;
   FUNC_5(VAR_1, VAR_4);
   break;
  case 135:
   FUNC_0("RES -> RR\n");
   FUNC_2("Resetting link <%s>, requested by peer "
        "while probing\n", VAR_1->name);
   FUNC_8(VAR_1);
   VAR_1->state = 134;
   VAR_1->fsm_msg_cnt = 0;
   FUNC_9(VAR_1, 136, 0, 0, 0, 0, 0);
   VAR_1->fsm_msg_cnt++;
   FUNC_5(VAR_1, VAR_4);
   break;
  case 131:
   FUNC_0("TIM ");
   if (VAR_1->next_in_no != VAR_1->checkpoint) {
    FUNC_0("-> WW \n");
    VAR_1->state = 128;
    VAR_1->fsm_msg_cnt = 0;
    VAR_1->checkpoint = VAR_1->next_in_no;
    if (FUNC_7(VAR_1->owner)) {
     FUNC_9(VAR_1, VAR_0,
         0, 0, 0, 0, 0);
     VAR_1->fsm_msg_cnt++;
    }
    FUNC_5(VAR_1, VAR_4);
   } else if (VAR_1->fsm_msg_cnt < VAR_1->abort_limit) {
    FUNC_0("Probing %u/%u,timer = %u ms)\n",
      VAR_1->fsm_msg_cnt, VAR_1->abort_limit,
      VAR_4 / 4);
    FUNC_9(VAR_1, VAR_0,
        1, 0, 0, 0, 0);
    VAR_1->fsm_msg_cnt++;
    FUNC_5(VAR_1, VAR_4 / 4);
   } else {
    FUNC_0("-> RU (%u probes unanswered)\n",
      VAR_1->fsm_msg_cnt);
    FUNC_10("Resetting link <%s>, peer not responding\n",
         VAR_1->name);
    FUNC_8(VAR_1);
    VAR_1->state = 133;
    VAR_1->fsm_msg_cnt = 0;
    FUNC_9(VAR_1, 135,
        0, 0, 0, 0, 0);
    VAR_1->fsm_msg_cnt++;
    FUNC_5(VAR_1, VAR_4);
   }
   break;
  default:
   FUNC_1("Unknown link event %u in WU state\n", VAR_2);
  }
  break;
 case 133:
  FUNC_0("RU/");
  switch (VAR_2) {
  case 130:
   FUNC_0("TRF-\n");
   break;
  case 136:
   VAR_3 = VAR_1->owner->active_links[0];
   if (VAR_3 && FUNC_6(VAR_3)) {
    FUNC_0("ACT\n");
    break;
   }
   FUNC_0("ACT -> WW\n");
   VAR_1->state = 128;
   VAR_1->fsm_msg_cnt = 0;
   FUNC_3(VAR_1);
   FUNC_9(VAR_1, VAR_0, 1, 0, 0, 0, 0);
   VAR_1->fsm_msg_cnt++;
   FUNC_5(VAR_1, VAR_4);
   break;
  case 135:
   FUNC_0("RES \n");
   FUNC_0(" -> RR\n");
   VAR_1->state = 134;
   VAR_1->fsm_msg_cnt = 0;
   FUNC_9(VAR_1, 136, 1, 0, 0, 0, 0);
   VAR_1->fsm_msg_cnt++;
   FUNC_5(VAR_1, VAR_4);
   break;
  case 132:
   FUNC_0("START-");
   VAR_1->started = 1;

  case 131:
   FUNC_0("TIM \n");
   FUNC_9(VAR_1, 135, 0, 0, 0, 0, 0);
   VAR_1->fsm_msg_cnt++;
   FUNC_5(VAR_1, VAR_4);
   break;
  default:
   FUNC_1("Unknown link event %u in RU state\n", VAR_2);
  }
  break;
 case 134:
  FUNC_0("RR/ ");
  switch (VAR_2) {
  case 130:
   FUNC_0("TRF-");

  case 136:
   VAR_3 = VAR_1->owner->active_links[0];
   if (VAR_3 && FUNC_6(VAR_3)) {
    FUNC_0("ACT\n");
    break;
   }
   FUNC_0("ACT -> WW\n");
   VAR_1->state = 128;
   VAR_1->fsm_msg_cnt = 0;
   FUNC_3(VAR_1);
   FUNC_9(VAR_1, VAR_0, 1, 0, 0, 0, 0);
   VAR_1->fsm_msg_cnt++;
   FUNC_5(VAR_1, VAR_4);
   break;
  case 135:
   FUNC_0("RES\n");
   break;
  case 131:
   FUNC_0("TIM\n");
   FUNC_9(VAR_1, 136, 0, 0, 0, 0, 0);
   VAR_1->fsm_msg_cnt++;
   FUNC_5(VAR_1, VAR_4);
   FUNC_0("fsm_msg_cnt %u\n", VAR_1->fsm_msg_cnt);
   break;
  default:
   FUNC_1("Unknown link event %u in RR state\n", VAR_2);
  }
  break;
 default:
  FUNC_1("Unknown link state %u/%u\n", VAR_1->state, VAR_2);
 }
}
