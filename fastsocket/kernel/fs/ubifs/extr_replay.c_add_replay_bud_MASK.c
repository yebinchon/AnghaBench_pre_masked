
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int replay_buds; } ;
struct ubifs_bud {int lnum; int start; int jhead; } ;
struct bud_entry {unsigned long long sqnum; int list; struct ubifs_bud* bud; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (struct ubifs_bud*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_bud*) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_2, int VAR_3, int VAR_4, int VAR_5,
     unsigned long long VAR_6)
{
 struct ubifs_bud *VAR_7;
 struct bud_entry *VAR_8;

 FUNC_0("add replay bud LEB %d:%d, head %d", VAR_3, VAR_4, VAR_5);

 VAR_7 = FUNC_2(sizeof(struct ubifs_bud), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(sizeof(struct bud_entry), VAR_1);
 if (!VAR_8) {
  FUNC_1(VAR_7);
  return -VAR_0;
 }

 VAR_7->lnum = VAR_3;
 VAR_7->start = VAR_4;
 VAR_7->jhead = VAR_5;
 FUNC_4(VAR_2, VAR_7);

 VAR_8->bud = VAR_7;
 VAR_8->sqnum = VAR_6;
 FUNC_3(&VAR_8->list, &VAR_2->replay_buds);

 return 0;
}
