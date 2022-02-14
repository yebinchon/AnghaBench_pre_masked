
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct superblock {int sb_rules; } ;
struct pfctl {int dummy; } ;
struct pf_rule {int dummy; } ;
struct TYPE_2__ {int nr; } ;
struct pf_opt_rule {TYPE_1__ por_rule; } ;
typedef int b2 ;
typedef int a2 ;
typedef int a ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 struct pf_opt_rule* FUNC_1 (int *) ;
 struct pf_opt_rule* FUNC_2 (struct pf_opt_rule*,int ) ;
 int FUNC_3 (int *,struct pf_opt_rule*,int ) ;
 int FUNC_4 (struct pf_rule*,TYPE_1__*,int ) ;
 int FUNC_5 (struct pf_rule*,struct pf_rule*) ;
 int FUNC_6 (struct pf_opt_rule*) ;
 scalar_t__ FUNC_7 (struct pf_rule*,struct pf_rule*,int) ;
 int FUNC_8 (struct pf_rule*,struct pf_rule*,int) ;
 int VAR_1 ;

int
FUNC_9(struct pfctl *VAR_2, struct superblock *VAR_3)
{
 struct pf_opt_rule *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 struct pf_rule VAR_8, VAR_9, VAR_10, VAR_11;

 for (VAR_4 = FUNC_1(&VAR_3->sb_rules); VAR_4; VAR_4 = VAR_6) {
  VAR_6 = FUNC_2(VAR_4, VAR_1);
  for (VAR_5 = VAR_6; VAR_5; VAR_5 = VAR_7) {
   VAR_7 = FUNC_2(VAR_5, VAR_1);
   FUNC_4(&VAR_8, &VAR_4->por_rule, VAR_0);
   FUNC_4(&VAR_10, &VAR_5->por_rule, VAR_0);
   FUNC_8(&VAR_9, &VAR_8, sizeof(VAR_9));
   FUNC_8(&VAR_11, &VAR_10, sizeof(VAR_11));

   FUNC_5(&VAR_8, &VAR_10);
   FUNC_5(&VAR_11, &VAR_9);
   if (FUNC_7(&VAR_8, &VAR_10, sizeof(VAR_8)) == 0) {
    FUNC_0("removing identical rule  nr%d = *nr%d*",
        VAR_4->por_rule.nr, VAR_5->por_rule.nr);
    FUNC_3(&VAR_3->sb_rules, VAR_5, VAR_1);
    if (VAR_6 == VAR_5)
     VAR_6 = FUNC_2(VAR_4, VAR_1);
    FUNC_6(VAR_5);
   } else if (FUNC_7(&VAR_9, &VAR_11, sizeof(VAR_9)) == 0) {
    FUNC_0("removing identical rule  *nr%d* = nr%d",
        VAR_4->por_rule.nr, VAR_5->por_rule.nr);
    FUNC_3(&VAR_3->sb_rules, VAR_4, VAR_1);
    FUNC_6(VAR_4);
    break;
   }
  }
 }

 return (0);
}
