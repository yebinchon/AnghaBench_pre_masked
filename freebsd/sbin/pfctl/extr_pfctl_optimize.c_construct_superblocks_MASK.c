
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblocks {int dummy; } ;
struct superblock {struct superblocks sb_rules; struct superblocks* sb_skipsteps; } ;
struct pfctl {int dummy; } ;
struct pf_opt_rule {struct superblocks sb_rules; struct superblocks* sb_skipsteps; } ;
struct pf_opt_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pf_opt_queue*) ;
 struct superblock* FUNC_1 (struct pf_opt_queue*) ;
 int FUNC_2 (struct superblocks*) ;
 int FUNC_3 (struct superblocks*,struct superblock*,int ) ;
 int FUNC_4 (struct pf_opt_queue*,struct superblock*,int ) ;
 struct superblock* FUNC_5 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct superblock*,struct superblock*) ;
 int FUNC_7 (char*) ;

int
FUNC_8(struct pfctl *VAR_3, struct pf_opt_queue *VAR_4,
    struct superblocks *VAR_5)
{
 struct superblock *VAR_6 = ((void*)0);
 struct pf_opt_rule *VAR_7;
 int VAR_8;

 while (!FUNC_0(VAR_4)) {
  VAR_7 = FUNC_1(VAR_4);
  FUNC_4(VAR_4, VAR_7, VAR_1);
  if (VAR_6 == ((void*)0) || !FUNC_6(VAR_6, VAR_7)) {
   if ((VAR_6 = FUNC_5(1, sizeof(*VAR_6))) == ((void*)0)) {
    FUNC_7("calloc");
    return (1);
   }
   FUNC_2(&VAR_6->sb_rules);
   for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
    FUNC_2(&VAR_6->sb_skipsteps[VAR_8]);
   FUNC_3(VAR_5, VAR_6, VAR_2);
  }
  FUNC_3(&VAR_6->sb_rules, VAR_7, VAR_1);
 }

 return (0);
}
