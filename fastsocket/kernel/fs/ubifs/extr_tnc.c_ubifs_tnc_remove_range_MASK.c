
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {int child_cnt; TYPE_1__* zbranch; scalar_t__ cnext; } ;
struct ubifs_info {int tnc_mutex; } ;
struct TYPE_2__ {int len; int lnum; union ubifs_key key; } ;


 int FUNC_0 (union ubifs_key*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (struct ubifs_znode*) ;
 int FUNC_3 (struct ubifs_info*,int ) ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_5 (char*,int ) ;
 struct ubifs_znode* FUNC_6 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key*,union ubifs_key*,union ubifs_key*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ubifs_info*,struct ubifs_znode*,int) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 int FUNC_13 (struct ubifs_info*,int ,int ) ;
 int FUNC_14 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*) ;
 int FUNC_15 (struct ubifs_znode*) ;

int FUNC_16(struct ubifs_info *VAR_1, union ubifs_key *VAR_2,
      union ubifs_key *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7 = 0;
 struct ubifs_znode *VAR_8;
 union ubifs_key *VAR_9;

 FUNC_9(&VAR_1->tnc_mutex);
 while (1) {

  VAR_7 = FUNC_14(VAR_1, VAR_2, &VAR_8, &VAR_5);
  if (VAR_7 < 0)
   goto out_unlock;

  if (VAR_7)
   VAR_9 = VAR_2;
  else {
   VAR_7 = FUNC_12(VAR_1, &VAR_8, &VAR_5);
   if (VAR_7 == -VAR_0) {
    VAR_7 = 0;
    goto out_unlock;
   }
   if (VAR_7 < 0)
    goto out_unlock;
   VAR_9 = &VAR_8->zbranch[VAR_5].key;
   if (!FUNC_7(VAR_1, VAR_9, VAR_2, VAR_3)) {
    VAR_7 = 0;
    goto out_unlock;
   }
  }


  if (VAR_8->cnext || !FUNC_15(VAR_8)) {
   VAR_8 = FUNC_6(VAR_1, VAR_8);
   if (FUNC_1(VAR_8)) {
    VAR_7 = FUNC_2(VAR_8);
    goto out_unlock;
   }
  }


  for (VAR_4 = VAR_5 + 1, VAR_6 = 0; VAR_4 < VAR_8->child_cnt; VAR_4++, VAR_6++) {
   VAR_9 = &VAR_8->zbranch[VAR_4].key;
   if (!FUNC_7(VAR_1, VAR_9, VAR_2, VAR_3))
    break;
   FUNC_8(&VAR_8->zbranch[VAR_4]);
   VAR_7 = FUNC_13(VAR_1, VAR_8->zbranch[VAR_4].lnum,
          VAR_8->zbranch[VAR_4].len);
   if (VAR_7) {
    FUNC_4(VAR_1, VAR_8);
    goto out_unlock;
   }
   FUNC_5("removing %s", FUNC_0(VAR_9));
  }
  if (VAR_6) {
   for (VAR_4 = VAR_5 + 1 + VAR_6; VAR_4 < VAR_8->child_cnt; VAR_4++)
    VAR_8->zbranch[VAR_4 - VAR_6] = VAR_8->zbranch[VAR_4];
   VAR_8->child_cnt -= VAR_6;
  }


  VAR_7 = FUNC_11(VAR_1, VAR_8, VAR_5);
  if (VAR_7)
   goto out_unlock;
 }

out_unlock:
 if (!VAR_7)
  VAR_7 = FUNC_3(VAR_1, 0);
 FUNC_10(&VAR_1->tnc_mutex);
 return VAR_7;
}
