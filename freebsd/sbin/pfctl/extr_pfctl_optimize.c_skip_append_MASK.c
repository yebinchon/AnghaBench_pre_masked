
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock {int * sb_skipsteps; } ;
struct pf_skip_step {scalar_t__ ps_count; int ps_rules; } ;
struct pf_opt_rule {int dummy; } ;


 int FUNC_0 (struct pf_skip_step*,struct pf_skip_step*,int ) ;
 int FUNC_1 (int *,struct pf_opt_rule*,int ) ;
 struct pf_skip_step* FUNC_2 (struct pf_skip_step*,struct pf_skip_step*,int ) ;
 int FUNC_3 (int *,struct pf_skip_step*,int ) ;
 int * VAR_0 ;
 int VAR_1 ;

void
FUNC_4(struct superblock *VAR_2, int VAR_3,
    struct pf_skip_step *VAR_4, struct pf_opt_rule *VAR_5)
{
 struct pf_skip_step *VAR_6;

 VAR_4->ps_count++;
 FUNC_1(&VAR_4->ps_rules, VAR_5, VAR_0[VAR_3]);


 while ((VAR_6 = FUNC_2(VAR_4, VAR_4, VAR_1)) &&
     VAR_6->ps_count < VAR_4->ps_count) {
  FUNC_3(&VAR_2->sb_skipsteps[VAR_3],
      VAR_4, VAR_1);
  FUNC_0(VAR_6, VAR_4, VAR_1);
 }
}
