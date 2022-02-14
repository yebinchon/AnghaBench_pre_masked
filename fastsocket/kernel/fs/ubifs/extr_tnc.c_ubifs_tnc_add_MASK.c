
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {int lnum; int offs; int len; int key; int * znode; } ;
struct ubifs_info {int tnc_mutex; } ;


 int FUNC_0 (union ubifs_key const*) ;
 int FUNC_1 (struct ubifs_info*,int ) ;
 int FUNC_2 (char*,int,int,int,int ) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key const*,int *) ;
 int FUNC_4 (struct ubifs_zbranch*) ;
 int FUNC_5 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_znode*,struct ubifs_zbranch*,int) ;
 int FUNC_9 (struct ubifs_info*,int,int) ;

int FUNC_10(struct ubifs_info *VAR_0, const union ubifs_key *VAR_1, int VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 struct ubifs_znode *VAR_8;

 FUNC_6(&VAR_0->tnc_mutex);
 FUNC_2("%d:%d, len %d, key %s", VAR_2, VAR_3, VAR_4, FUNC_0(VAR_1));
 VAR_5 = FUNC_5(VAR_0, VAR_1, &VAR_8, &VAR_6);
 if (!VAR_5) {
  struct ubifs_zbranch VAR_9;

  VAR_9.znode = ((void*)0);
  VAR_9.lnum = VAR_2;
  VAR_9.offs = VAR_3;
  VAR_9.len = VAR_4;
  FUNC_3(VAR_0, VAR_1, &VAR_9.key);
  VAR_7 = FUNC_8(VAR_0, VAR_8, &VAR_9, VAR_6 + 1);
 } else if (VAR_5 == 1) {
  struct ubifs_zbranch *VAR_10 = &VAR_8->zbranch[VAR_6];

  FUNC_4(VAR_10);
  VAR_7 = FUNC_9(VAR_0, VAR_10->lnum, VAR_10->len);
  VAR_10->lnum = VAR_2;
  VAR_10->offs = VAR_3;
  VAR_10->len = VAR_4;
 } else
  VAR_7 = VAR_5;
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_0, 0);
 FUNC_7(&VAR_0->tnc_mutex);

 return VAR_7;
}
