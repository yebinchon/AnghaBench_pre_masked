
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {struct ubifs_zbranch* zbranch; scalar_t__ cnext; } ;
struct ubifs_zbranch {int lnum; int len; int offs; int key; int * znode; } ;
struct ubifs_info {int tnc_mutex; scalar_t__ replaying; } ;
struct qstr {char* name; int len; } ;


 int FUNC_0 (union ubifs_key const*) ;
 scalar_t__ FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (struct ubifs_znode*) ;
 int FUNC_3 (struct ubifs_info*,int ) ;
 int FUNC_4 (char*,int,...) ;
 struct ubifs_znode* FUNC_5 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_6 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*,struct qstr const*,int) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key const*,int *) ;
 int FUNC_8 (struct ubifs_zbranch*) ;
 int FUNC_9 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*,struct qstr const*) ;
 int FUNC_13 (struct ubifs_info*,struct ubifs_znode*,struct ubifs_zbranch*,int) ;
 int FUNC_14 (struct ubifs_info*,int,int) ;
 int FUNC_15 (struct ubifs_info*,union ubifs_key const*,struct qstr*) ;
 int FUNC_16 (struct ubifs_znode*) ;

int FUNC_17(struct ubifs_info *VAR_0, const union ubifs_key *VAR_1,
       int VAR_2, int VAR_3, int VAR_4, const struct qstr *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;
 struct ubifs_znode *VAR_9;

 FUNC_10(&VAR_0->tnc_mutex);
 FUNC_4("LEB %d:%d, name '%.*s', key %s", VAR_2, VAR_3, VAR_5->len, VAR_5->name,
  FUNC_0(VAR_1));
 VAR_6 = FUNC_9(VAR_0, VAR_1, &VAR_9, &VAR_7);
 if (VAR_6 < 0) {
  VAR_8 = VAR_6;
  goto out_unlock;
 }

 if (VAR_6 == 1) {
  if (VAR_0->replaying)
   VAR_6 = FUNC_6(VAR_0, VAR_1, &VAR_9, &VAR_7,
          VAR_5, 1);
  else
   VAR_6 = FUNC_12(VAR_0, VAR_1, &VAR_9, &VAR_7, VAR_5);
  FUNC_4("rc returned %d, znode %p, n %d", VAR_6, VAR_9, VAR_7);
  if (VAR_6 < 0) {
   VAR_8 = VAR_6;
   goto out_unlock;
  }


  if (VAR_9->cnext || !FUNC_16(VAR_9)) {
   VAR_9 = FUNC_5(VAR_0, VAR_9);
   if (FUNC_1(VAR_9)) {
    VAR_8 = FUNC_2(VAR_9);
    goto out_unlock;
   }
  }

  if (VAR_6 == 1) {
   struct ubifs_zbranch *VAR_10 = &VAR_9->zbranch[VAR_7];

   FUNC_8(VAR_10);
   VAR_8 = FUNC_14(VAR_0, VAR_10->lnum, VAR_10->len);
   VAR_10->lnum = VAR_2;
   VAR_10->offs = VAR_3;
   VAR_10->len = VAR_4;
   goto out_unlock;
  }
 }

 if (!VAR_6) {
  struct ubifs_zbranch VAR_11;

  VAR_11.znode = ((void*)0);
  VAR_11.lnum = VAR_2;
  VAR_11.offs = VAR_3;
  VAR_11.len = VAR_4;
  FUNC_7(VAR_0, VAR_1, &VAR_11.key);
  VAR_8 = FUNC_13(VAR_0, VAR_9, &VAR_11, VAR_7 + 1);
  if (VAR_8)
   goto out_unlock;
  if (VAR_0->replaying) {






   struct qstr VAR_12 = { .len = 0, .name = "" };

   VAR_8 = FUNC_3(VAR_0, 0);
   FUNC_11(&VAR_0->tnc_mutex);
   if (VAR_8)
    return VAR_8;
   return FUNC_15(VAR_0, VAR_1, &VAR_12);
  }
 }

out_unlock:
 if (!VAR_8)
  VAR_8 = FUNC_3(VAR_0, 0);
 FUNC_11(&VAR_0->tnc_mutex);
 return VAR_8;
}
