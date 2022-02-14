
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {struct ubifs_zbranch* zbranch; scalar_t__ cnext; } ;
struct ubifs_zbranch {int lnum; int offs; int len; } ;
struct ubifs_info {int tnc_mutex; } ;


 int FUNC_0 (union ubifs_key const*) ;
 scalar_t__ FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (struct ubifs_znode*) ;
 int FUNC_3 (struct ubifs_info*,int ) ;
 int FUNC_4 (char*,int,...) ;
 struct ubifs_znode* FUNC_5 (struct ubifs_info*,struct ubifs_znode*) ;
 scalar_t__ FUNC_6 (struct ubifs_info*,union ubifs_key const*) ;
 int FUNC_7 (struct ubifs_zbranch*) ;
 int FUNC_8 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*,int,int) ;
 int FUNC_12 (struct ubifs_info*,int,int) ;
 int FUNC_13 (struct ubifs_znode*) ;

int FUNC_14(struct ubifs_info *VAR_0, const union ubifs_key *VAR_1,
        int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 struct ubifs_znode *VAR_10;

 FUNC_9(&VAR_0->tnc_mutex);
 FUNC_4("old LEB %d:%d, new LEB %d:%d, len %d, key %s", VAR_2,
  VAR_3, VAR_4, VAR_5, VAR_6, FUNC_0(VAR_1));
 VAR_7 = FUNC_8(VAR_0, VAR_1, &VAR_10, &VAR_8);
 if (VAR_7 < 0) {
  VAR_9 = VAR_7;
  goto out_unlock;
 }

 if (VAR_7 == 1) {
  struct ubifs_zbranch *VAR_11 = &VAR_10->zbranch[VAR_8];

  VAR_7 = 0;
  if (VAR_11->lnum == VAR_2 && VAR_11->offs == VAR_3) {
   FUNC_7(VAR_11);
   VAR_9 = FUNC_12(VAR_0, VAR_11->lnum, VAR_11->len);
   if (VAR_9)
    goto out_unlock;
   VAR_11->lnum = VAR_4;
   VAR_11->offs = VAR_5;
   VAR_11->len = VAR_6;
   VAR_7 = 1;
  } else if (FUNC_6(VAR_0, VAR_1)) {
   VAR_7 = FUNC_11(VAR_0, VAR_1, &VAR_10, &VAR_8,
          VAR_2, VAR_3);
   FUNC_4("rc returned %d, znode %p, n %d, LEB %d:%d",
    VAR_7, VAR_10, VAR_8, VAR_2, VAR_3);
   if (VAR_7 < 0) {
    VAR_9 = VAR_7;
    goto out_unlock;
   }

   if (VAR_7) {

    if (VAR_10->cnext || !FUNC_13(VAR_10)) {
     VAR_10 = FUNC_5(VAR_0, VAR_10);
     if (FUNC_1(VAR_10)) {
      VAR_9 = FUNC_2(VAR_10);
      goto out_unlock;
     }
    }
    VAR_11 = &VAR_10->zbranch[VAR_8];
    FUNC_7(VAR_11);
    VAR_9 = FUNC_12(VAR_0, VAR_11->lnum,
           VAR_11->len);
    if (VAR_9)
     goto out_unlock;
    VAR_11->lnum = VAR_4;
    VAR_11->offs = VAR_5;
    VAR_11->len = VAR_6;
   }
  }
 }

 if (!VAR_7)
  VAR_9 = FUNC_12(VAR_0, VAR_4, VAR_6);

 if (!VAR_9)
  VAR_9 = FUNC_3(VAR_0, 0);

out_unlock:
 FUNC_10(&VAR_0->tnc_mutex);
 return VAR_9;
}
