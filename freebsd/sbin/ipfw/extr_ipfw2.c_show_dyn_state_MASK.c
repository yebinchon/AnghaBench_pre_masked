
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct protoent {int p_name; } ;
struct in_addr {void* s_addr; } ;
struct format_opts {scalar_t__ pcwidth; scalar_t__ bcwidth; int tstate; } ;
struct cmdline_opts {scalar_t__ verbose; } ;
struct buf_pr {int dummy; } ;
typedef int rulenum ;
struct TYPE_4__ {int addr_type; char* src_port; char* dst_port; int dst_ip6; int src_ip6; int dst_ip; int src_ip; int proto; } ;
struct TYPE_5__ {scalar_t__ expire; int dyn_type; scalar_t__ kidx; int state; int ack_fwd; char* ack_rev; TYPE_1__ id; int count; int bcnt; int pcnt; int rule; } ;
typedef TYPE_2__ ipfw_dyn_rule ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct buf_pr*,char*,...) ;
 struct protoent* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct in_addr) ;
 int FUNC_5 (int ,int *,char*,int) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (struct buf_pr*,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct cmdline_opts *VAR_8, struct format_opts *VAR_9,
    struct buf_pr *VAR_10, ipfw_dyn_rule *VAR_11)
{
 struct protoent *VAR_12;
 struct in_addr VAR_13;
 uint16_t VAR_14;
 char VAR_15[VAR_3];

 if (VAR_11->expire == 0 && VAR_11->dyn_type != 128)
  return;

 FUNC_0(&VAR_11->rule, &VAR_14, sizeof(VAR_14));
 FUNC_1(VAR_10, "%05d", VAR_14);
 if (VAR_9->pcwidth > 0 || VAR_9->bcwidth > 0) {
  FUNC_1(VAR_10, " ");
  FUNC_7(VAR_10, &VAR_11->pcnt, VAR_9->pcwidth);
  FUNC_7(VAR_10, &VAR_11->bcnt, VAR_9->bcwidth);
  FUNC_1(VAR_10, "(%ds)", VAR_11->expire);
 }
 switch (VAR_11->dyn_type) {
 case 128:
  FUNC_1(VAR_10, " PARENT %d", VAR_11->count);
  break;
 case 129:
  FUNC_1(VAR_10, " LIMIT");
  break;
 case 130:
  FUNC_1(VAR_10, " STATE");
  break;
 }

 if ((VAR_12 = FUNC_2(VAR_11->id.proto)) != ((void*)0))
  FUNC_1(VAR_10, " %s", VAR_12->p_name);
 else
  FUNC_1(VAR_10, " proto %u", VAR_11->id.proto);

 if (VAR_11->id.addr_type == 4) {
  VAR_13.s_addr = FUNC_3(VAR_11->id.src_ip);
  FUNC_1(VAR_10, " %s %d", FUNC_4(VAR_13), VAR_11->id.src_port);

  VAR_13.s_addr = FUNC_3(VAR_11->id.dst_ip);
  FUNC_1(VAR_10, " <-> %s %d", FUNC_4(VAR_13), VAR_11->id.dst_port);
 } else if (VAR_11->id.addr_type == 6) {
  FUNC_1(VAR_10, " %s %d", FUNC_5(VAR_0, &VAR_11->id.src_ip6, VAR_15,
      sizeof(VAR_15)), VAR_11->id.src_port);
  FUNC_1(VAR_10, " <-> %s %d", FUNC_5(VAR_0, &VAR_11->id.dst_ip6,
      VAR_15, sizeof(VAR_15)), VAR_11->id.dst_port);
 } else
  FUNC_1(VAR_10, " UNKNOWN <-> UNKNOWN");
 if (VAR_11->kidx != 0)
  FUNC_1(VAR_10, " :%s", FUNC_6(VAR_9->tstate,
      VAR_11->kidx, VAR_5));



 if (VAR_8->verbose) {
  FUNC_1(VAR_10, " state 0x%08x%s", VAR_11->state,
      VAR_11->state ? " ": ",");
  if (VAR_11->state & VAR_4)
   FUNC_1(VAR_10, "ORPHANED,");
  if ((VAR_11->state & (VAR_7 | (VAR_7 << 8))) == (VAR_7 | (VAR_7 << 8)))
   FUNC_1(VAR_10, "BOTH_SYN,");
  else {
   if (VAR_11->state & VAR_7)
    FUNC_1(VAR_10, "F_SYN,");
   if (VAR_11->state & (VAR_7 << 8))
    FUNC_1(VAR_10, "R_SYN,");
  }
  if ((VAR_11->state & (VAR_6 | (VAR_6 << 8))) == (VAR_6 | (VAR_6 << 8)))
   FUNC_1(VAR_10, "BOTH_FIN,");
  else {
   if (VAR_11->state & VAR_6)
    FUNC_1(VAR_10, "F_FIN,");
   if (VAR_11->state & (VAR_6 << 8))
    FUNC_1(VAR_10, "R_FIN,");
  }
  FUNC_1(VAR_10, " f_ack 0x%x, r_ack 0x%x", VAR_11->ack_fwd,
      VAR_11->ack_rev);
 }
}
