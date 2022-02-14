
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pfctl {int opts; } ;
struct TYPE_5__ {int mask; int addr; } ;
struct TYPE_6__ {TYPE_1__ a; } ;
struct TYPE_7__ {TYPE_2__ v; } ;
struct pf_rule_addr {TYPE_3__ addr; } ;
struct pf_opt_tbl {scalar_t__ pt_rulecount; int pt_name; int pt_nodes; TYPE_4__* pt_buf; } ;
struct node_tinit {int * host; } ;
struct node_host {TYPE_3__ addr; int af; } ;
typedef int sa_family_t ;
typedef int node_host ;
typedef int buf ;
struct TYPE_8__ {int pfrb_type; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct node_tinit*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_4__*,struct node_host*,int ,int ) ;
 void* FUNC_4 (int,int) ;
 int VAR_4 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,int *,char*,int) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *,struct node_host*,int) ;
 int FUNC_9 (struct node_host*,int ,int) ;
 int FUNC_10 (int ,int,char*,char*,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (char*) ;

int
FUNC_13(struct pfctl *VAR_5, struct pf_opt_tbl **VAR_6, sa_family_t VAR_7,
    struct pf_rule_addr *VAR_8)
{



 static int VAR_9 = 0;
 struct node_host VAR_10;

 if (*VAR_6 == ((void*)0)) {
  if ((*VAR_6 = FUNC_4(1, sizeof(**VAR_6))) == ((void*)0) ||
      ((*VAR_6)->pt_buf = FUNC_4(1, sizeof(*(*VAR_6)->pt_buf))) ==
      ((void*)0))
   FUNC_5(1, "calloc");
  (*VAR_6)->pt_buf->pfrb_type = VAR_0;
  FUNC_1(&(*VAR_6)->pt_nodes);


  FUNC_10((*VAR_6)->pt_name, sizeof((*VAR_6)->pt_name), "%s%d",
      VAR_1, VAR_9++);
  FUNC_0("creating table <%s>", (*VAR_6)->pt_name);
 }

 FUNC_9(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.af = VAR_7;
 VAR_10.addr = VAR_8->addr;







 if (FUNC_3((*VAR_6)->pt_buf, &VAR_10, 0, 0)) {
  FUNC_12("failed to add host");
  return (1);
 }
 if (VAR_5->opts & VAR_2) {
  struct node_tinit *VAR_11;

  if ((VAR_11 = FUNC_4(1, sizeof(*VAR_11))) == ((void*)0))
   FUNC_5(1, "malloc");
  if ((VAR_11->host = FUNC_7(sizeof(*VAR_11->host))) == ((void*)0))
   FUNC_5(1, "malloc");
  FUNC_8(VAR_11->host, &VAR_10, sizeof(*VAR_11->host));
  FUNC_2(&(*VAR_6)->pt_nodes, VAR_11, VAR_4);
 }

 (*VAR_6)->pt_rulecount++;
 if ((*VAR_6)->pt_rulecount == VAR_3)
  FUNC_0("table <%s> now faster than skip steps", (*VAR_6)->pt_name);

 return (0);
}
