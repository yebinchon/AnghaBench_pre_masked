
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pfctl {int opts; scalar_t__ optimize; TYPE_4__* anchor; } ;
struct pf_ruleset {TYPE_2__* rules; TYPE_4__* anchor; } ;
struct pf_rule {TYPE_3__* anchor; } ;
struct TYPE_8__ {char* name; } ;
struct TYPE_7__ {struct pf_ruleset ruleset; } ;
struct TYPE_5__ {int ptr; } ;
struct TYPE_6__ {TYPE_1__ active; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pf_rule* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct pf_rule*,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct pf_rule*) ;
 int FUNC_4 (struct pfctl*,char*,struct pf_rule*,int) ;
 int FUNC_5 (struct pfctl*,struct pf_ruleset*) ;
 int FUNC_6 (struct pfctl*,char*,TYPE_4__*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,scalar_t__,char*,char*) ;
 int FUNC_9 (char*) ;

int
FUNC_10(struct pfctl *VAR_5, char *VAR_6, struct pf_ruleset *VAR_7,
    int VAR_8, int VAR_9)
{
 struct pf_rule *VAR_10;
 int VAR_11, VAR_12 = FUNC_9(VAR_6);
 int VAR_13 = 0;

 VAR_5->anchor = VAR_7->anchor;

 if (VAR_6[0])
  FUNC_8(&VAR_6[VAR_12], VAR_0 - VAR_12, "/%s", VAR_5->anchor->name);
 else
  FUNC_8(&VAR_6[VAR_12], VAR_0 - VAR_12, "%s", VAR_5->anchor->name);

 if (VAR_9) {
  if (FUNC_1(VAR_7->rules[VAR_8].active.ptr) != ((void*)0)) {
   VAR_13++;
   if (VAR_5->opts & VAR_2)
    FUNC_7(" {\n");
   if ((VAR_5->opts & VAR_1) == 0 &&
       (VAR_11 = FUNC_6(VAR_5,
       VAR_6, VAR_7->anchor))) {
    FUNC_7("pfctl_load_rulesets: "
        "pfctl_ruleset_trans %d\n", VAR_11);
    goto error;
   }
  } else if (VAR_5->opts & VAR_2)
   FUNC_7("\n");

 }

 if (VAR_5->optimize && VAR_8 == VAR_3)
  FUNC_5(VAR_5, VAR_7);

 while ((VAR_10 = FUNC_1(VAR_7->rules[VAR_8].active.ptr)) != ((void*)0)) {
  FUNC_2(VAR_7->rules[VAR_8].active.ptr, VAR_10, VAR_4);
  if ((VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_10, VAR_9)))
   goto error;
  if (VAR_10->anchor) {
   if ((VAR_11 = FUNC_10(VAR_5, VAR_6,
       &VAR_10->anchor->ruleset, VAR_8, VAR_9 + 1)))
    goto error;
  } else if (VAR_5->opts & VAR_2)
   FUNC_7("\n");
  FUNC_3(VAR_10);
 }
 if (VAR_13 && VAR_5->opts & VAR_2) {
  FUNC_0(VAR_9 - 1, (VAR_5->opts & VAR_2));
  FUNC_7("}\n");
 }
 VAR_6[VAR_12] = '\0';
 return (0);

 error:
 VAR_6[VAR_12] = '\0';
 return (VAR_11);

}
