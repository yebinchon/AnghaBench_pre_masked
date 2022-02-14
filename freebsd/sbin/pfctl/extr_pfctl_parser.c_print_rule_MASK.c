
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct protoent {char* p_name; } ;
struct TYPE_11__ {int * proxy_port; } ;
struct TYPE_10__ {scalar_t__ port; int addr; } ;
struct TYPE_9__ {int limit; int seconds; } ;
struct TYPE_8__ {int * gid; scalar_t__ op; } ;
struct TYPE_7__ {int * uid; scalar_t__ op; } ;
struct pf_rule {int nr; int action; int rule_flag; int return_ttl; int return_icmp; int return_icmp6; int af; scalar_t__ direction; int log; int logif; char* ifname; scalar_t__ rt; int proto; scalar_t__ keep_state; int type; int code; int tos; scalar_t__ prio; int scrub_flags; int* set_prio; double prob; int max_states; int max_src_nodes; int max_src_states; int* timeout; int max_src_conn; char* overload_tblname; int flush; int min_ttl; int max_mss; int set_tos; char* label; char* qname; char* pqname; char* tagname; char* match_tagname; int rtableid; TYPE_5__ rpool; TYPE_4__ divert; scalar_t__ match_tag_not; scalar_t__ allow_opts; TYPE_3__ max_src_conn_rate; scalar_t__ flagset; scalar_t__ flags; TYPE_2__ gid; TYPE_1__ uid; int dst; int os_fingerprint; int src; scalar_t__ ifnot; scalar_t__ quick; scalar_t__ natpass; } ;
struct icmptypeent {char* name; } ;
struct icmpcodeent {char* name; } ;
typedef int buf ;
struct TYPE_12__ {char* name; int timeout; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int *,int) ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 size_t VAR_29 ;
 scalar_t__ VAR_30 ;
 size_t VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 size_t VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 double VAR_39 ;
 struct icmpcodeent* FUNC_1 (int,int,int) ;
 struct icmptypeent* FUNC_2 (int,int) ;
 struct protoent* FUNC_3 (int) ;
 int * FUNC_4 (int,int *,char*,int) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_6__* VAR_40 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int ,int *,int,int,int,int) ;
 int FUNC_8 (TYPE_5__*,int ,int ,int,size_t) ;
 int FUNC_9 (scalar_t__,int ,int ,char*,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int,char*,double) ;
 int FUNC_12 (char*) ;

