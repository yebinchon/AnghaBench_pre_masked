
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {unsigned long time; int level; struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {int key; struct ubifs_znode* znode; } ;
struct ubifs_info {struct ubifs_zbranch zroot; } ;


 int FUNC_0 (union ubifs_key const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (struct ubifs_znode*) ;
 int FUNC_3 (char*,int,...) ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (struct ubifs_info*,union ubifs_key const*) ;
 scalar_t__ FUNC_6 (struct ubifs_info*,union ubifs_key const*,int *) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 struct ubifs_znode* FUNC_8 (struct ubifs_info*,struct ubifs_zbranch*,struct ubifs_znode*,int) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_znode*,union ubifs_key const*,int*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct ubifs_info *VAR_1, const union ubifs_key *VAR_2,
   struct ubifs_znode **VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;
 struct ubifs_znode *VAR_7;
 unsigned long VAR_8 = FUNC_4();

 FUNC_3("search key %s", FUNC_0(VAR_2));

 VAR_7 = VAR_1->zroot.znode;
 if (FUNC_10(!VAR_7)) {
  VAR_7 = FUNC_8(VAR_1, &VAR_1->zroot, ((void*)0), 0);
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);
 }

 VAR_7->time = VAR_8;

 while (1) {
  struct ubifs_zbranch *VAR_9;

  VAR_6 = FUNC_9(VAR_1, VAR_7, VAR_2, VAR_4);

  if (VAR_7->level == 0)
   break;

  if (*VAR_4 < 0)
   *VAR_4 = 0;
  VAR_9 = &VAR_7->zbranch[*VAR_4];

  if (VAR_9->znode) {
   VAR_7->time = VAR_8;
   VAR_7 = VAR_9->znode;
   continue;
  }


  VAR_7 = FUNC_8(VAR_1, VAR_9, VAR_7, *VAR_4);
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);
 }

 *VAR_3 = VAR_7;
 if (VAR_6 || !FUNC_5(VAR_1, VAR_2) || *VAR_4 != -1) {
  FUNC_3("found %d, lvl %d, n %d", VAR_6, VAR_7->level, *VAR_4);
  return VAR_6;
 }
 VAR_5 = FUNC_7(VAR_1, &VAR_7, VAR_4);
 if (VAR_5 == -VAR_0) {
  FUNC_3("found 0, lvl %d, n -1", VAR_7->level);
  *VAR_4 = -1;
  return 0;
 }
 if (FUNC_10(VAR_5 < 0))
  return VAR_5;
 if (FUNC_6(VAR_1, VAR_2, &VAR_7->zbranch[*VAR_4].key)) {
  FUNC_3("found 0, lvl %d, n -1", VAR_7->level);
  *VAR_4 = -1;
  return 0;
 }

 FUNC_3("found 1, lvl %d, n %d", VAR_7->level, *VAR_4);
 *VAR_3 = VAR_7;
 return 1;
}
