
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct pfioc_rule {int anchor_call; int rule; int pool_ticket; int anchor; int ticket; } ;
struct TYPE_3__ {int ticket; } ;
struct pfctl {int opts; int dev; TYPE_1__ paddr; int trans; } ;
struct pf_rule {int rpool; TYPE_2__* anchor; int af; int action; } ;
typedef int pr ;
struct TYPE_4__ {char* name; char* path; scalar_t__ match; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pfioc_rule*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int ,int ,struct pfioc_rule*) ;
 int FUNC_5 (int *,struct pf_rule*,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct pfctl*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (struct pf_rule*,char*,int,int) ;
 int FUNC_11 (char*,scalar_t__,char*,char*) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (char*) ;

int
FUNC_14(struct pfctl *VAR_6, char *VAR_7, struct pf_rule *VAR_8, int VAR_9)
{
 u_int8_t VAR_10 = FUNC_6(VAR_8->action);
 char *VAR_11;
 struct pfioc_rule VAR_12;
 int VAR_13 = FUNC_13(VAR_7);

 FUNC_1(&VAR_12, sizeof(VAR_12));

 if ((VAR_6->opts & VAR_2) == 0)
  VAR_12.ticket = FUNC_9(VAR_6->trans, VAR_10, VAR_7);
 if (FUNC_12(VAR_12.anchor, VAR_7, sizeof(VAR_12.anchor)) >= sizeof(VAR_12.anchor))
  FUNC_3(1, "pfctl_load_rule: strlcpy");

 if (VAR_8->anchor) {
  if (VAR_8->anchor->match) {
   if (VAR_7[0])
    FUNC_11(&VAR_7[VAR_13], VAR_1 - VAR_13,
        "/%s", VAR_8->anchor->name);
   else
    FUNC_11(&VAR_7[VAR_13], VAR_1 - VAR_13,
        "%s", VAR_8->anchor->name);
   VAR_11 = VAR_8->anchor->name;
  } else
   VAR_11 = VAR_8->anchor->path;
 } else
  VAR_11 = "";

 if ((VAR_6->opts & VAR_2) == 0) {
  if (FUNC_7(VAR_6, &VAR_8->rpool, VAR_8->af))
   return (1);
  VAR_12.pool_ticket = VAR_6->paddr.ticket;
  FUNC_5(&VAR_12.rule, VAR_8, sizeof(VAR_12.rule));
  if (VAR_8->anchor && FUNC_12(VAR_12.anchor_call, VAR_11,
      sizeof(VAR_12.anchor_call)) >= sizeof(VAR_12.anchor_call))
   FUNC_3(1, "pfctl_load_rule: strlcpy");
  if (FUNC_4(VAR_6->dev, VAR_0, &VAR_12))
   FUNC_2(1, "DIOCADDRULE");
 }

 if (VAR_6->opts & VAR_4) {
  FUNC_0(VAR_9, !(VAR_6->opts & VAR_5));
  FUNC_10(VAR_8, VAR_8->anchor ? VAR_8->anchor->name : "",
      VAR_6->opts & VAR_5,
      VAR_6->opts & VAR_3);
 }
 VAR_7[VAR_13] = '\0';
 FUNC_8(&VAR_8->rpool);
 return (0);
}