void
FUNC_13(struct pf_rule *VAR_41, const char *VAR_42, int VAR_43, int VAR_44)
{
 static const char *VAR_45[] = { "pass", "block", "scrub",
     "no scrub", "nat", "no nat", "binat", "no binat", "rdr", "no rdr" };
 static const char *VAR_46[] = { "anchor", "anchor", "anchor",
     "anchor", "nat-anchor", "nat-anchor", "binat-anchor",
     "binat-anchor", "rdr-anchor", "rdr-anchor" };
 int VAR_47, VAR_48;

 if (VAR_43)
  FUNC_10("@%d ", VAR_41->nr);
 if (VAR_41->action > VAR_27)
  FUNC_10("action(%d)", VAR_41->action);
 else if (VAR_42[0]) {
  if (VAR_42[0] == '_') {
   FUNC_10("%s", VAR_46[VAR_41->action]);
  } else
   FUNC_10("%s \"%s\"", VAR_46[VAR_41->action],
       VAR_42);
 } else {
  FUNC_10("%s", VAR_45[VAR_41->action]);
  if (VAR_41->natpass)
   FUNC_10(" pass");
 }
 if (VAR_41->action == VAR_19) {
  if (VAR_41->rule_flag & VAR_8)
   FUNC_10(" return");
  else if (VAR_41->rule_flag & VAR_10) {
   if (!VAR_41->return_ttl)
    FUNC_10(" return-rst");
   else
    FUNC_10(" return-rst(ttl %d)", VAR_41->return_ttl);
  } else if (VAR_41->rule_flag & VAR_9) {
   const struct icmpcodeent *VAR_49, *VAR_50;

   VAR_49 = FUNC_1(VAR_41->return_icmp >> 8,
       VAR_41->return_icmp & 255, 129);
   VAR_50 = FUNC_1(VAR_41->return_icmp6 >> 8,
       VAR_41->return_icmp6 & 255, 128);

   switch (VAR_41->af) {
   case 129:
    FUNC_10(" return-icmp");
    if (VAR_49 == ((void*)0))
     FUNC_10("(%u)", VAR_41->return_icmp & 255);
    else
     FUNC_10("(%s)", VAR_49->name);
    break;
   case 128:
    FUNC_10(" return-icmp6");
    if (VAR_50 == ((void*)0))
     FUNC_10("(%u)", VAR_41->return_icmp6 & 255);
    else
     FUNC_10("(%s)", VAR_50->name);
    break;
   default:
    FUNC_10(" return-icmp");
    if (VAR_49 == ((void*)0))
     FUNC_10("(%u, ", VAR_41->return_icmp & 255);
    else
     FUNC_10("(%s, ", VAR_49->name);
    if (VAR_50 == ((void*)0))
     FUNC_10("%u)", VAR_41->return_icmp6 & 255);
    else
     FUNC_10("%s)", VAR_50->name);
    break;
   }
  } else
   FUNC_10(" drop");
 }
 if (VAR_41->direction == VAR_22)
  FUNC_10(" in");
 else if (VAR_41->direction == VAR_28)
  FUNC_10(" out");
 if (VAR_41->log) {
  FUNC_10(" log");
  if (VAR_41->log & ~VAR_23 || VAR_41->logif) {
   int VAR_51 = 0;

   FUNC_10(" (");
   if (VAR_41->log & VAR_24)
    FUNC_10("%sall", VAR_51++ ? ", " : "");
   if (VAR_41->log & VAR_25)
    FUNC_10("%suser", VAR_51++ ? ", " : "");
   if (VAR_41->logif)
    FUNC_10("%sto pflog%u", VAR_51++ ? ", " : "",
        VAR_41->logif);
   FUNC_10(")");
  }
 }
 if (VAR_41->quick)
  FUNC_10(" quick");
 if (VAR_41->ifname[0]) {
  if (VAR_41->ifnot)
   FUNC_10(" on ! %s", VAR_41->ifname);
  else
   FUNC_10(" on %s", VAR_41->ifname);
 }
 if (VAR_41->rt) {
  if (VAR_41->rt == VAR_33)
   FUNC_10(" route-to");
  else if (VAR_41->rt == VAR_32)
   FUNC_10(" reply-to");
  else if (VAR_41->rt == VAR_20)
   FUNC_10(" dup-to");
  FUNC_10(" ");
  FUNC_8(&VAR_41->rpool, 0, 0, VAR_41->af, VAR_29);
 }
 if (VAR_41->af) {
  if (VAR_41->af == 129)
   FUNC_10(" inet");
  else
   FUNC_10(" inet6");
 }
 if (VAR_41->proto) {
  struct protoent *VAR_52;

  if ((VAR_52 = FUNC_3(VAR_41->proto)) != ((void*)0))
   FUNC_10(" proto %s", VAR_52->p_name);
  else
   FUNC_10(" proto %u", VAR_41->proto);
 }
 FUNC_7(&VAR_41->src, VAR_41->os_fingerprint, &VAR_41->dst, VAR_41->af, VAR_41->proto,
     VAR_43, VAR_44);
 if (VAR_41->uid.op)
  FUNC_9(VAR_41->uid.op, VAR_41->uid.uid[0], VAR_41->uid.uid[1], "user",
      VAR_38);
 if (VAR_41->gid.op)
  FUNC_9(VAR_41->gid.op, VAR_41->gid.gid[0], VAR_41->gid.gid[1], "group",
      VAR_0);
 if (VAR_41->flags || VAR_41->flagset) {
  FUNC_10(" flags ");
  FUNC_6(VAR_41->flags);
  FUNC_10("/");
  FUNC_6(VAR_41->flagset);
 } else if (VAR_41->action == VAR_29 &&
     (!VAR_41->proto || VAR_41->proto == VAR_1) &&
     !(VAR_41->rule_flag & VAR_2) &&
     !VAR_42[0] && VAR_41->keep_state)
  FUNC_10(" flags any");
 if (VAR_41->type) {
  const struct icmptypeent *VAR_53;

  VAR_53 = FUNC_2(VAR_41->type-1, VAR_41->af);
  if (VAR_41->af != 128)
   FUNC_10(" icmp-type");
  else
   FUNC_10(" icmp6-type");
  if (VAR_53 != ((void*)0))
   FUNC_10(" %s", VAR_53->name);
  else
   FUNC_10(" %u", VAR_41->type-1);
  if (VAR_41->code) {
   const struct icmpcodeent *VAR_54;

   VAR_54 = FUNC_1(VAR_41->type-1, VAR_41->code-1, VAR_41->af);
   if (VAR_54 != ((void*)0))
    FUNC_10(" code %s", VAR_54->name);
   else
    FUNC_10(" code %u", VAR_41->code-1);
  }
 }
 if (VAR_41->tos)
  FUNC_10(" tos 0x%2.2x", VAR_41->tos);
 if (VAR_41->prio)
  FUNC_10(" prio %u", VAR_41->prio == VAR_30 ? 0 : VAR_41->prio);
 if (VAR_41->scrub_flags & VAR_15) {
  char *VAR_55 = "";
  FUNC_10(" set (");
  if (VAR_41->scrub_flags & VAR_16) {
   if (VAR_41->set_prio[0] == VAR_41->set_prio[1])
    FUNC_10("%s prio %u", VAR_55, VAR_41->set_prio[0]);
   else
    FUNC_10("%s prio(%u, %u)", VAR_55, VAR_41->set_prio[0],
        VAR_41->set_prio[1]);
   VAR_55 = ",";
  }
  FUNC_10(" )");
 }
 if (!VAR_41->keep_state && VAR_41->action == VAR_29 && !VAR_42[0])
  FUNC_10(" no state");
 else if (VAR_41->keep_state == VAR_36)
  FUNC_10(" keep state");
 else if (VAR_41->keep_state == VAR_35)
  FUNC_10(" modulate state");
 else if (VAR_41->keep_state == VAR_37)
  FUNC_10(" synproxy state");
 if (VAR_41->prob) {
  char VAR_56[20];

  FUNC_11(VAR_56, sizeof(VAR_56), "%f", VAR_41->prob*100.0/(VAR_39+1.0));
  for (VAR_47 = FUNC_12(VAR_56)-1; VAR_47 > 0; VAR_47--) {
   if (VAR_56[VAR_47] == '0')
    VAR_56[VAR_47] = '\0';
   else {
    if (VAR_56[VAR_47] == '.')
     VAR_56[VAR_47] = '\0';
    break;
   }
  }
  FUNC_10(" probability %s%%", VAR_56);
 }
 VAR_48 = 0;
 if (VAR_41->max_states || VAR_41->max_src_nodes || VAR_41->max_src_states)
  VAR_48 = 1;
 if (VAR_41->rule_flag & VAR_5)
  VAR_48 = 1;
 if (VAR_41->rule_flag & VAR_13)
  VAR_48 = 1;
 if (VAR_41->rule_flag & VAR_3)
  VAR_48 = 1;
 if (VAR_41->rule_flag & VAR_14)
  VAR_48 = 1;
 for (VAR_47 = 0; !VAR_48 && VAR_47 < VAR_17; ++VAR_47)
  if (VAR_41->timeout[VAR_47])
   VAR_48 = 1;
 if (VAR_48) {
  FUNC_10(" (");
  if (VAR_41->max_states) {
   FUNC_10("max %u", VAR_41->max_states);
   VAR_48 = 0;
  }
  if (VAR_41->rule_flag & VAR_5) {
   if (!VAR_48)
    FUNC_10(", ");
   FUNC_10("no-sync");
   VAR_48 = 0;
  }
  if (VAR_41->rule_flag & VAR_13) {
   if (!VAR_48)
    FUNC_10(", ");
   FUNC_10("source-track");
   if (VAR_41->rule_flag & VAR_11)
    FUNC_10(" rule");
   else
    FUNC_10(" global");
   VAR_48 = 0;
  }
  if (VAR_41->max_src_states) {
   if (!VAR_48)
    FUNC_10(", ");
   FUNC_10("max-src-states %u", VAR_41->max_src_states);
   VAR_48 = 0;
  }
  if (VAR_41->max_src_conn) {
   if (!VAR_48)
    FUNC_10(", ");
   FUNC_10("max-src-conn %u", VAR_41->max_src_conn);
   VAR_48 = 0;
  }
  if (VAR_41->max_src_conn_rate.limit) {
   if (!VAR_48)
    FUNC_10(", ");
   FUNC_10("max-src-conn-rate %u/%u",
       VAR_41->max_src_conn_rate.limit,
       VAR_41->max_src_conn_rate.seconds);
   VAR_48 = 0;
  }
  if (VAR_41->max_src_nodes) {
   if (!VAR_48)
    FUNC_10(", ");
   FUNC_10("max-src-nodes %u", VAR_41->max_src_nodes);
   VAR_48 = 0;
  }
  if (VAR_41->overload_tblname[0]) {
   if (!VAR_48)
    FUNC_10(", ");
   FUNC_10("overload <%s>", VAR_41->overload_tblname);
   if (VAR_41->flush)
    FUNC_10(" flush");
   if (VAR_41->flush & VAR_21)
    FUNC_10(" global");
  }
  if (VAR_41->rule_flag & VAR_3) {
   if (!VAR_48)
    FUNC_10(", ");
   FUNC_10("if-bound");
   VAR_48 = 0;
  }
  if (VAR_41->rule_flag & VAR_14) {
   if (!VAR_48)
    FUNC_10(", ");
   FUNC_10("sloppy");
   VAR_48 = 0;
  }
  for (VAR_47 = 0; VAR_47 < VAR_17; ++VAR_47)
   if (VAR_41->timeout[VAR_47]) {
    int VAR_57;

    if (!VAR_48)
     FUNC_10(", ");
    VAR_48 = 0;
    for (VAR_57 = 0; VAR_40[VAR_57].name != ((void*)0);
        ++VAR_57)
     if (VAR_40[VAR_57].timeout == VAR_47)
      break;
    FUNC_10("%s %u", VAR_40[VAR_57].name == ((void*)0) ?
        "inv.timeout" : VAR_40[VAR_57].name,
        VAR_41->timeout[VAR_47]);
   }
  FUNC_10(")");
 }
 if (VAR_41->rule_flag & VAR_2)
  FUNC_10(" fragment");
 if (VAR_41->rule_flag & VAR_4)
  FUNC_10(" no-df");
 if (VAR_41->rule_flag & VAR_6)
  FUNC_10(" random-id");
 if (VAR_41->min_ttl)
  FUNC_10(" min-ttl %d", VAR_41->min_ttl);
 if (VAR_41->max_mss)
  FUNC_10(" max-mss %d", VAR_41->max_mss);
 if (VAR_41->rule_flag & VAR_12)
  FUNC_10(" set-tos 0x%2.2x", VAR_41->set_tos);
 if (VAR_41->allow_opts)
  FUNC_10(" allow-opts");
 if (VAR_41->action == VAR_34) {
  if (VAR_41->rule_flag & VAR_7)
   FUNC_10(" reassemble tcp");

  FUNC_10(" fragment reassemble");
 }
 if (VAR_41->label[0])
  FUNC_10(" label \"%s\"", VAR_41->label);
 if (VAR_41->qname[0] && VAR_41->pqname[0])
  FUNC_10(" queue(%s, %s)", VAR_41->qname, VAR_41->pqname);
 else if (VAR_41->qname[0])
  FUNC_10(" queue %s", VAR_41->qname);
 if (VAR_41->tagname[0])
  FUNC_10(" tag %s", VAR_41->tagname);
 if (VAR_41->match_tagname[0]) {
  if (VAR_41->match_tag_not)
   FUNC_10(" !");
  FUNC_10(" tagged %s", VAR_41->match_tagname);
 }
 if (VAR_41->rtableid != -1)
  FUNC_10(" rtable %u", VAR_41->rtableid);
 if (VAR_41->divert.port) {



  if (FUNC_0(&VAR_41->divert.addr, VAR_41->af)) {
   FUNC_10(" divert-reply");
  } else {

   char VAR_58[48];

   FUNC_10(" divert-to ");
   if (FUNC_4(VAR_41->af, &VAR_41->divert.addr, VAR_58,
       sizeof(VAR_58)) == ((void*)0))
    FUNC_10("?");
   else
    FUNC_10("%s", VAR_58);
   FUNC_10(" port %u", FUNC_5(VAR_41->divert.port));
  }

 }
 if (!VAR_42[0] && (VAR_41->action == VAR_26 ||
     VAR_41->action == VAR_18 || VAR_41->action == VAR_31)) {
  FUNC_10(" -> ");
  FUNC_8(&VAR_41->rpool, VAR_41->rpool.proxy_port[0],
      VAR_41->rpool.proxy_port[1], VAR_41->af, VAR_41->action);
 }
}
