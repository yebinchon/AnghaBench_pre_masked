
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct pfctl {TYPE_1__* anchor; } ;
struct pf_ruleset {TYPE_4__* rules; } ;
struct TYPE_12__ {int list; } ;
struct pf_rule {TYPE_5__ rpool; TYPE_2__* anchor; int action; } ;
struct TYPE_13__ {TYPE_2__* anchor; } ;
struct TYPE_10__ {int ptr; } ;
struct TYPE_11__ {TYPE_3__ active; } ;
struct TYPE_9__ {int name; int path; TYPE_7__ ruleset; } ;
struct TYPE_8__ {struct pf_ruleset ruleset; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct pf_rule*,int ) ;
 int FUNC_2 (struct pf_rule*,struct pf_rule*,int) ;
 void* FUNC_3 (int,int) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,char*,...) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char const*,char) ;

int
FUNC_12(struct pfctl *VAR_2, struct pf_rule *VAR_3, const char *VAR_4)
{
 u_int8_t VAR_5;
 struct pf_rule *VAR_6;
 struct pf_ruleset *VAR_7;
 char *VAR_8;

 VAR_5 = FUNC_6(VAR_3->action);
 if (VAR_5 == VAR_0)
  FUNC_5(1, "Invalid rule type %d", VAR_3->action);

 VAR_7 = &VAR_2->anchor->ruleset;

 if (VAR_4[0] && VAR_3->anchor == ((void*)0)) {



  if ((VAR_3->anchor = FUNC_3(1, sizeof(*VAR_3->anchor))) == ((void*)0))
   FUNC_4(1, "pfctl_add_rule: calloc");

  FUNC_7(&VAR_3->anchor->ruleset);
  VAR_3->anchor->ruleset.anchor = VAR_3->anchor;
  if (FUNC_9(VAR_3->anchor->path, VAR_4,
      sizeof(VAR_6->anchor->path)) >= sizeof(VAR_6->anchor->path))
   FUNC_5(1, "pfctl_add_rule: strlcpy");
  if ((VAR_8 = FUNC_11(VAR_4, '/')) != ((void*)0)) {
   if (!FUNC_10(VAR_8))
    FUNC_4(1, "pfctl_add_rule: bad anchor name %s",
        VAR_4);
  } else
   VAR_8 = (char *)VAR_4;
  if (FUNC_9(VAR_3->anchor->name, VAR_8,
      sizeof(VAR_6->anchor->name)) >= sizeof(VAR_6->anchor->name))
   FUNC_5(1, "pfctl_add_rule: strlcpy");
 }

 if ((VAR_6 = FUNC_3(1, sizeof(*VAR_6))) == ((void*)0))
  FUNC_4(1, "calloc");
 FUNC_2(VAR_3, VAR_6, sizeof(*VAR_6));
 FUNC_0(&VAR_6->rpool.list);
 FUNC_8(&VAR_3->rpool, &VAR_6->rpool);

 FUNC_1(VAR_7->rules[VAR_5].active.ptr, VAR_6, VAR_1);
 return (0);
}
