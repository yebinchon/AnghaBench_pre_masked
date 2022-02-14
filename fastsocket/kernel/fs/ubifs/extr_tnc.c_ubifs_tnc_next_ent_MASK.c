
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {union ubifs_key key; int len; } ;
struct ubifs_info {int tnc_mutex; } ;
struct ubifs_dent_node {int dummy; } ;
struct qstr {scalar_t__ name; } ;


 int FUNC_0 (union ubifs_key*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ubifs_dent_node* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*) ;
 scalar_t__ FUNC_4 (struct ubifs_info*,union ubifs_key*) ;
 int FUNC_5 (struct ubifs_info*,union ubifs_key*) ;
 int FUNC_6 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*,struct qstr const*) ;
 int FUNC_11 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_zbranch*,struct ubifs_dent_node*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*) ;
 scalar_t__ FUNC_15 (int) ;

struct ubifs_dent_node *FUNC_16(struct ubifs_info *VAR_3,
        union ubifs_key *VAR_4,
        const struct qstr *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = FUNC_5(VAR_3, VAR_4);
 struct ubifs_znode *VAR_9;
 struct ubifs_dent_node *VAR_10;
 struct ubifs_zbranch *VAR_11;
 union ubifs_key *VAR_12;

 FUNC_2("%s %s", VAR_5->name ? (char *)VAR_5->name : "(lowest)", FUNC_0(VAR_4));
 FUNC_13(FUNC_3(VAR_3, VAR_4));

 FUNC_8(&VAR_3->tnc_mutex);
 VAR_7 = FUNC_14(VAR_3, VAR_4, &VAR_9, &VAR_6);
 if (FUNC_15(VAR_7 < 0))
  goto out_unlock;

 if (VAR_5->name) {
  if (VAR_7) {

   VAR_7 = FUNC_10(VAR_3, VAR_4, &VAR_9, &VAR_6, VAR_5);
   FUNC_2("rc returned %d, znode %p, n %d",
    VAR_7, VAR_9, VAR_6);
   if (FUNC_15(VAR_7 < 0))
    goto out_unlock;
  }


  VAR_7 = FUNC_11(VAR_3, &VAR_9, &VAR_6);
  if (FUNC_15(VAR_7))
   goto out_unlock;
 } else {





  if (!VAR_7) {





   VAR_7 = FUNC_11(VAR_3, &VAR_9, &VAR_6);
   if (VAR_7)
    goto out_unlock;
  }
 }

 VAR_11 = &VAR_9->zbranch[VAR_6];
 VAR_10 = FUNC_7(VAR_11->len, VAR_2);
 if (FUNC_15(!VAR_10)) {
  VAR_7 = -VAR_1;
  goto out_unlock;
 }





 VAR_12 = &VAR_11->key;
 if (FUNC_4(VAR_3, VAR_12) != FUNC_4(VAR_3, VAR_4) ||
     FUNC_5(VAR_3, VAR_12) != VAR_8) {
  VAR_7 = -VAR_0;
  goto out_free;
 }

 VAR_7 = FUNC_12(VAR_3, VAR_11, VAR_10);
 if (FUNC_15(VAR_7))
  goto out_free;

 FUNC_9(&VAR_3->tnc_mutex);
 return VAR_10;

out_free:
 FUNC_6(VAR_10);
out_unlock:
 FUNC_9(&VAR_3->tnc_mutex);
 return FUNC_1(VAR_7);
}
